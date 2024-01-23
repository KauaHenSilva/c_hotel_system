#if !defined(ADICIONARENDERECO)
#define ADICIONARENDERECO


#include "../../../db/model.h"
#include "../../../utils/utilis.h"

void adicionarEnderecoCliente(stDbCliente *dbCliente, int posicaoMemoria)
{
  Utils.InputsBasic.getString(dbCliente[posicaoMemoria].endereco, "Digite o endereco:");
} 


#endif // ADICIONARENDERECO