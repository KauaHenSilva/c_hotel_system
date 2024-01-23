#if !defined(CLIENTE)
#define CLIENTE

#include "../../db/model.h"
#include "./adicionarCliente/adicionarCliente.h"

#include "./exibirCliente/exibirCliente.h"
#include "./exibirCliente/exibirClienteAll.h"
#include "./exibirCliente/exibirClienteCpf.h"
#include "./exibirCliente/exibirClienteID.h"
#include "./exibirCliente/exibirClienteNome.h"

struct stCliente
{
  void (*adicionarCliente)(StDbClintes **dbCliente, int *numClienes);
  StExibirCliente Exibir;
} Cliente = {
    (void (*)(StDbClintes **, int *)) adicionarCliente,
    {
      (void (*)(StDbClintes *, int)) exibirClienteAll,
      (void (*)(StDbClintes *, int)) exibirClienteCpf,
      (void (*)(StDbClintes *, int)) exibirClienteId,
      (void (*)(StDbClintes *, int)) exibirClienteNome,
    }
};

#endif // CLIENTE
