#if !defined(_EXIBIRVALORDOQUARTO)
#define _EXIBIRVALORDOQUARTO

#include "../../../../db/model.h"
void exibirValorDoQuarto(stDbQuarto *quartos, int id)
{
  printf("Valor do quarto: %.2f\n", quartos[id].valorDiaria);
}

#endif // _EXIBIRVALORDOQUARTO