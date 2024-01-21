#include "db/model.h"
#include "funcoesBasicas(BackEnd)/quarto/quarto.h"

#include "db/initDb.h" // Esse incluede é responsável por iniciar o banco de dados.

int main()
{

  Quarto.adicionarQuarto(&dbQuartos, &quantidadeDeQuarto);
  Quarto.adicionarQuarto(&dbQuartos, &quantidadeDeQuarto);
  Quarto.ExibirQuarto.exibirAllQuarto(dbQuartos, quantidadeDeQuarto);
  Quarto.editarQuarto(dbQuartos, quantidadeDeQuarto);
  Quarto.ExibirQuarto.exibirAllQuarto(dbQuartos, quantidadeDeQuarto);
  return 0;
}