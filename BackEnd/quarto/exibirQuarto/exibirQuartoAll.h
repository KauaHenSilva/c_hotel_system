#if !defined(EXIBIRQUARTOALL)
#define EXIBIRALLQUARTOALL

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyQuarto/exibirOnlyQuarto.h"

void exibirQuartoAll(StDbQuartos *quarto, int numQuartos){

  Utils.SystemComand.clearTela();

  printf("Exibindo todos os quartos\n\n");

  if(numQuartos == 0){
    printf("Nenhum quarto cadrastrado!\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  };

  for(int x = 0 ; x < numQuartos ; x++)
  {
    printf("Quarto numero [%d]\n", x + 1);
    exibirOnlyQuarto(quarto, x);
  }

  printf("Todos os quartos foram exibidos\n");


}

#endif // EXIBIRALLQUARTO
