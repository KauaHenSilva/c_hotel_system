#ifndef EDITARQUARTO
#define EDITARQUARTO

#include "../../../utils/utilis.h"
#include "../AdicionarQuarto/_adicionar_StatusQuarto.h"
#include "../AdicionarQuarto/_adicionar_TipoDoQuarto.h"
#include "../AdicionarQuarto/_adicionar_ValorQuarto.h"

static void editarTipoQuarto(stDbQuarto *dbQuarto, int id);
static void editarValorQuarto(stDbQuarto *dbQuarto, int id);

void editarQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
  Utils.SystemComand.clearTela();

  int opcao;
  printf("O que deseja editar?\n");  
  printf("1 - Tipo do quarto\n");
  printf("2 - Valor do quarto\n");
  printf("0 - Sair do modo edicao\n");

  Utils.Inputs.getNumeroInt(&opcao, "Selecione uma opcao: ");
  if (opcao == 0) return;

  Utils.ExibirSystem.exibirQuartoIdSystem(dbQuarto, numQuartos);

  int id;
  Utils.Inputs.getQuartoId(dbQuarto, numQuartos, &id);
  if(id == -1) return;

  switch (opcao)
  {
    case 1:
      editarTipoQuarto(dbQuarto, id);
      editarValorQuarto(dbQuarto, id);
      editarQuarto(dbQuarto, numQuartos);
      break;
    case 2:
      editarValorQuarto(dbQuarto, id);
      editarQuarto(dbQuarto, numQuartos);
      break;
    default:
      printf("Opção inválida\n");
      editarQuarto(dbQuarto, numQuartos);
      break;
  }
}


static void editarTipoQuarto(stDbQuarto *dbQuarto, int id)
{
  adicionarTipoQuarto(dbQuarto, id);
}

static void editarValorQuarto(stDbQuarto *dbQuarto, int id)
{
  adicionarValorQuarto(dbQuarto, id);
}

#endif // EDITARQUARTO
