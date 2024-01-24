#include <stdio.h>

#include "../../db/model.h"

void loadCliente(StDbClientes **Clientes, int *quantidadeDeClientes, int *idCliente) {
    FILE *flIdClientes = fopen("idClientes.bin", "rb");
    FILE *flQuantidadeDeClintes = fopen("qtClientes.bin", "rb");
    FILE *flDbClientes = fopen("dbClientes.bin", "rb");

    if (!flIdClientes || !flQuantidadeDeClintes || !flDbClientes) {
        return;
    }

    fread(quantidadeDeClientes, sizeof(int), 1, flQuantidadeDeClintes);
    *Clientes = malloc(sizeof(StDbClientes) * (*quantidadeDeClientes));

    fread(*Clientes, sizeof(StDbClientes), *quantidadeDeClientes, flDbClientes);

    fread(idCliente, sizeof(int), 1, flIdClientes);

    fclose(flIdClientes);
    fclose(flQuantidadeDeClintes);
    fclose(flDbClientes);
}
