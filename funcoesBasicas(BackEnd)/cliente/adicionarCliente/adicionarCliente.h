
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
  adiconarNomeCliente(*dbCliente, *numClientes - 1);
  adiconarCpfCliente(*dbCliente, *numClientes - 1);
  adiconarRgCliente(*dbCliente, *numClientes - 1);
  adiconarTelefoneCliente(*dbCliente, *numClientes - 1);
  adicionarEmailCliente(*dbCliente, *numClientes - 1);
  adicionarEnderecoCliente(*dbCliente, *numClientes - 1);
}