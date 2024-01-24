#if !defined(_USERQUARTOID)
#define _USERQUARTOID

#include <stdio.h>
#include "../../../db/model.h"
#include "../../../utils/utilis.h"


void getQuartoId(StDbQuartos *dbQuarto, int numQuartos, int *idQuarto)
{
    while (1)
    {
        if (numQuartos == 0)
        {
            (*idQuarto) = -1;
            return;
        }
        
        Utils.InputsBasic.getNumeroInt(idQuarto, "Digite o id do quarto: ");

        for(int x = 0 ; x < numQuartos ; x++)
        {
            if(dbQuarto[x].numero == (*idQuarto))
            {
                (*idQuarto) = x;
                return;
            }
        }

        printf("Quarto nao encontrado\n");

        continue;
    }
    
}

#endif // _USERQUARTOID