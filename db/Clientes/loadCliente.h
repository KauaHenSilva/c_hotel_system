#include <stdio.h>

#include "../../db/model.h"

void loadCliente(StDbClientes **Clientes, int *quantidadeDeClientes) {
    FILE *arquivo = fopen("C:/Meus-Estudos-Global/Desktop/C/C_Hotel_System/db/Clientes/dbClientes.bin", "rb");

    if (!arquivo) {
        printf("Erro ao abrir o arquivo\n");
        return;
    }

    fread(quantidadeDeClientes, sizeof(int), 1, arquivo);

    *Clientes = malloc(sizeof(StDbClientes) * (*quantidadeDeClientes));

    fread(*Clientes, sizeof(StDbClientes), *quantidadeDeClientes, arquivo);

    fclose(arquivo);
}
