#if !defined(ADICIONARRESERVA)
#define ADICIONARRESERVA

#include "./_adicionando_CpfClienteReserva.h"
#include "./_adicionando_EspacoReserva.h"
#include "./_adicionando_IdClienteReserva.h"
#include "./_adicionando_IdQuartoReserva.h"
#include "./_adicionando_idReserva.h"
#include "./_adicionando_nomeClienteReserva.h"
#include "./_adicionando_statusPagamentoReserva.h"
#include "./_adicionando_valorQuartoReserva.h"
#include "./_adicionando_AdicionarDiaReserva.h"

void adicionarReserva(StDbFluxoFinanceiro **dbFluxoFinanceiro, StDbControle *controler, auxIdUserQuartoTime idUserQuarto, StDbClientes *cliente, StDbQuartos *quarto)
{
  adicionandoEspaco(dbFluxoFinanceiro, controler->quantidadeDeReserva);
  adicionandoIdReserva(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva) - 1, controler->idReserva);
  adicionandoIdCliente(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva) - 1, idUserQuarto.idUser, cliente);
  adicionandoIdQuarto(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva) - 1, idUserQuarto.idQuarto, quarto);
  adicionandoCpfCliente(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva) - 1, idUserQuarto.idUser, cliente);
  adicionandoStatusPagamentoReserva(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva) - 1);
  adicionandoNomeCliente(cliente, idUserQuarto.idUser, *dbFluxoFinanceiro, *(controler->quantidadeDeReserva) - 1);

  if(quarto[idUserQuarto.idQuarto].statusQuarto == LIVRE)
    quarto[idUserQuarto.idQuarto].statusQuarto = RESERVADO;
  if(cliente[idUserQuarto.idUser].statusCliente == LIVRE)
    cliente[idUserQuarto.idUser].statusCliente = RESERVADO;
    
  ((*dbFluxoFinanceiro)[*(controler->quantidadeDeReserva) - 1].statusQuarto = RESERVADO);
  adicionarDiaDaReserva(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva) - 1, idUserQuarto);
  adicionandoValorQuarto(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva) - 1, idUserQuarto.idQuarto, quarto);
}

#endif // ADICIONARRESERVA
