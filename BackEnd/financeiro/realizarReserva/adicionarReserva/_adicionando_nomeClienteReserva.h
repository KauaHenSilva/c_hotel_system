// typedef enum {PAGO, NAO_PAGO} EnStatusPagamento;
// typedef struct  {
//     // char dataEntradaUser[100];
//     // char dataSaidaUser[100];
//     char cpfUser[15];
//     int idQuarto;
//     double valorPagar;
//     EnStatusPagamento statusPagamento;
// } StDbFluxoFinanceiro ;

#if !defined(ADICIONANDONOMECLIENTE)
#define ADICIONANDONOMECLIENTE

#include "../../../../db/model.h"

void adicionandoNomeCliente(StDbClientes *cliente, int localCl, StDbFluxoFinanceiro *dbFluxoFinanceiro, int localFn )
{
  strcpy(dbFluxoFinanceiro[localFn].nomeCliente, cliente[localCl].nome);
}

#endif // ADICIONANDONOMECLIENTE
