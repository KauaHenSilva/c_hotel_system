#if !defined(ADICIONARCLIENTE)
#define ADICIONARCLIENTE

#include "./inputsOnly/_adicionar_CpfCliente.h"
#include "./inputsOnly/_adicionar_EmailCliente.h"
#include "./inputsOnly/_adicionar_enderecoCliente.h"
#include "./inputsOnly/_adicionar_EspacoCliente.h"
#include "./inputsOnly/_adicionar_IdQuartoCliente.h"
#include "./inputsOnly/_adicionar_NomeCliente.h"
#include "./inputsOnly/_adicionar_RgCliente.h"
#include "./inputsOnly/_adicionar_TelefoneCliente.h"

void adicionarCliente(StDbClientes **dbCliente, int *numClientes, int *idCliente)
{
  Utils.SystemComand.clearTela();

  adicionarEspacoCliente(dbCliente, numClientes);
  adicionarIdCliente(*dbCliente, *numClientes - 1, idCliente);
  adicionarNomeCliente(*dbCliente, *numClientes - 1);
  adicionarCpfCliente(*dbCliente, *numClientes - 1);
  adicionarRgCliente(*dbCliente, *numClientes - 1);
  adicionarTelefoneCliente(*dbCliente, *numClientes - 1);
  adicionarEmailCliente(*dbCliente, *numClientes - 1);
  adicionarEnderecoCliente(*dbCliente, *numClientes - 1);
  
  Utils.SystemComand.clearTela();

  printf("Cliente adicionado com sucesso!\n");
}



#endif // ADICIONARCLIENTE