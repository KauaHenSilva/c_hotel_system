#if !defined(FINANCIERO)
#define FINANCIERO

#include "./realizarReserva/realizarReserva.h"
#include "./exibirReserva/exibirReserva.h"
#include "../../db/model.h"

struct
{
  void (*realizarReserva)(StDbFluxoFinanceiro **financeiro, StDbQuartos *quarto,
                          StDbClientes *cliente, StDbControle *controle);
  void (*exibirReserva)(StDbFluxoFinanceiro *DbFluxoFinanceiro, StDbControle controler);
} Financeiro = {
    (void (*)(StDbFluxoFinanceiro **, StDbQuartos *, StDbClientes *, StDbControle*)) realizarReserva,
    (void (*)(StDbFluxoFinanceiro *, StDbControle)) exibirReserva,
};

#endif // FINANCIERO
