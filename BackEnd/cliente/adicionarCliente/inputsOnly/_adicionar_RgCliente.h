#if !defined(ADICIONARRGCLIENTE)
#define ADICIONARRGCLIENTE

#include "../../../../db/model.h"
#include "../../../../utils/utilis.h"

void adicionarRgCliente(StDbClientes *dbCliente, int posicaoMemoria)
{
  Utils.SystemComand.clearTela();
  printf("Adicionando Clinte [Rg]... \n\n");
  Utils.InputsSavin.getRg(dbCliente[posicaoMemoria].rg, "Digite o rg Ex.[123456789]:");
  printf("Clinte [Rg] Adicionado... \n");
}

#endif // ADICIONARRGCLIENTE
