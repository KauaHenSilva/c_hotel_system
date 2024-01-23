#include <stdio.h>

void saveCliente(StDbClientes *Cliente, int quantidadeClientes) {
    FILE *arquivo = fopen("C:/Meus-Estudos-Global/Desktop/C/C_Hotel_System/db/Clientes/dbClientes.bin", "wb");

    if (!arquivo) {
        printf("Erro ao abrir o arquivo\n");
        return;
    }

    fwrite(&quantidadeClientes, sizeof(int), 1, arquivo);

    fwrite(Cliente, sizeof(StDbClientes), quantidadeClientes, arquivo);

    fclose(arquivo);
}
