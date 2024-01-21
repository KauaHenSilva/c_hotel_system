#ifndef EDITARQUARTO
#define EDITARQUARTO

#include "../../../utils/utilis.h"
#include "../AdicionarQuarto/_adicionar_StatusQuarto.h"
#include "../AdicionarQuarto/_adicionar_TipoDoQuarto.h"
#include "../AdicionarQuarto/_adicionar_ValorQuarto.h"

static void editarStatusQuarto(stDbQuarto *dbQuarto, int id);
static void editarTipoQuarto(stDbQuarto *dbQuarto, int id);
static void editarValorQuarto(stDbQuarto *dbQuarto, int id);

void editarQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
  Utils.SystemComand.clearTela();

  int opcao;
  printf("O que deseja editar?\n");  
  printf("1 - Status do quarto\n");
  printf("2 - Tipo do quarto\n");
  printf("3 - Valor do quarto\n");
  printf("0 - Sair do modo edicao\n");

  Utils.Inputs.getNumeroInt(&opcao, "Selecione uma opcao: ");
  if (opcao == 0) return;

  Utils.ExibirOnly.exibirOnlyIdQuarto(dbQuarto, numQuartos);
  int id;
  Utils.Inputs.getQuartoId(dbQuarto, numQuartos, &id);

  switch (opcao)
  {
    case 1:
      editarStatusQuarto(dbQuarto, id);
      editarQuarto(dbQuarto, numQuartos);
      break;
    case 2:
      editarTipoQuarto(dbQuarto, id);
      editarValorQuarto(dbQuarto, id);
      editarQuarto(dbQuarto, numQuartos);
      break;
    case 3:
      editarValorQuarto(dbQuarto, id);
      editarQuarto(dbQuarto, numQuartos);
      break;
    default:
      printf("Opção inválida\n");
      editarQuarto(dbQuarto, numQuartos);
      break;
  }
}

static void editarStatusQuarto(stDbQuarto *dbQuarto, int id)
{
  adicionarStatusQuarto(dbQuarto, id);
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
