#if !defined(CHEKOUT)
#define CHEKOUT

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "../exibirReserva/exibirOnly/exibirOnly.h"

void chekOut(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle *controle, StDbQuartos *dbQuartos)
{
  int cont = 0;
  int *disponivel = NULL;

  printf("Exibindo todos os quartos para fazer check-out\n\n");

  for (int x = 0; x < *controle->quantidadeDeReserva; x++)
  {
    for (int y = 0; y < *controle->quantidadeDeQuarto; y++)
    {
      if (dbQuartos[y].numero == dbFluxoFinanceiro[x].idQuarto)
      {
        if (dbQuartos[y].statusQuarto == LIVRE || dbQuartos[y].statusQuarto == RESERVADO)
        {
          break;
        }
      }
    }

    exibirOnly(dbFluxoFinanceiro, x);

    disponivel = (int *)realloc(disponivel, sizeof(int) * (cont + 1));
    disponivel[cont] = dbFluxoFinanceiro[x].idReserva;
    cont++;
  }

  if (cont == 0)
  {
    printf("Nao existe nenhuma reserva para fazer check-out\n");
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
    return;
  }

  int idDoQuartoSelecionado;
  int localReservaFinal;
  for (int x = 0; x < cont; x++)
  {
    if (idReserva == disponivel[x])
    {
      idDoQuartoSelecionado = dbFluxoFinanceiro[x].idQuarto;
      localReservaFinal = x;
      break;
    }
  }

  int localQuartoFinal;
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
    dbQuartos[localQuartoFinal].statusQuarto = LIVRE;
    printf("Check-out Feito Com sucesso!\n");
    return;
  }

  printf("O Check-out nao foi feito!\n");
}

#endif // CHEKOUT
