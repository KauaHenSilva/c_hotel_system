#if !defined(_ADICIONARESPACOCLIENTE)
#define _ADICIONARESPACOCLIENTE

#include "../../../../db/model.h"
#include <stdio.h>
#include <stdlib.h>

static void errorAoAlocarMemoria();

void adicionarEspacoCliente(StDbClientes **dbCliente, int *numClientes)
{

  if (*dbCliente == NULL)
  {
    *dbCliente = (StDbClientes *)malloc(sizeof(StDbClientes));

    if(!dbCliente)
      errorAoAlocarMemoria();

    (*numClientes)++;
    return;
  }
  *dbCliente = (StDbClientes *)realloc(*dbCliente, (*numClientes + 1) * sizeof(StDbClientes));

    if(!dbCliente)
      errorAoAlocarMemoria();

  (*numClientes)++;
}

#endif // _ADICIONARESPACOCLIENTE