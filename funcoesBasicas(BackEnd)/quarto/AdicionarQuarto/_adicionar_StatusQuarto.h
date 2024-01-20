#if !defined(_ADICIONARSTATUSQUARTO)
#define _ADICIONARSTATUSQUARTO

#include "../../../db/model.h"
#include "../../../utils/utilis.h"

static void initStatusQuarto(stDbQuarto *dbQuarto, int numQuartos);
static void adicionarStatusQuartoUser(stDbQuarto *dbQuarto, int numQuartos);

void adicionarStatusQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
  numQuartos -= 1;

  int ver;
  printf("Digite o modelo de status do quarto [%d]: \n", dbQuarto[numQuartos].numero);
  printf("1 - status Padrao (Padrao: Livre)\n");
  printf("2 - status Personalizado\n");
  
  Utils.getNumeroInt(&ver, "Digite o modelo de status do quarto: ");

  switch (ver)
  {
    case 1:
      initStatusQuarto(dbQuarto, numQuartos);
      break;
    case 2:
      adicionarStatusQuartoUser(dbQuarto, numQuartos);
      break;
    default:
      Utils.clearTela();
      printf("Opcao anterior invalida!!\n");
      adicionarStatusQuarto(dbQuarto, numQuartos + 1);
      break;
  }
}

static void initStatusQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
  dbQuarto[numQuartos].statusQuarto = LIVRE;
}

static void adicionarStatusQuartoUser(stDbQuarto *dbQuarto, int numQuartos)
{

  int status;

  printf("Selecione o status do quarto [%d]: \n",dbQuarto[numQuartos].numero + 1);
  printf("1 - Livre\n");
  printf("2 - Reservado\n");
  printf("3 - Ocupado\n");

  Utils.getNumeroInt(&status, "Digite o status do quarto: ");

  switch (status)
  {
    case 1:
      dbQuarto[numQuartos].statusQuarto = LIVRE;
      break;
    case 2:
      dbQuarto[numQuartos].tipoQuarto = RESERVADO;
      break;
    case 3:
      dbQuarto[numQuartos].tipoQuarto = OCUPADO;
      break;
    default:
      printf("Status do quarto invalido\n");
      adicionarStatusQuartoUser(dbQuarto, numQuartos);
  }
}

#endif // ADICIONARSTATUSQUARTO
