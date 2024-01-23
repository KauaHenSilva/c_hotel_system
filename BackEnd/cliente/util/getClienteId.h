#if !defined(_USERGETCLIENTETOID)
#define _USERGETCLIENTETOID

#include <stdio.h>
#include "../../../db/model.h"
#include "../../../utils/utilis.h"


void getClienteId(StDbClientes *dbCliente, int numClientes, int *idCliente)
{
    if (numClientes == 0)
    {
        (*idCliente) = -1;
        return;
    }
    
    Utils.InputsBasic.getNumeroInt(idCliente, "Digite o id do quarto: ");
    (*idCliente)--;

    if (*idCliente > numClientes - 1 || *idCliente < 0)
    {
        printf("Item nao encontrado\n");
        getClienteId(dbCliente, numClientes, idCliente);
    }
}

#endif // _USERGETCLIENTETOID