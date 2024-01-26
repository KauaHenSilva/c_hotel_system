#if !defined(REMOVERRESERVA)
#define REMOVERRESERVA

#include "../exibirReserva/exibirOnly/exibirOnly.h"
#include "../util/getReservaId.h"

void removerReserva(StDbFluxoFinanceiro **fluxo, int *qtdFluxo, StDbQuartos *quarto)
{

  for (int x = 0; x < *qtdFluxo; x++)
    exibirOnly(*fluxo, x);

  int id;
  getReservaId(*fluxo, *qtdFluxo, &id);
  if (id == -1)
    return;

  int indexQuarto;
  for(int x = 0 ; x < *qtdFluxo ; x++)
  {
    if((*fluxo)[id].idQuarto == quarto[x].numero)
    {
      indexQuarto = x;
      break;
    }
  }

  if (quarto[indexQuarto].statusQuarto == OCUPADO)
  {
    printf("Quarto ocupado, nao pode ser removido! \n\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  }

  for (int i = id; i < *qtdFluxo - 1; i++)
  {
    (*fluxo)[i] = (*fluxo)[i + 1];
  }

  *fluxo = realloc(*fluxo, (*qtdFluxo - 1) * sizeof(StDbFluxoFinanceiro));
  (*qtdFluxo)--;

  printf("Reserva removida com sucesso!\n\n");

  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
}

#endif // REMOVERQUARTO
