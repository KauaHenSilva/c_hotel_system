#if !defined(EXIBIRONLYCLIENTE)
#define EXIBIRONLYCLIENTE

#include "../../../../db/model.h"

void exibirOnlyCliente(StDbClintes *cliente, int id)
{
    printf("Id do CLiente: %d\n", cliente[id].idCadrastro);
    printf("Nome do CLiente: %s\n", cliente[id].nome);
    printf("Cpf do CLiente: %s\n", cliente[id].cpf);
    printf("Rg do CLiente: %s\n", cliente[id].rg);
    printf("Telefone do CLiente: %s\n", cliente[id].telefone);
    printf("Endereco do CLiente: %s\n", cliente[id].endereco);
    printf("Email do CLiente: %s\n", cliente[id].email);
}
#endif // EXIBIRONLYCLIENTE

