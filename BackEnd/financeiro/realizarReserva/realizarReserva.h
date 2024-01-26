#if !defined(REALIZARRESERVA)
#define REALIZARRESERVA

#include "../../quarto/quarto.h"
#include "../../cliente/Cliente.h"

#include "./adicionarReserva/reservaAux/verificandoReservaCliente.h"
#include "./adicionarReserva/reservaAux/verificandoReservaQuarto.h"
#include "./adicionarReserva/reservaAux/verificandoTime.h"

#include "./adicionarReserva/adicionarReserva.h"


void realizarReserva(StDbFluxoFinanceiro **dbFluxoFinanceiro, StDbQuartos *quarto, StDbClientes *cliente, StDbControle *controle)
{

  Utils.SystemComand.clearTela();
  
  if (!Utils.InputsBasic.getConfirmacao("voce deseja Realizar uma Reserva? [S]im [N]ao: "))
    return;

  int idQuarto = verificarReservaQuarto(quarto, *(controle->quantidadeDeCLientes));

  struct tm dataEntradaTemp;
  struct tm dataSaidaTemp;
  
  Utils.SystemComand.clearTela();
  Utils.InputsSavin.getData(&dataEntradaTemp, "Digite a data de entrada da reserva: ");
  Utils.SystemComand.clearTela();
  Utils.InputsSavin.getData(&dataSaidaTemp, "Digite a data de saida da reserva: ");
  
  if(verificaConflitoReserva(*dbFluxoFinanceiro, *(controle->quantidadeDeReserva), dataEntradaTemp, dataSaidaTemp, idQuarto, quarto))
    return;

  int idCliente = verificarReservaCliente(cliente, *(controle->quantidadeDeCLientes));

  if (idQuarto == -1 || idCliente == -1)
    return;

  auxIdUserQuartoTime auxIdUserQuartoTime = {
    idCliente,
    idQuarto,
    dataEntradaTemp,
    dataSaidaTemp
  };

  adicionarReserva(dbFluxoFinanceiro, controle, auxIdUserQuartoTime, cliente, quarto);

  printf("Reserva Realizada com sucesso!\n\n");
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");

}


#endif // REALIZARRESERVA
