#if !defined(_EXIBIRTIPODOQUARTO)
#define _EXIBIRTIPODOQUARTO

#include "../../../db/model.h"

void exibirTipoDoQuarto(stDbQuarto *quartos, int id)
{
    printf("Tipo do quarto: ");
    switch (quartos[id].tipoQuarto)
    {
        case SIMPLES:
            printf("Simples\n");
            break;
        case DUPLO:
            printf("Duplo\n");
            break;
        case SUITE:
            printf("Suite\n");
            break;
    }
}

#endif // _EXIBIRTIPODOQUARTO
