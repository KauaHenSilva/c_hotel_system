#if !defined(_USERQUARTOID)
#define _USERQUARTOID

#include <stdio.h>
#include "../../../db/model.h"
#include "../../../utils/utilis.h"

void getQuartoId(stDbQuarto *dbQuarto, int numQuartos, int *idQuarto)
{
    printf("Digite o id do quarto: ");
    Utils.obterNumero(idQuarto);
    (*idQuarto)--;
    if(*idQuarto > numQuartos - 1 || *idQuarto < 0){
        printf("Item não encontrado\n");
        getQuartoId(dbQuarto, numQuartos, idQuarto);
    }
}

#endif // _USERQUARTOID
