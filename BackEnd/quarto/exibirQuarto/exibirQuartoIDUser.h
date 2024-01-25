
#if !defined(EXIBIRQUARTOID)
#define EXIBIRQUARTOID

#include "../../../db/model.h"

#include "./../../../utils/utilis.h"
#include "./exibirOnlyQuarto/exibirOnlyQuarto.h"
#include "../util/getQuartoId.h"


void exibirQuartoId(StDbQuartos *quarto, int numQuartos){
  Utils.SystemComand.clearTela();


  printf("Exibindo todos os quarto que possui ID...\n\n");
  for(int x = 0 ; x < numQuartos ; x++)
  {
    exibirOnlyQuarto(quarto, x);
  }

  printf("Todos os quartos foram exibidos\n\n");

  int id;
  getQuartoId(quarto, numQuartos, &id);

  if(id == -1){
    printf("Nenhum quarto cadrastrado!\n\n");
    return;
  };

  printf("O quarto selecionado foi:\n");
  exibirOnlyQuarto(quarto, id);
  
}



#endif // EXIBIRQUARTO
