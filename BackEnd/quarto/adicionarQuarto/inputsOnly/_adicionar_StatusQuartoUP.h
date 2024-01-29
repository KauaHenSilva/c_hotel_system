#if !defined(_ADICIONARSTATUSQUARTOUP)
#define _ADICIONARSTATUSQUARTOUP

// #include "../../../../utils/utilis.h"

void initStatusQuarto(StDbQuartos *dbQuarto, int posicaoMemoria);
static void adicionarStatusQuartoUser(StDbQuartos *dbQuarto, int posicaoMemoria);

void adicionarStatusQuartoUP(StDbQuartos *dbQuarto, int posicaoMemoria)
{
  int ver;
  while (1)
  {
    Utils.SystemComand.clearTela();
    printf("Adicionando Quarto [status]... \n\n");

    printf("Digite o modelo de status do quarto [%d]: \n", dbQuarto[posicaoMemoria].numero);
    printf("1 - status Padrao (Padrao: Livre)\n");
    printf("2 - status Personalizado\n");
    
    Utils.InputsBasic.getNumeroInt(&ver, "Digite o modelo de status do quarto: ");

    switch (ver)
    {
      case 1:
        initStatusQuarto(dbQuarto, posicaoMemoria);
        break;
      case 2:
        adicionarStatusQuartoUser(dbQuarto, posicaoMemoria);
        break;
      default:
        Utils.SystemComand.clearTela();
        printf("Opcao anterior invalida!!\n");
        Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
        continue;
        break;
    }
    break;
  }
  printf("[status] adicionado com sucesso!... \n\n");
}

static void adicionarStatusQuartoUser(StDbQuartos *dbQuarto, int posicaoMemoria)
{
  Utils.SystemComand.clearTela();

  int opc;

  printf("Selecione o status do quarto [%d]: \n",dbQuarto[posicaoMemoria].numero);
  printf("1 - Livre\n");
  printf("2 - Reservado\n");
  printf("3 - Ocupado\n");

  Utils.InputsBasic.getNumeroInt(&opc, "Digite o status do quarto: ");

  switch (opc)
  {
    case 1:
      dbQuarto[posicaoMemoria].statusQuarto = LIVRE;
      break;
    case 2:
      dbQuarto[posicaoMemoria].statusQuarto = RESERVADO;
      break;
    case 3:
      dbQuarto[posicaoMemoria].statusQuarto = OCUPADO;
      break;
    default:
      printf("Status do quarto invalido\n");
      adicionarStatusQuartoUser(dbQuarto, posicaoMemoria);
  }
}

#endif // ADICIONARSTATUSQUARTO
