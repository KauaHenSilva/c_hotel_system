#include <stdio.h>

#include "../../db/model.h"

void loadCliente(StDbClientes **Clientes, int *quantidadeDeClientes, int *idCliente) {
    FILE *arquivo = fopen("C:/Meus-Estudos-Global/Desktop/C/C_Hotel_System/db/Clientes/dbClientes.bin", "rb");

    if (!arquivo) {
        return;
    }

    fread(quantidadeDeClientes, sizeof(int), 1, arquivo);
    fread(idCliente, sizeof(int), 1, arquivo);

    *Clientes = malloc(sizeof(StDbClientes) * (*quantidadeDeClientes));

    fread(*Clientes, sizeof(StDbClientes), *quantidadeDeClientes, arquivo);

    fclose(arquivo);
}
