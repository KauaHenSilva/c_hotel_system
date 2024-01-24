#if !defined(FINANCIERO)
#define FINANCIERO

#include "./realizarReserva/realizarReserva.h"
#include "./exibirReserva/exibirReserva.h"
#include "../../db/model.h"

struct
{
  void (*realizarReserva)(StDbFluxoFinanceiro **financeiro, StDbQuartos *quarto,
                          StDbClientes *cliente, StDbControle *controle);
  StExibirReserva ExibirReserva;
} Financeiro = {
    (void (*)(StDbFluxoFinanceiro **, StDbQuartos *, StDbClientes *, StDbControle *))realizarReserva,
    {
        (void (*)(StDbFluxoFinanceiro *, StDbControle ))exibirReservaAll,
        (void (*)(StDbFluxoFinanceiro *, StDbControle ))exibirReservaId,
        (void (*)(StDbFluxoFinanceiro *, StDbControle ))exibirReservaNome,
    }
};

#endif // FINANCIERO
