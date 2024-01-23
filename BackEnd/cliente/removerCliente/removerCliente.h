#if !defined(REMOVERCLINTE)
#define REMOVERCLINTE

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "../util/getCLienteId.h"
#include "../exibirCliente/exibirOnlyCliente/exibirOnlyCliente.h"
#include <stdio.h>

void removerCliente(StDbClientes **dbCliente, int *numCliente) {

  for(int x  = 0 ; x < *numCliente ; x++)
    exibirOnlyCliente(*dbCliente, x);
  
  int id;
  getClienteId(*dbCliente, *numCliente, &id);
  if(id == -1) return;

  for (int i = id; i < *numCliente - 1; i++) 
  {
    (*dbCliente)[i] = (*dbCliente)[i + 1];
  }

  *dbCliente = realloc(*dbCliente, (*numCliente - 1) * sizeof(StDbClientes));
  (*numCliente)--;
}


#endif // REMOVERQUARTO


