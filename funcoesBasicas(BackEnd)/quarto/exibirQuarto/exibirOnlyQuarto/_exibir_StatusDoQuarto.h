#if !defined(_EXIBIRSTATUSDOQUARTO)
#define _EXIBIRSTATUSDOQUARTO

#include <stdio.h>
#include "../../../../db/model.h"

void exibirStatusDoQuarto(stDbQuartos *quartos, int id)
{
    printf("Status do quarto: ");
    switch (quartos[id].statusQuarto)
    {
        case LIVRE:
            printf("Livre\n");
            break;
        case OCUPADO:
            printf("Ocupado\n");
            break;
        case RESERVADO:
            printf("Reservado\n");
            break;
    }
}

#endif // _PEGARSTATUSDOQUAR
