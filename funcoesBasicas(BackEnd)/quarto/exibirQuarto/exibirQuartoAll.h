#if !defined(EXIBIRQUARTOALL)
#define EXIBIRALLQUARTOALL

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./_exibir_StatusDoQuarto.h"
#include "./_exibir_IdDoQuarto.h"
#include "./_exibir_TipoDoQuarto.h"
#include "./_exibir_ValorDoQuarto.h"

void exibirQuartoAll(stDbQuarto *quarto, int numQuartos){
  
  Utils.SystemComand.clearTela();
  if(numQuartos == 0){
    printf("Nenhum quarto cadrastrado!\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  };

  for(int x = 0 ; x < numQuartos ; x++)
  {
    exibirIdDoQuarto(quarto, x);
    exibirStatusDoQuarto(quarto, x);
    exibirTipoDoQuarto(quarto, x);
    exibirValorDoQuarto(quarto, x);
  }
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
}

#endif // EXIBIRALLQUARTO
