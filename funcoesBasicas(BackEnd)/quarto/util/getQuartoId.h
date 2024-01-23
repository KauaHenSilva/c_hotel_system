#if !defined(_USERQUARTOID)
#define _USERQUARTOID

#include <stdio.h>
#include "../../../db/model.h"
#include "../../../utils/utilis.h"


void getQuartoId(stDbQuartos *dbQuarto, int numQuartos, int *idQuarto)
{
    if (numQuartos == 0)
    {
        (*idQuarto) = -1;
        return;
    }
    
    Utils.InputsBasic.getNumeroInt(idQuarto, "Digite o id do quarto: ");
    (*idQuarto)--;

    if (*idQuarto > numQuartos - 1 || *idQuarto < 0)
    {
        printf("Item nao encontrado\n");
        getQuartoId(dbQuarto, numQuartos, idQuarto);
    }
}

#endif // _USERQUARTOID