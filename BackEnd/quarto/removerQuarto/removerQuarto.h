#if !defined(REMOVERQUARTO)
#define REMOVERQUARTO

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include <stdio.h>
#include "../util/getQuartoId.h"
#include "../exibirQuarto/exibirOnlyQuarto/exibirOnlyQuarto.h"

void removerQuarto(StDbQuartos **dbQuartos, int *numQuartos) {

  for(int x  = 0 ; x < *numQuartos ; x++)
    exibirOnlyQuarto(*dbQuartos, x);
  
  int id;
  getQuartoId(*dbQuartos, *numQuartos, &id);
  if(id == -1) return;

  if((*dbQuartos)[id].statusQuarto == 1){
    printf("Quarto ocupado, impossivel remover\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  }

  for (int i = id; i < *numQuartos - 1; i++) 
  {
    (*dbQuartos)[i] = (*dbQuartos)[i + 1];
  }

  *dbQuartos = realloc(*dbQuartos, (*numQuartos - 1) * sizeof(StDbQuartos));
  (*numQuartos)--;
}


#endif // REMOVERQUARTO


