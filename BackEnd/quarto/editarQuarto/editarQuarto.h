#ifndef EDITARQUARTO
#define EDITARQUARTO

#include "../../../utils/utilis.h"
#include "../util/getQuartoId.h"
#include "../AdicionarQuarto/inputsOnly/_adicionar_StatusQuarto.h"
#include "../AdicionarQuarto/inputsOnly/_adicionar_TipoDoQuarto.h"
#include "../AdicionarQuarto/inputsOnly/_adicionar_ValorQuarto.h"
#include "../exibirQuarto/exibirOnlyQuarto/exibirOnlyQuarto.h"

static void editarTipoQuarto(StDbQuartos *dbQuarto, int id);
static void editarValorQuarto(StDbQuartos *dbQuarto, int id);

void editarQuarto(StDbQuartos *dbQuarto, int numQuartos)
{
  Utils.SystemComand.clearTela();

  int opcao;
  printf("O que deseja editar?\n");  
  printf("1 - Tipo do quarto\n");
  printf("2 - Valor do quarto\n");
  printf("0 - Sair do modo edicao\n");

  Utils.InputsBasic.getNumeroInt(&opcao, "Selecione uma opcao: ");
  if (opcao == 0) return;

  exibirOnlyQuarto(dbQuarto, numQuartos);

  int id;
  getQuartoId(dbQuarto, numQuartos, &id);
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


static void editarTipoQuarto(StDbQuartos *dbQuarto, int id)
{
  adicionarTipoQuarto(dbQuarto, id);
}

static void editarValorQuarto(StDbQuartos *dbQuarto, int id)
{
  adicionarValorQuarto(dbQuarto, id);
}

#endif // EDITARQUARTO
