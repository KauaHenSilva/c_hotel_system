#if !defined(EXIBIRFLUXOFINANCEIRO)
#define EXIBIRFLUXOFINANCEIRO

#include "../../../db/model.h"
#include "./exibirReservaId.h"
#include "./exibirReservaAll.h"
#include "./exibirReservaName.h"

typedef struct 
{
  void (*exibirReservaAll)(StDbFluxoFinanceiro *dbReserva, StDbControle controle);
  void (*exibirReservaId)(StDbFluxoFinanceiro *dbReserva, StDbControle controle);
  void (*exibirReservaNome)(StDbFluxoFinanceiro *dbReserva, StDbControle controle);
} StExibirReserva;

#endif // EXIBIRCLIENTE
