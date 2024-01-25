#if !defined(EXIBIRQUARTOALL)
#define EXIBIRALLQUARTOALL

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyQuarto/exibirOnlyQuarto.h"

void exibirQuartoAll(StDbQuartos *quarto, int numQuartos){

  Utils.SystemComand.clearTela();

  printf("Exibindo todos os quartos\n\n");

  if(numQuartos == 0){
    printf("Nenhum quarto cadrastrado!\n\n");
    return;
  };

  for(int x = 0 ; x < numQuartos ; x++)
  {
    exibirOnlyQuarto(quarto, x);
  }

  printf("Todos os quartos foram exibidos\n\n");


}

#endif // EXIBIRALLQUARTO
