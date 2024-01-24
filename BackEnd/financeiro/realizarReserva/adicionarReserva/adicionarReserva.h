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

void adicionarReserva(StDbFluxoFinanceiro **dbFluxoFinanceiro, StDbControle *controler, idUserQuarto idUserQuarto, StDbClientes *cliente, StDbQuartos *quarto)
{
  adicionandoEspaco(dbFluxoFinanceiro, controler->quantidadeDeReserva);
  adicionandoIdReserva(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva) - 1, controler->idReserva);
  adicionandoIdCliente(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva) - 1,  idUserQuarto.idUser, cliente);
  adicionandoIdQuarto(*dbFluxoFinanceiro,*(controler->quantidadeDeCLientes) - 1, idUserQuarto.idQuarto, quarto);
  adicionandoCpfCliente(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva) - 1, idUserQuarto.idUser, cliente);
  adicionandoValorQuarto(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva) - 1, idUserQuarto.idQuarto, quarto);
  adicionandoStatusPagamentoReserva(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva) - 1);
  adicionandoNomeCliente(cliente, *(controler->quantidadeDeCLientes) - 1, *dbFluxoFinanceiro, idUserQuarto.idUser);
  quarto[idUserQuarto.idQuarto].status = RESERVADO;
}


#endif // ADICIONARRESERVA

