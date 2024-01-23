#if !defined(ADICONAREMAIL)
#define ADICONAREMAIL

#include "../../../../db/model.h"
#include "../../../../utils/utilis.h"

void adicionarEmailCliente(StDbClientes *dbCliente, int posicaoMemoria)
{
  Utils.SystemComand.clearTela();
  printf("Adicionando Clinte [Email]... \n");
  Utils.InputsBasic.getString(dbCliente[posicaoMemoria].email, "Digite o email:");
  printf("Clinte [Email] Adicionado... \n");
} 


#endif // ADICONAREMAIL