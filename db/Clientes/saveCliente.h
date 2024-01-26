#if !defined(SAVECLIENTE)
#define SAVECLIENTE


#include <stdio.h>

void saveCliente(StDbClientes *Cliente, int quantidadeClientes, int idCliente) {
    FILE *arquivo = fopen("C:/Meus-Estudos-Global/Desktop/C/C_Hotel_System/db/Clientes/dbClientes.bin", "wb");

    if (!arquivo) {
        printf("Arquivo Ausente!\n");
        return;
    }

    fwrite(&idCliente, sizeof(int), 1, arquivo);
    fwrite(&quantidadeClientes, sizeof(int), 1, arquivo);

    fwrite(Cliente, sizeof(StDbClientes), quantidadeClientes, arquivo);

    fclose(arquivo);
}

#endif // SAVECLIENTE

