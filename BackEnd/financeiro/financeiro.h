#if !defined(FINANCIERO)
#define FINANCIERO

#include "./realizarReserva/realizarReserva.h"
#include "../../db/model.h"

struct
{
  void (*realizarReserva)(StDbFluxoFinanceiro **financeiro, StDbQuartos *quarto,
                          StDbClientes *cliente, StDbControle *controle);
} Financeiro = {
    (void (*)(StDbFluxoFinanceiro **, StDbQuartos *, StDbClientes *, StDbControle*))realizarReserva,
};

#endif // FINANCIERO
