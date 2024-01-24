#include <stdio.h>

void saveCliente(StDbClientes *Cliente, int quantidadeClientes,int idCliente) {
    FILE *flIdClientes = fopen("idClientes.bin", "wb");
    FILE *flQuantidadeDeClintes = fopen("qtClientes.bin", "wb");
    FILE *flDbClientes = fopen("dbClientes.bin", "wb");

    if (!flIdClientes || !flQuantidadeDeClintes || !flDbClientes) {
        return;
    }

    fwrite(&idCliente, sizeof(int), 1, flIdClientes);
    fwrite(&quantidadeClientes, sizeof(int), 1, flQuantidadeDeClintes);
    fwrite(Cliente, sizeof(StDbClientes), quantidadeClientes, flDbClientes);

    fclose(flIdClientes);
    fclose(flQuantidadeDeClintes);
    fclose(flDbClientes);
}
