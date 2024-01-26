#if !defined(CHEKOUT)
#define CHEKOUT

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "../exibirReserva/exibirOnly/exibirOnly.h"

int preucurarQuartoReservado(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle *controle, int idQuarto)
{
  for (int x = 0; x < *controle->quantidadeDeReserva; x++)
  {
    if (dbFluxoFinanceiro[x].statusQuarto == RESERVADO && dbFluxoFinanceiro[x].idQuarto == idQuarto)
    {
      return 1;
    }
  }
  return 0;
}

void chekOut(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle *controle, StDbQuartos *dbQuartos)
{
  int cont = 0;
  int *disponivel = NULL;

  printf("Exibindo todos os quartos para fazer check-out\n\n");

  for (int x = 0; x < *controle->quantidadeDeReserva; x++)
  {
    if ((dbFluxoFinanceiro[x].statusPagamento == NAO_PAGO) &&
        (dbFluxoFinanceiro[x].statusQuarto == OCUPADO))
    {
      exibirOnly(dbFluxoFinanceiro, x);
      disponivel = (int *)realloc(disponivel, sizeof(int) * (cont + 1));
      disponivel[cont] = dbFluxoFinanceiro[x].idReserva;
      cont++;
    }
  }

  if (cont == 0)
  {
    printf("Nao existe nenhuma reserva para fazer check-out\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  }

  int idReserva;
  Utils.InputsBasic.getNumeroInt(&idReserva, "Digite o id da reserva que deseja fazer check-out: ");

  int encontrada = 0;
  for (int x = 0; x < cont; x++)
  {
    if (idReserva == disponivel[x])
    {
      encontrada = 1;
      printf("Reserva encontrada\n");
      break;
    }
  }

  if (!encontrada)
  {
    printf("Reserva nao encontrada\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  }

  int idDoQuartoSelecionado = 0;
  int localReservaFinal = 0;

  for (int x = 0; x < *controle->quantidadeDeReserva; x++)
  {
    if (idReserva == dbFluxoFinanceiro[x].idReserva)
    {
      idDoQuartoSelecionado = dbFluxoFinanceiro[x].idQuarto;
      localReservaFinal = x;
      break;
    }
  }

  // Encontrar informações do quarto
  int localQuartoFinal = 0;
  for (int x = 0; x < *controle->quantidadeDeQuarto; x++)
  {
    if (dbQuartos[x].numero == idDoQuartoSelecionado)
    {
      localQuartoFinal = x;
      break;
    }
  }

  if (Utils.InputsBasic.getConfirmacao("Deseja realmente realizar o pagamento? [S]im [N]ao: "))
  {
    dbFluxoFinanceiro[localReservaFinal].statusPagamento = PAGO;
  }

  if (dbFluxoFinanceiro[localReservaFinal].statusPagamento == PAGO)
  {
    dbFluxoFinanceiro[localReservaFinal].statusQuarto = LIVRE;
    
    if (preucurarQuartoReservado(dbFluxoFinanceiro, controle, idDoQuartoSelecionado))
      dbQuartos[localQuartoFinal].statusQuarto = RESERVADO;
    else if(preucurarQuartoOcupado(dbFluxoFinanceiro, controle, idDoQuartoSelecionado))
      dbQuartos[localQuartoFinal].statusQuarto = OCUPADO;
    else
      dbQuartos[localQuartoFinal].statusQuarto = LIVRE;

    printf("Check-out Feito Com sucesso!\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  }

  printf("O Check-out nao foi feito!\n");
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
}

#endif // CHEKOUT
