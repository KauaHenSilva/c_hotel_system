
#if !defined(EXIBIRQUARTOID)
#define EXIBIRQUARTOID

#include "../../../db/model.h"

#include "./../../../utils/utilis.h"
#include "./exibirOnlyQuarto/exibirOnlyQuarto.h"
#include "../util/getQuartoId.h"


void exibirQuartoId(StDbQuartos *quarto, int numQuartos){
  clearTela();

  for(int x = 0 ; x < numQuartos ; x++)
    exibirOnlyCliente(quarto, x);

  int id;
  getQuartoId(quarto, numQuartos, &id);

  if(id == -1){
    printf("Nenhum quarto cadrastrado!\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  };

  exibirOnlyCliente(quarto, id);
  
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
}



#endif // EXIBIRQUARTO
