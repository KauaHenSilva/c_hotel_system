#if !defined(REALIZARRESERVA)
#define REALIZARRESERVA

#include "../../quarto/quarto.h"
#include "../../cliente/Cliente.h"

#include "./reservaAux/verificandoReservaCliente.h"
#include "./reservaAux/verificandoReservaQuarto.h"

void realizarReserva(StDbFluxoFinanceiro **dbFluxoFinanceiro, StDbClientes *cliente, StDbQuartos *quarto, StDbControle *controle)
{

  Utils.SystemComand.clearTela();
  printf("voce deseja Realizar uma Reserva.\n");
  if (!Utils.InputsBasic.getConfirmacao())
    return;

  int idCliente = verificarReservaCliente(cliente, controle);
  int idQuarto = verificarReservaQuarto(quarto, controle);

  if (idQuarto == -1 || idCliente == -1)
    return;

  printf("Cliente[%d] Quarto[%d]\n", idCliente, idQuarto);
}


#endif // REALIZARRESERVA
