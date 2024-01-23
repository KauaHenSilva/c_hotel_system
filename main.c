#include "db/model.h"
#include "funcoesBasicas(BackEnd)/quarto/quarto.h"
#include "funcoesBasicas(BackEnd)/cliente/cliente.h"

#include "db/initDb.h" // Esse incluede é responsável por iniciar o banco de dados.

int main()
{

  Cliente.adicionarCliente(&DbClintes, &quantidadeDeCLientes);
  Cliente.Exibir.exibirClienteAll(DbClintes, quantidadeDeCLientes);
  Cliente.removerCliente(&DbClintes, &quantidadeDeCLientes);

  return 0;
}