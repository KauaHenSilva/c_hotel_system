#if !defined(EDITARQUARTO)
#define EDITARQUARTO

#include "../../../utils/utilis.h"

#include "../AdicionarQuarto/_adicionar_StatusQuarto.h"
#include "../AdicionarQuarto/_adicionar_TipoDoQuarto.h"
#include "../AdicionarQuarto/_adicionar_ValorQuarto.h"

static void _editarStatusQuarto(stDbQuarto *dbQuarto, int numQuartos, int id);
static void _editarTipoQuarto(stDbQuarto *dbQuarto, int numQuartos, int id);
static void _editarValorQuarto(stDbQuarto *dbQuarto, int numQuartos, int id);

void editarQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
  int opcao;
  printf("O que deseja editar?\n");  
  printf("1 - Status do quarto\n");
  printf("2 - Tipo do quarto\n");
  printf("3 - Valor do quarto\n");
  printf("0 - Sair do modo edicao\n");

  Utils.Inputs.getNumeroInt(&opcao, "Digite uma opcao valida: ");

  int id;
  Utils.ExibirOnly.exibirOnlyIdQuarto(dbQuarto, numQuartos);
  Utils.Inputs.getQuartoId(dbQuarto, numQuartos, &id);

  switch (opcao)
  {
    case 0:
      return;
    case 1:
      _editarStatusQuarto(dbQuarto, numQuartos, id);
      break;
    case 2:
      _editarTipoQuarto(dbQuarto, numQuartos, id);
      break;
    case 3:
      _editarValorQuarto(dbQuarto, numQuartos, id);
      break;
    default:
      printf("Opcao invalida\n");
      break;
  }
}

static void _editarStatusQuarto(stDbQuarto *dbQuarto, int numQuartos, int id)
{
  adicionarStatusQuarto(dbQuarto, id);
  editarQuarto(dbQuarto, numQuartos);
}
static void _editarTipoQuarto(stDbQuarto *dbQuarto, int numQuartos, int id)
{
  adicionarTipoQuarto(dbQuarto, id);
  editarQuarto(dbQuarto, numQuartos);
}
static void _editarValorQuarto(stDbQuarto *dbQuarto, int numQuartos, int id)
{
  adicionarValorQuarto(dbQuarto, id);
  editarQuarto(dbQuarto, numQuartos);
}

#endif // EDITARQUARTO

