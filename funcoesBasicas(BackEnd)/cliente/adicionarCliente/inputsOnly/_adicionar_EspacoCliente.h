#if !defined(_ADICIONARESPACOCLIENTE)
#define _ADICIONARESPACOCLIENTE

#include "../../../../db/model.h"
#include <stdio.h>
#include <stdlib.h>

static void errorAoAlocarMemoria();

void adicionarEspacoCliente(StDbClintes **dbCliente, int *numClientes)
{

  if (*dbCliente == NULL)
  {
    *dbCliente = (StDbClintes *)malloc(sizeof(StDbClintes));

    if(!dbCliente)
      errorAoAlocarMemoria();

    (*numClientes)++;
    return;
  }
  *dbCliente = (StDbClintes *)realloc(*dbCliente, (*numClientes + 1) * sizeof(StDbClintes));

    if(!dbCliente)
      errorAoAlocarMemoria();

  (*numClientes)++;
}

#endif // _ADICIONARESPACOCLIENTE