#if !defined(_ADICIONARSTATUSQUARTO)
#define _ADICIONARSTATUSQUARTO

#include "../../../../utils/utilis.h"

static void initStatusQuarto(stDbQuarto *dbQuarto, int posicaoMemoria);
// static void adicionarStatusQuartoUser(stDbQuarto *dbQuarto, int posicaoMemoria);

void adicionarStatusQuarto(stDbQuarto *dbQuarto, int posicaoMemoria)
{

  int ver;
  printf("Digite o modelo de status do quarto [%d]: \n", dbQuarto[posicaoMemoria].numero);
  printf("1 - status Padrao (Padrao: Livre)\n");
  // printf("2 - status Personalizado\n");
  
  Utils.InputsBasic.getNumeroInt(&ver, "Digite o modelo de status do quarto: ");

  switch (ver)
  {
    case 1:
      initStatusQuarto(dbQuarto, posicaoMemoria);
      break;
    // case 2:
    //   adicionarStatusQuartoUser(dbQuarto, posicaoMemoria);
    //   break;
    default:
      Utils.SystemComand.clearTela();
      printf("Opcao anterior invalida!!\n");
      adicionarStatusQuarto(dbQuarto, posicaoMemoria);
      break;
  }
}

static void initStatusQuarto(stDbQuarto *dbQuarto, int posicaoMemoria)
{
  dbQuarto[posicaoMemoria].statusQuarto = LIVRE;
}

// static void adicionarStatusQuartoUser(stDbQuarto *dbQuarto, int posicaoMemoria)
// {

//   int opc;

//   printf("Selecione o status do quarto [%d]: \n",dbQuarto[posicaoMemoria].numero);
//   printf("1 - Livre\n");
//   printf("2 - Reservado\n");
//   printf("3 - Ocupado\n");

//   Utils.InputsBasic.getNumeroInt(&opc, "Digite o status do quarto: ");

//   switch (opc)
//   {
//     case 1:
//       dbQuarto[posicaoMemoria].statusQuarto = LIVRE;
//       break;
//     case 2:
//       dbQuarto[posicaoMemoria].statusQuarto = RESERVADO;
//       break;
//     case 3:
//       dbQuarto[posicaoMemoria].statusQuarto = OCUPADO;
//       break;
//     default:
//       printf("Status do quarto invalido\n");
//       adicionarStatusQuartoUser(dbQuarto, posicaoMemoria);
//   }
// }

// #endif // ADICIONARSTATUSQUARTO
