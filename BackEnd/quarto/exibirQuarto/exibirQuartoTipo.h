
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

  printf("Exibindo todos os quarto que possui Tipo...\n\n");

  printf("Qual o tipo do quarto deseja Listar?\n");
  printf("1 - Simples\n"); 
  printf("2 - Duplo\n");
  printf("3 - Suite\n");

  int opc;
  Utils.InputsBasic.getNumeroInt(&opc, "Digite o numero correspodente: ");

  switch (opc)
  {
  case 1:
    exibirQuartoSimples(quarto, numQuartos);
    break;
  case 2:
    exibirQuartoDuplo( quarto, numQuartos);
    break;
  case 3:
    exibirQuartoSuite( quarto, numQuartos);
    break;
  default:
    printf("Alternativa invalida\n");
    exibirQuartoTipo(quarto, numQuartos);
  }
}
static void exibirQuartoSimples(StDbQuartos *quarto, int numQuartos)
{
  int existe = 0;
  for (int x = 0; x < numQuartos; x++)
  {
    if (quarto[x].tipoQuarto == SIMPLES)
    {
      existe = 1;
      exibirOnlyQuarto(quarto, x);
    }
  }
  if(!existe)
    printf("Nao existe quartos do tipo Simples\n");
}

static void exibirQuartoDuplo(StDbQuartos *quarto, int numQuartos)
{
  int existe = 0;
  for (int x = 0; x < numQuartos; x++)
  {
    existe = 1;
    if (quarto[x].tipoQuarto == DUPLO)
      exibirOnlyQuarto(quarto, x);
  }
  if(!existe)
    printf("Nao existe quartos do tipo Duplo\n");
}

static void exibirQuartoSuite(StDbQuartos *quarto, int numQuartos)
{
  int existe = 0;
  for (int x = 0; x < numQuartos; x++)
  {
    if (quarto[x].tipoQuarto == SUITE)
    exibirOnlyQuarto(quarto, x);
  }
  if(!existe)
    printf("Nao existe quartos do tipo Suite\n");
}



#endif // EXIBIRQUARTOTIPO
