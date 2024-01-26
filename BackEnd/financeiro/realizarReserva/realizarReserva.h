#if !defined(REALIZARRESERVA)
#define REALIZARRESERVA

#include "../../quarto/quarto.h"
#include "../../cliente/Cliente.h"

#include "./adicionarReserva/reservaAux/verificandoReservaCliente.h"
#include "./adicionarReserva/reservaAux/verificandoReservaQuarto.h"

#include "./adicionarReserva/adicionarReserva.h"


void realizarReserva(StDbFluxoFinanceiro **dbFluxoFinanceiro, StDbQuartos *quarto, StDbClientes *cliente, StDbControle *controle)
{

  Utils.SystemComand.clearTela();
  
  if (!Utils.InputsBasic.getConfirmacao("voce deseja Realizar uma Reserva? [S]im [N]ao: "))
    return;

  int idCliente = verificarReservaCliente(cliente, *(controle->quantidadeDeCLientes));
  int idQuarto = verificarReservaQuarto(quarto, *(controle->quantidadeDeCLientes));

  if (idQuarto == -1 || idCliente == -1)
    return;

  idUserQuarto idUserQuarto = {
    idCliente,
    idQuarto,
  };

  adicionarReserva(dbFluxoFinanceiro, controle, idUserQuarto, cliente, quarto);

}


#endif // REALIZARRESERVA
