#if !defined(_USERGETFLUXOTOID)
#define _USERGETFLUXOTOID

#include <stdio.h>
#include "../../../db/model.h"
#include "../../../utils/utilis.h"

void getReservaId(StDbFluxoFinanceiro *dbFluxoFinanceiro, int numFluxos, int *idFluxo)
{
    while (1)
    {
        if (numFluxos == 0)
        {
            (*idFluxo) = -1;
            return;
        }

        Utils.InputsBasic.getNumeroInt(idFluxo, "Digite o id do Fluxo Financeiro Desejado: ");

        for (int x = 0; x < numFluxos; x++)
        {
            if (dbFluxoFinanceiro[x].idReserva == (*idFluxo))
            {
                (*idFluxo) = x;
                return;
            }
        }

        printf("Fluxo Financeiro nao encontrado\n");
    }
}

#endif // _USERGETCLIENTETOID