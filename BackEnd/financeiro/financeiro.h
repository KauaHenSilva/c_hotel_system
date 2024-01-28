#if !defined(FINANCIERO)
#define FINANCIERO

#include "./realizarReserva/realizarReserva.h"
#include "./exibirReserva/exibirReserva.h"
#include "./check-in/checkin.h"
#include "./exibirValoresIntervalo/exibirValoresIntervalo.h"
#include "./check-out/checkout.h"
#include "./removerReserva/removerReserva.h"
#include "../../db/model.h"

struct
{
  void (*realizarReserva)(StDbFluxoFinanceiro **financeiro, StDbQuartos *quarto, StDbClientes *cliente, StDbControle *controle);
  void (*checkin)(StDbFluxoFinanceiro *dbFluxoFinanceiro,StDbClientes *cliente, StDbControle *controle, StDbQuartos *dbQuartos);
  void (*checkout)(StDbFluxoFinanceiro *dbFluxoFinanceiro,StDbClientes *cliente, StDbControle *controle, StDbQuartos *dbQuartos);
  void (*exibirValoresIntervalo)(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle *controle);
  void (*removerReserva)(StDbFluxoFinanceiro **fluxo, int *qtdFluxo, StDbQuartos *quarto);
  StExibirReserva ExibirReserva;
} Financeiro = {
    (void (*)(StDbFluxoFinanceiro **, StDbQuartos *, StDbClientes *, StDbControle *))realizarReserva,
    (void (*)(StDbFluxoFinanceiro *,StDbClientes *, StDbControle *, StDbQuartos *))checkin,
    (void (*)(StDbFluxoFinanceiro *,StDbClientes *, StDbControle *, StDbQuartos *))chekOut,
    (void (*)(StDbFluxoFinanceiro *, StDbControle *))exibirValoresIntervalo,
    (void (*)(StDbFluxoFinanceiro **, int *, StDbQuartos *))removerReserva,
    {
        (void (*)(StDbFluxoFinanceiro *, StDbControle))exibirReservaAll,
        (void (*)(StDbFluxoFinanceiro *, StDbControle))exibirReservaId,
        (void (*)(StDbFluxoFinanceiro *, StDbControle))exibirReservaNome,
    }
};

#endif // FINANCIERO
