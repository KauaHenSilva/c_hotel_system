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

void adicionarCliente(StDbClintes **dbCliente, int *numClientes)
{
  adicionarEspacoCliente(dbCliente, numClientes);
  adicionarIdCliente(*dbCliente, *numClientes, *numClientes - 1);
  adicionarNomeCliente(*dbCliente, *numClientes - 1);
  adicionarCpfCliente(*dbCliente, *numClientes - 1);
  adicionarRgCliente(*dbCliente, *numClientes - 1);
  adicionarTelefoneCliente(*dbCliente, *numClientes - 1);
  adicionarEmailCliente(*dbCliente, *numClientes - 1);
  adicionarEnderecoCliente(*dbCliente, *numClientes - 1);
}



#endif // ADICIONARCLIENTE