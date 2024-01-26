#if !defined(FRONTEND)
#define FRONTEND

#include "../db/model.h"

#include "FrontEndQuarto/FrontEndQuarto.h"
#include "FrontEndCliente/FrontEndCliente.h"
#include "FrontEndFinanceiro/FrontEndFinanceiro.h"

struct
{
  void (*frontEndQuarto)(StDbQuartos **quartos, int *qtdQuartos, int *idQuarto);
  void (*frontEndCliente)(StDbClientes **cliente, int *qtdCliente, int *idCliente);
  void (*frontEndFinanceiro)(StDbFluxoFinanceiro **fluxoFinanceiro, StDbQuartos *quartos, StDbClientes *cliente,StDbControle *controle);
} FrontEnd = {
    (void (*)(StDbQuartos **, int *, int *))frontEndQuarto,
    (void (*)(StDbClientes **, int *, int *))frontEndCliente,
    (void (*)(StDbFluxoFinanceiro **,  StDbQuartos *, StDbClientes *, StDbControle *))frontEndFinanceiro,
};

#endif // FRONTEND
