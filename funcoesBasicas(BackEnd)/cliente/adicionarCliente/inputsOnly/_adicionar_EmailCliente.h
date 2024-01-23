#if !defined(ADICONAREMAIL)
#define ADICONAREMAIL

#include "../../../db/model.h"
#include "../../../utils/utilis.h"

void adicionarEnderecoCliente(stDbCliente *dbCliente, int posicaoMemoria)
{
  Utils.InputsBasic.getString(dbCliente[posicaoMemoria].endereco, "Digite o email:");
} 


#endif // ADICONAREMAIL