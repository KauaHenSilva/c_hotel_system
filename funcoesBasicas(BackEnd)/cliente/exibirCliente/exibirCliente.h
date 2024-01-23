#if !defined(EXIBIRCLIENTE)
#define EXIBIRCLIENTE

#include "../../../db/model.h"
#include "./exibirClienteAll.h"
#include "./exibirClienteCpf.h"
#include "./exibirClienteID.h"
#include "./exibirClienteNome.h"

typedef struct 
{
  void (*exibirClienteAll)(StDbClintes *dbCliente, int numClientes);
  void (*exibirClienteCpf)(StDbClintes *dbCliente, int numClientes);
  void (*exibirClienteId)(StDbClintes *dbCliente, int numClientes);
  void (*exibirClienteNome)(StDbClintes *dbCliente, int numClientes);
} StExibirCliente;

#endif // EXIBIRCLIENTE
