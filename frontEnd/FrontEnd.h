#if !defined(FRONTEND)
#define FRONTEND

#include "FrontEndQuarto/FrontEndQuarto.h"
#include "FrontEndCliente/FrontEndCliente.h"

struct 
{
  void (*frontEndQuarto)(StDbQuartos **quartos, int *qtdQuartos, int *idQuarto);
  void (*frontEndCliente)(StDbClientes **cliente, int *qtdCliente, int *idCliente);
} FrontEnd = {
  (void (*)(StDbQuartos **, int *, int *)) frontEndQuarto,
  (void (*)(StDbClientes **, int *, int *)) frontEndCliente,
};

#endif // FRONTEND
