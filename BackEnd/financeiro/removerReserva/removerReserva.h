#if !defined(REMOVERRESERVA)
#define REMOVERRESERVA

#include "../exibirReserva/exibirOnly/exibirOnly.h"
#include "../util/getReservaId.h"

void removerReserva(StDbFluxoFinanceiro **fluxo, int *qtdFluxo) {

  for(int x  = 0 ; x < *qtdFluxo ; x++)
    exibirOnly(*fluxo, x);
  
  int id;
  getReservaId(*fluxo, *qtdFluxo, &id);
  if(id == -1) return;

  if((*fluxo)[id].statusPagamento == NAO_PAGO)
  {
    printf("Reserva não foi paga, nao pode ser removida! (Caloteiros Nao passarao) \n");
    return;
  }

  for (int i = id; i < *qtdFluxo - 1; i++) 
  {
    (*fluxo)[i] = (*fluxo)[i + 1];
  }

  *fluxo = realloc(*fluxo, (*qtdFluxo - 1) * sizeof(StDbFluxoFinanceiro));
  (*qtdFluxo)--;
}


#endif // REMOVERQUARTO


