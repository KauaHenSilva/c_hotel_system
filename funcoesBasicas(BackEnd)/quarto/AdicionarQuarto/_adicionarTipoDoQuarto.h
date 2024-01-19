#if !defined(_ADICIONARTIPODOQUARTO)
#define _ADICIONARTIPODOQUARTO

#include "../../../db/model.h"
#include "../../utils/utils.h"
void adicionarTipoQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
  numQuartos -= 1;
  int tipo;

  printf("Digite o tipo do quarto: \n");
  printf("1 - Simples\n");
  printf("2 - Duplo\n");
  printf("3 - Suite\n");
  
  Utils.obterNumero(&tipo);

  switch (tipo)
  {
    case 1:
      dbQuarto[numQuartos].tipoQuarto = SIMPLES;
      break;
    case 2:
      dbQuarto[numQuartos].tipoQuarto = DUPLO;
      break;
    case 3:
      dbQuarto[numQuartos].tipoQuarto = SUITE;
      break;
    default:
      printf("Tipo de quarto invalido\n");
      adicionarTipoQuarto(dbQuarto, numQuartos);
  }
}

#endif // PEGARTIPODOQUARTO
