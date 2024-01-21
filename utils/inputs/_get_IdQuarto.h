#if !defined(_USERQUARTOID)
#define _USERQUARTOID

#include <stdio.h>
#include "../../db/model.h"

#include "./_get_NumeroInt.h"
#include "../systemComand/_clear_buffer.h"
#include "./_get_Confirmacao.h"

void getQuartoId(stDbQuarto *dbQuarto, int numQuartos, int *idQuarto)
{
    if (numQuartos == 0)
    {
        printf("\nNao ha quartos cadastrados\n");
        return;
    }
    
    getNumeroInt(idQuarto, "Digite o id do quarto: ");
    (*idQuarto)--;

    if (*idQuarto > numQuartos - 1 || *idQuarto < 0)
    {
        printf("Item nao encontrado\n");
        getQuartoId(dbQuarto, numQuartos, idQuarto);
    }
}

#endif // _USERQUARTOID
