#if !defined(EXIBIRCLIENTE)
#define EXIBIRCLIENTE

#include "../../../db/model.h"
#include "./exibirClienteAll.h"
#include "./exibirClienteCpf.h"
#include "./exibirClienteID.h"

typedef struct 
{
  void (*exibirClienteAll)(StDbClientes *dbCliente, int numClientes);
  void (*exibirClienteCpf)(StDbClientes *dbCliente, int numClientes);
  void (*exibirClienteId)(StDbClientes *dbCliente, int numClientes);
  void (*exibirClienteRg)(StDbClientes *dbCliente, int numClientes);
} StExibirCliente;

#endif // EXIBIRCLIENTE
