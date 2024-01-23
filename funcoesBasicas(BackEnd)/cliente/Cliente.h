#if !defined(CLIENTE)
#define CLIENTE

#include "../../db/model.h"
#include "./adicionarCliente/adicionarCliente.h"

struct stCliente
{
  void (*adicionarCliente)(StDbClintes **dbCliente, int *numClienes);
} Cliente = {
    (void (*)(StDbClintes **, int *)) adicionarCliente,
};

#endif // CLIENTE
