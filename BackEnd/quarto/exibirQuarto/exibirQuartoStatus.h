
#if !defined(EXIBIRQUARTOSTATUS)
#define EXIBIRQUARTOSTATUS

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyQuarto/exibirOnlyQuarto.h"
#include <stdio.h>

static void exibirQuartoLivre(StDbQuartos *quarto, int id);
static void exibirQuartoOcupado(StDbQuartos *quarto, int id);
static void exibirQuartoResevado(StDbQuartos *quarto, int id);

void exibirQuartoStatus(StDbQuartos *quarto, int numQuartos)
{
  while (1)
  {

    Utils.SystemComand.clearTela();

    printf("Qual o status do quarto deseja Listar?\n");
    printf("1 - Livre\n");
    printf("2 - Resevado\n");
    printf("3 - Ocupado\n");
    printf("0 - Sair\n");

    int opc;
    Utils.InputsBasic.getNumeroInt(&opc, "Digite o numero correspodente: ");

    switch (opc)
    {
      case 0:
        return;
        break;
      case 1:
        exibirQuartoLivre(quarto, numQuartos);
        return;
        break;
      case 2:
        exibirQuartoResevado(quarto, numQuartos);
        return;
        break;
      case 3:
        exibirQuartoOcupado(quarto, numQuartos);
        return;
        break;
      default:
        printf("Alternativa invalida\n");
    }
  }
}
static void exibirQuartoLivre(StDbQuartos *quarto, int numQuartos)
{
  int existe = 0;
  printf("Exibindo todos os quarto que possui Status [Livre]...\n\n");

  for (int x = 0; x < numQuartos; x++)
  {
    if (quarto[x].statusQuarto == LIVRE)
    {
      existe = 1;
      exibirOnlyQuarto(quarto, x);
    }
  }

  if (!existe)
    printf("Nao existe quarto Livre\n");

  printf("Todos os quartos foram exibidos\n");

}

static void exibirQuartoOcupado(StDbQuartos *quarto, int numQuartos)
{
  int existe = 0;
  printf("Exibindo todos os quarto que possui Status [Ocupado]...\n\n");

  for (int x = 0; x < numQuartos; x++)
  {
    if (quarto[x].statusQuarto == OCUPADO)
    {
      existe = 1;
      exibirOnlyQuarto(quarto, x);
    }
  }
  if (!existe)
    printf("Nao existe quarto Ocupado\n");
  printf("Todos os quartos foram exibidos\n");

}

static void exibirQuartoResevado(StDbQuartos *quarto, int numQuartos)
{
  int existe = 0;

  printf("Exibindo todos os quarto que possui Status [Reservado]...\n\n");

  for (int x = 0; x < numQuartos; x++)
  {
    if (quarto[x].statusQuarto == RESERVADO)
    {
      existe = 1;
      exibirOnlyQuarto(quarto, x);
    }
  }
  if (!existe)
    printf("Nao existe quarto Resevado\n\n");
  printf("Todos os quartos foram exibidos\n\n");
}

#endif // EXIBIRQUARTOSTATUS
