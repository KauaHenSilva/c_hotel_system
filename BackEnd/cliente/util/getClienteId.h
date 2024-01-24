#if !defined(_USERGETCLIENTETOID)
#define _USERGETCLIENTETOID

#include <stdio.h>
#include "../../../db/model.h"
#include "../../../utils/utilis.h"

void getClienteId(StDbClientes *dbCliente, int numClientes, int *idCliente)
{
    while (1)
    {
        if (numClientes == 0)
        {
            (*idCliente) = -1;
            return;
        }

        Utils.InputsBasic.getNumeroInt(idCliente, "Digite o id do cliente: ");

        for (int x = 0; x < numClientes; x++)
        {
            if (dbCliente[x].idCadrastro == (*idCliente))
            {
                (*idCliente) = x;
                return;
            }
        }

        printf("Cliente nao encontrado\n");
    }
}

#endif // _USERGETCLIENTETOID