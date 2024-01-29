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

  if((*dbCliente)[id].statusCliente == RESERVADO) {
    printf("O cliente nao pode ser removido pois ele possui um quarto reservado!\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  }

  if((*dbCliente)[id].statusCliente == OCUPADO) {
    printf("O cliente nao pode ser removido pois ele possui um quarto ocupado!\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  }

  for (int i = id; i < *numCliente - 1; i++) 
  {
    (*dbCliente)[i] = (*dbCliente)[i + 1];
  }

  *dbCliente = realloc(*dbCliente, (*numCliente - 1) * sizeof(StDbClientes));
  (*numCliente)--;
}


#endif // REMOVERQUARTO


