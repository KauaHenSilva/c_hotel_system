#if !defined(REALIZARRESERVA)
#define REALIZARRESERVA

#include "../../quarto/quarto.h"
#include "../../cliente/Cliente.h"

#include "./adicionarReserva/reservaAux/verificandoReservaCliente.h"
#include "./adicionarReserva/reservaAux/verificandoReservaQuarto.h"

#include "./adicionarReserva/adicionarReserva.h"


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

  idUserQuarto idUserQuarto = {
    idCliente,
    idQuarto,
  };

  adicionarReserva(dbFluxoFinanceiro, controle, idUserQuarto, cliente, quarto);

}


#endif // REALIZARRESERVA
