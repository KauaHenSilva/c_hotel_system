
#if !defined(EXIBIRQUARTOTIPO)
#define EXIBIRQUARTOTIPO

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyQuarto/exibirOnlyQuarto.h"
#include <stdio.h>


static void exibirQuartoSimples(StDbQuartos *quarto, int numQuartos);
static void exibirQuartoDuplo(StDbQuartos *quarto, int numQuartos);
static void exibirQuartoSuite(StDbQuartos *quarto, int numQuartos);

void exibirQuartoTipo(StDbQuartos *quarto, int numQuartos)
{
  Utils.SystemComand.clearTela();

  printf("Qual o tipo do quarto deseja Listar?\n");
  printf("1 - Simples\n"); 
  printf("2 - Duplo\n");
  printf("3 - Suite\n");
  printf("0 - Sair\n");

  int opc;
  Utils.InputsBasic.getNumeroInt(&opc, "Digite o numero correspodente: ");

  switch (opc)
  {
    case 0:
      return;
      break; 
    case 1:
      exibirQuartoSimples(quarto, numQuartos);
      return;
      break;
    case 2:
      exibirQuartoDuplo( quarto, numQuartos);
      return;
      break;
    case 3:
      exibirQuartoSuite( quarto, numQuartos);
      return;
      break;
    default:
      printf("Alternativa invalida\n");
  }
}
static void exibirQuartoSimples(StDbQuartos *quarto, int numQuartos)
{
  int existe = 0;

  printf("Exibindo todos os quarto que possui Tipo [Simples]...\n\n");

  for (int x = 0; x < numQuartos; x++)
  {
    if (quarto[x].tipoQuarto == SIMPLES)
    {
      existe = 1;
      exibirOnlyQuarto(quarto, x);
    }
  }
  if(!existe)
    printf("Nao existe quartos do tipo Simples\n\n");
  printf("Todos os quartos foram exibidos\n\n");

}

static void exibirQuartoDuplo(StDbQuartos *quarto, int numQuartos)
{
  int existe = 0;

  printf("Exibindo todos os quarto que possui Tipo [Duplo]...\n\n");

  for (int x = 0; x < numQuartos; x++)
  {
    existe = 1;
    if (quarto[x].tipoQuarto == DUPLO)
      exibirOnlyQuarto(quarto, x);
  }
  if(!existe)
    printf("Nao existe quartos do tipo Duplo\n");
  printf("Todos os quartos foram exibidos\n");

}

static void exibirQuartoSuite(StDbQuartos *quarto, int numQuartos)
{
  int existe = 0;

  printf("Exibindo todos os quarto que possui Tipo [Suite]...\n\n");

  for (int x = 0; x < numQuartos; x++)
  {
    if (quarto[x].tipoQuarto == SUITE)
    {
      existe = 1;
      exibirOnlyQuarto(quarto, x);
    }
  }
  if(!existe)
    printf("Nao existe quartos do tipo Suite\n");
  printf("Todos os quartos foram exibidos\n");

}



#endif // EXIBIRQUARTOTIPO
