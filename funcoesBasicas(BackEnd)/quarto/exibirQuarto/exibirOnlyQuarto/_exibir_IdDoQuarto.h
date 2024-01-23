#if !defined(_EXIBIRIDDOQUARTO)
#define _EXIBIRIDDOQUARTO

#include "../../../../db/model.h"

void exibirIdDoQuarto(stDbQuartos *quartos, int id)
{
    printf("Id do quarto: %d\n", quartos[id].numero);
}

#endif // _EXIBIRIDDOQUARTO

