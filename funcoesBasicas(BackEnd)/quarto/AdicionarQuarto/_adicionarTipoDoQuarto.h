#if !defined(_ADICIONARTIPODOQUARTO)
#define _ADICIONARTIPODOQUARTO

#include "../../../db/model.h"
void adicionarTipoQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
  numQuartos -= 1;
  int tipo;
  while (1)
  {
    printf("Digite o tipo do quarto: \n");
    printf("1 - Simples\n");
    printf("2 - Duplo\n");
    printf("3 - Suite\n");
    scanf("%d", &tipo);

    switch (tipo)
    {
      case 1:
        dbQuarto[numQuartos].tipoQuarto = SIMPLES;
        return;
        break;
      case 2:
        dbQuarto[numQuartos].tipoQuarto = DUPLO;
        return;
        break;
      case 3:
        dbQuarto[numQuartos].tipoQuarto = SUITE;
        return;
        break;
      default:
        printf("Tipo de quarto invalido\n");
        break;
    }
  }
}

#endif // PEGARTIPODOQUARTO
