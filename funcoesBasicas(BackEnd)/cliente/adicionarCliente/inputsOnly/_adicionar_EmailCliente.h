#if !defined(ADICONAREMAIL)
#define ADICONAREMAIL

#include "../../../../db/model.h"
#include "../../../../utils/utilis.h"

void adicionarEmailCliente(StDbClintes *dbCliente, int posicaoMemoria)
{
  Utils.InputsBasic.getString(dbCliente[posicaoMemoria].email, "Digite o email:");
} 


#endif // ADICONAREMAIL