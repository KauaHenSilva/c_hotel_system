#if !defined(_USERQUARTOID)
#define _USERQUARTOID

#include <stdio.h>
#include "../db/model.h"
#include "./_obterNumero.h"

void getQuartoId(stDbQuarto *dbQuarto, int numQuartos, int *idQuarto)
{
    printf("Digite o id do quarto: ");
    obterNumero(idQuarto);
    (*idQuarto)--;
    if(*idQuarto > numQuartos - 1 || *idQuarto < 0){
        printf("Item não encontrado\n");
        getQuartoId(dbQuarto, numQuartos, idQuarto);
    }
}

#endif // _USERQUARTOID
