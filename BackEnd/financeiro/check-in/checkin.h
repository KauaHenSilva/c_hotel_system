
#if !defined(CHEKIN)
#define CHEKIN

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "../exibirReserva/exibirOnly/exibirOnly.h"

void chekin(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle *controle, StDbQuartos *dbQuartos)
{
  int cont = 0;
  int *disponivel = NULL;

  printf("EXibindo todos os quartos para fazer chekin\n\n");

  for (int x = 0; x < *controle->quantidadeDeReserva; x++)
  {
    for (int y = 0; y < *controle->quantidadeDeQuarto; y++)
      if (dbQuartos[y].numero == dbFluxoFinanceiro[x].idQuarto)
        if (dbQuartos[y].statusQuarto == LIVRE || dbQuartos[y].statusQuarto == OCUPADO)
          continue;

    exibirOnly(dbFluxoFinanceiro, x);
    disponivel = (int *)realloc(disponivel, sizeof(int) * ++cont);
    disponivel[cont - 1] = dbFluxoFinanceiro[x].idReserva;
  }

  if (cont == 0)
  {
    printf("Nao existe nenhuma reserva para fazer chekin\n");
    return;
  }

  int idReserva;
  Utils.InputsBasic.getNumeroInt(&idReserva, "Digite o id da reserva que deseja fazer chekin: ");

  int encontrada = 0;
  for(int x = 0; x < cont; x++)
    if(idReserva == disponivel[x])
      {
        encontrada = 1;
        printf("Reserva encontrada\n");
        break;
      }

  if(!encontrada)
  {
    printf("Reserva nao encontrada\n");
    return;
  }

  int idDoQuartoSelecionado;
  for (int x = 0; x < *(controle->quantidadeDeReserva); x++)
  {
      if (idReserva == dbFluxoFinanceiro[x].idReserva)
      {
        idDoQuartoSelecionado = dbFluxoFinanceiro[x].idQuarto;
        break;
      }
  }
  int localQuartoFinal;
  for(int x = 0 ; x < *(controle->quantidadeDeQuarto); x++)
    if(dbQuartos[x].numero == idDoQuartoSelecionado)
      {
        localQuartoFinal = x;
        break;
      }

  dbQuartos[localQuartoFinal].statusQuarto = OCUPADO;
  printf("Quarto %d agora esta ocupado LIVRE, OCUPADO, RESERVADO \n", dbQuartos[localQuartoFinal].numero);
}

#endif // CHEKIN
