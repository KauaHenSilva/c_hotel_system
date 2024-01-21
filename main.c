#include "db/model.h"
#include "funcoesBasicas(BackEnd)/quarto/quarto.h"

#include "db/initDb.h" // Esse incluede é responsável por iniciar o banco de dados.

int main()
{


  Quarto.adicionarQuarto(&dbQuartos, &quantidadeDeQuarto);
  Quarto.adicionarQuarto(&dbQuartos, &quantidadeDeQuarto);
  Quarto.adicionarQuarto(&dbQuartos, &quantidadeDeQuarto);

  Quarto.removerQuarto(&dbQuartos, &quantidadeDeQuarto);

  Quarto.ExibirQuarto.exibirQuartoAll(dbQuartos, quantidadeDeQuarto);

  // Quarto.adicionarQuarto(&dbQuartos, &quantidadeDeQuarto);
  // Quarto.adicionarQuarto(&dbQuartos, &quantidadeDeQuarto);
  // Quarto.adicionarQuarto(&dbQuartos, &quantidadeDeQuarto);
  // Quarto.ExibirQuarto.exibirQuartoId(dbQuartos, quantidadeDeQuarto);
  // Quarto.ExibirQuarto.exibirQuartoId(dbQuartos, quantidadeDeQuarto);
  // Quarto.ExibirQuarto.exibirQuartoId(dbQuartos, quantidadeDeQuarto);
  // Quarto.ExibirQuarto.exibirQuartoStatus(dbQuartos, quantidadeDeQuarto);
  // Quarto.ExibirQuarto.exibirQuartoStatus(dbQuartos, quantidadeDeQuarto);
  // Quarto.ExibirQuarto.exibirQuartoStatus(dbQuartos, quantidadeDeQuarto);
  // Quarto.ExibirQuarto.exibirQuartoTipo(dbQuartos, quantidadeDeQuarto);
  // Quarto.ExibirQuarto.exibirQuartoTipo(dbQuartos, quantidadeDeQuarto);
  // Quarto.ExibirQuarto.exibirQuartoTipo(dbQuartos, quantidadeDeQuarto);
  return 0;
}