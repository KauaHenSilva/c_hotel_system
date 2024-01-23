#if !defined(CLIENTE)
#define CLIENTE

#include "../../db/model.h"

#include "./adicionarCliente/adicionarCliente.h"

#include "./removerCliente/removerCliente.h"

#include "./exibirCliente/exibirCliente.h"
#include "./exibirCliente/exibirClienteAll.h"
#include "./exibirCliente/exibirClienteCpf.h"
#include "./exibirCliente/exibirClienteID.h"
#include "./exibirCliente/exibirClienteNome.h"

struct stCliente
{
  void (*adicionarCliente)(StDbClientes **dbCliente, int *numClienes);
  void (*removerCliente)(StDbClientes **dbCliente, int *numClienes);
  StExibirCliente Exibir;
} Cliente = {
    (void (*)(StDbClientes **, int *)) adicionarCliente,
    (void (*)(StDbClientes **, int *)) removerCliente,
    {
      (void (*)(StDbClientes *, int)) exibirClienteAll,
      (void (*)(StDbClientes *, int)) exibirClienteCpf,
      (void (*)(StDbClientes *, int)) exibirClienteId,
      (void (*)(StDbClientes *, int)) exibirClienteNome,
    }
};

#endif // CLIENTE
