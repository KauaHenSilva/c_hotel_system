#if !defined(REMOVERQUARTO)
#define REMOVERQUARTO

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include <stdio.h>
#include "../util/getQuartoId.h"
#include "../exibirQuarto/exibirOnlyQuarto/exibirOnlyQuarto.h"

void removerQuarto(StDbQuartos **dbQuartos, int *numQuartos) {

  Utils.SystemComand.clearTela();
  printf("Removendo quarto...\n\n");

  printf("Todos os Quartos:\n\n");
  for(int x  = 0 ; x < *numQuartos ; x++)
    exibirOnlyQuarto(*dbQuartos, x);
  
  int id;
  getQuartoId(*dbQuartos, *numQuartos, &id);
  if(id == -1) return;

  if((*dbQuartos)[id].statusQuarto == OCUPADO ){
    printf("Quarto ocupado, impossivel remover\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  }

    if((*dbQuartos)[id].statusQuarto == RESERVADO ){
    printf("Quarto reservado, impossivel remover\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  }

  printf("O quarto selecionado foi:\n");
  exibirOnlyQuarto(*dbQuartos, id);
  printf("O Quarto Foi removido!\n");

  for (int i = id; i < *numQuartos - 1; i++) 
  {
    (*dbQuartos)[i] = (*dbQuartos)[i + 1];
  }

  *dbQuartos = realloc(*dbQuartos, (*numQuartos - 1) * sizeof(StDbQuartos));
  (*numQuartos)--;

  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");

}


#endif // REMOVERQUARTO


