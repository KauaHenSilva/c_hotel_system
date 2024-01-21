
#if !defined(EXIBIRQUARTOID)
#define EXIBIRQUARTOID

#include "../../../db/model.h"

#include "./../../../utils/utilis.h"


void exibirQuartoId(stDbQuarto *quarto, int numQuartos){
  clearTela();

  for(int x = 0 ; x < numQuartos ; x++)
    Utils.ExibirSystem.exibirQuartoIdSystem(quarto, x);

  int id;
  Utils.Inputs.getQuartoId(quarto, numQuartos, &id);

  if(id == -1){
    printf("Nenhum quarto cadrastrado!\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  };

  Utils.ExibirSystem.exibirQuartoIdSystem(quarto, id);
  
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
}



#endif // EXIBIRQUARTO
