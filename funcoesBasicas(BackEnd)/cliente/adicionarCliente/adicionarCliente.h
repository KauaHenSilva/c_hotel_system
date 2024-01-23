
#include "_adicionar_EspacoCliente.h"
#include "_adicionar_IdQuartoCliente.h"
#include "_adicionar_NomeCliente.h"
#include "_adicionar_CpfCliente.h"
#include "_adicionar_RgCliente.h"
#include "_adicionar_TelefoneCliente.h"

void adicionarCliente(StDbClintes **dbCliente, int *numClientes)
{
  adicionarEspacoCliente(dbCliente, numClientes);
  adicionarIdCliente(*dbCliente, *numClientes, *numClientes - 1);
  adiconarNomeCliente(*dbCliente, *numClientes - 1);
  adiconarCpfCliente(*dbCliente, *numClientes - 1);
  adiconarRgCliente(*dbCliente, *numClientes - 1);
  adiconarTelefoneCliente(*dbCliente, *numClientes - 1);
}