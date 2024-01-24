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
  adicionandoIdReserva(*dbFluxoFinanceiro, *(controler->idReserva), *(controler->quantidadeDeReserva));
  adicionandoIdCliente(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva),  idUserQuarto.idUser);
  adicionandoIdQuarto(*dbFluxoFinanceiro,*(controler->quantidadeDeCLientes), idUserQuarto.idQuarto);
  adicionandoCpfCliente(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva), idUserQuarto.idUser, cliente);
  adicionandoValorQuarto(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva), idUserQuarto.idQuarto, quarto);
  adicionandoStatusPagamentoReserva(*dbFluxoFinanceiro, *(controler->quantidadeDeReserva));
  adicionandoNomeCliente(cliente, *(controler->quantidadeDeCLientes), *dbFluxoFinanceiro, idUserQuarto.idUser);
}


#endif // ADICIONARRESERVA

