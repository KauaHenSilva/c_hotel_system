
#if !defined(EXIBIRQUARTOSTATUS)
#define EXIBIRQUARTOSTATUS

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyQuarto/exibirOnlyQuarto.h"
#include <stdio.h>


static void exibirQuartoLivre(stDbQuarto *quarto, int id);
static void exibirQuartoOcupado(stDbQuarto *quarto, int id);
static void exibirQuartoResevado(stDbQuarto *quarto, int id);

void exibirQuartoStatus(stDbQuarto *quarto, int numQuartos)
{
  Utils.SystemComand.clearTela();

  printf("Qual o status do quarto deseja Listar?\n");
  printf("1 - Livre\n");
  printf("3 - Resevado\n");
  printf("2 - Ocupado\n");

  int opc;
  Utils.InputsBasic.getNumeroInt(&opc, "Digite o numero correspodente: ");

  switch (opc)
  {
  case 1:
    exibirQuartoLivre( quarto,  numQuartos);
    break;
  case 2:
    exibirQuartoResevado( quarto,  numQuartos);
    break;
  case 3:
    exibirQuartoOcupado( quarto,  numQuartos);
    break;
  default:
    printf("Alternativa invalida\n");
    exibirQuartoStatus(quarto, numQuartos);
  }
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
}
static void exibirQuartoLivre(stDbQuarto *quarto, int numQuartos)
{
  int existe = 0;
  for (int x = 0; x < numQuartos; x++)
  {
    if (quarto[x].statusQuarto == LIVRE)
    {
      existe = 1;
      exibirOnlyQuarto(quarto, x);
    }
  }
  if(!existe)
    printf("Nao existe quarto Livre\n");
}

static void exibirQuartoOcupado(stDbQuarto *quarto, int numQuartos)
{
  int existe = 0;
  for (int x = 0; x < numQuartos; x++)
  {
    if (quarto[x].statusQuarto == OCUPADO)
    {
      existe = 1;
      exibirOnlyQuarto(quarto, x);
    }
  }
  if(!existe)
    printf("Nao existe quarto Ocupado\n");
}

static void exibirQuartoResevado(stDbQuarto *quarto, int numQuartos)
{
  int existe = 0;
  for (int x = 0; x < numQuartos; x++)
  {
    if (quarto[x].statusQuarto == RESERVADO)
    {
      existe = 1;
      exibirOnlyQuarto(quarto, x);
    }
  }
  if(!existe)
    printf("Nao existe quarto Resevado\n");
}



#endif // EXIBIRQUARTOSTATUS