#if !defined(_ADICIONARESPACOCLIENTE)
#define _ADICIONARESPACOCLIENTE

#include "../../../../db/model.h"
#include <stdio.h>
#include <stdlib.h>

void adicionarEspacoCliente(StDbClientes **dbCliente, int *numClientes)
{

  if (*dbCliente == NULL)
  {
    *dbCliente = (StDbClientes *)malloc(sizeof(StDbClientes));

    if(!dbCliente)
    {
        printf("Erro ao alocar memoria");
        exit(1);
    }

    (*numClientes)++;
    return;
  }
  *dbCliente = (StDbClientes *)realloc(*dbCliente, (*numClientes + 1) * sizeof(StDbClientes));

    if(!dbCliente)
    {
        printf("Erro ao alocar memoria");
        exit(1);
    }

  (*numClientes)++;
}

#endif // _ADICIONARESPACOCLIENTE