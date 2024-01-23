#if !defined(FRONTEND)
#define FRONTEND

#include "FrontEndQuarto/FrontEndQuarto.h"
#include "FrontEndCliente/FrontEndCliente.h"

struct 
{
  void (*frontEndQuarto)(StDbQuartos **quartos, int *qtdQuartos);
  void (*frontEndCliente)(StDbClientes **cliente, int *qtdCliente);
} FrontEnd = {
  (void (*)(StDbQuartos **, int *)) frontEndQuarto,
  (void (*)(StDbClientes **, int *)) frontEndCliente,
};

#endif // FRONTEND
