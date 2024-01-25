#if !defined(FINANCIERO)
#define FINANCIERO

#include "./realizarReserva/realizarReserva.h"
#include "./exibirReserva/exibirReserva.h"
#include "./pagamento/pagamento.h"
#include "./check-in/checkin.h"
#include "../../db/model.h"

struct
{
  void (*realizarReserva)(StDbFluxoFinanceiro **financeiro, StDbQuartos *quarto, StDbClientes *cliente, StDbControle *controle);
  void (*realizarPagamento)(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle *controle);
  void (*chekin)(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle *controle);
  StExibirReserva ExibirReserva;
} Financeiro = {
    (void (*)(StDbFluxoFinanceiro **, StDbQuartos *, StDbClientes *, StDbControle *))realizarReserva,
    (void (*)(StDbFluxoFinanceiro *, StDbControle *)) realizarPagamento,
    (void (*)(StDbFluxoFinanceiro *, StDbControle *)) chekin,
    {
        (void (*)(StDbFluxoFinanceiro *, StDbControle ))exibirReservaAll,
        (void (*)(StDbFluxoFinanceiro *, StDbControle ))exibirReservaId,
        (void (*)(StDbFluxoFinanceiro *, StDbControle ))exibirReservaNome,
    }
};

#endif // FINANCIERO
