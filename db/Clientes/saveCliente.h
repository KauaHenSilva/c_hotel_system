#include <stdio.h>

void saveCliente(StDbClientes *Cliente, int quantidadeClientes,int idCliente) {
    FILE *arquivo = fopen("C:/Meus-Estudos-Global/Desktop/C/C_Hotel_System/db/Clientes/dbClientes.bin", "wb");

    if (!arquivo) {
        return;
    }

    fwrite(&quantidadeClientes, sizeof(int), 1, arquivo);
    fwrite(&idCliente, sizeof(int), 1, arquivo);

    fwrite(Cliente, sizeof(StDbClientes), quantidadeClientes, arquivo);

    fclose(arquivo);
}
