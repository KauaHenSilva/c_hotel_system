#if !defined(EXIBIRONLYCLIENTE)
#define EXIBIRONLYCLIENTE

#include "../../../../db/model.h"

void exibirOnlyCliente(StDbClientes *cliente, int id)
{
    printf("Dados do CLiente [%d]:\n", id);
    printf(" - Id do CLiente: %d\n", cliente[id].idCadrastro);
    printf(" - Nome do CLiente: %s\n", cliente[id].nome);
    printf(" - Cpf do CLiente: %s\n", cliente[id].cpf);
    printf(" - Rg do CLiente: %s\n", cliente[id].rg);
    printf(" - Telefone do CLiente: %s\n", cliente[id].telefone);
    printf(" - Endereco do CLiente: %s\n", cliente[id].endereco);
    printf(" - Email do CLiente: %s\n", cliente[id].email);
    switch (cliente[id].statusCliente)
    {
    case LIVRE:
        printf(" - O cliente nao possui quarto reservado!\n\n");
        break;
    case RESERVADO:
        printf(" - O cliente tem um ou mais quarto reservado!\n\n");
        break;	
    case OCUPADO:
        printf(" - O cliente possui um quarto ocupado!\n\n");
        break;
    }
    printf("\n");

}
#endif // EXIBIRONLYCLIENTE

