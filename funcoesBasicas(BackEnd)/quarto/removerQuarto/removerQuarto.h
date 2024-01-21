#if !defined(REMOVERQUARTO)
#define REMOVERQUARTO

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include <stdio.h>

void removerQuarto(stDbQuarto **dbQuartos, int *numQuartos) {

  for(int x  = 0 ; x < *numQuartos ; x++)
    Utils.ExibirSystem.exibirQuartoIdSystem(*dbQuartos, x);
  
  int id;
  Utils.Inputs.getQuartoId(*dbQuartos, *numQuartos, &id);
  if(id == -1) return;

  for (int i = id; i < *numQuartos - 1; i++) 
  {
    (*dbQuartos)[i] = (*dbQuartos)[i + 1];
  }

  *dbQuartos = realloc(*dbQuartos, (*numQuartos - 1) * sizeof(stDbQuarto));
  (*numQuartos)--;
}


#endif // REMOVERQUARTO


