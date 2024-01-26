#if !defined(FINANCIERO)
#define FINANCIERO

#include "./realizarReserva/realizarReserva.h"
#include "./exibirReserva/exibirReserva.h"
#include "./check-in/checkin.h"
#include "./exibirValoresIntervalo/exibirValoresIntervalo.h"
#include "./check-out/checkout.h"
#include "../../db/model.h"

struct
{
  void (*realizarReserva)(StDbFluxoFinanceiro **financeiro, StDbQuartos *quarto, StDbClientes *cliente, StDbControle *controle);
  void (*chekin)(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle *controle, StDbQuartos *dbQuartos);
  void (*checkout)(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle *controle, StDbQuartos *dbQuartos);
  void (*exibirValoresIntervalo)(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle *controle);
  StExibirReserva ExibirReserva;
} Financeiro = {
    (void (*)(StDbFluxoFinanceiro **, StDbQuartos *, StDbClientes *, StDbControle *))realizarReserva,
    (void (*)(StDbFluxoFinanceiro *, StDbControle *, StDbQuartos *))chekin,
    (void (*)(StDbFluxoFinanceiro *, StDbControle *, StDbQuartos *))chekOut,
    (void (*)(StDbFluxoFinanceiro *, StDbControle *))exibirValoresIntervalo,
    {
        (void (*)(StDbFluxoFinanceiro *, StDbControle))exibirReservaAll,
        (void (*)(StDbFluxoFinanceiro *, StDbControle))exibirReservaId,
        (void (*)(StDbFluxoFinanceiro *, StDbControle))exibirReservaNome,
    }
};

#endif // FINANCIERO
