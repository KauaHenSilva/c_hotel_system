#if !defined(FRONTENDEXIBICAOQUARTO)
#define FRONTENDEXIBICAOQUARTO

#include "../../db/model.h"

#include "../../BackEnd/quarto/quarto.h"
#include "../../Utils/utilis.h"

void frontEndExibicaoQuarto(StDbQuartos *quartos, int qtdQuarto)
{
  int opc;
  while (1)
  {
    Utils.SystemComand.clearTela();

    printf("Exibir quarto!\n");
    printf("1 - Exibir todos os quartos\n");
    printf("2 - Exibir quarto por ID\n");
    printf("3 - Exibir quarto por Status\n");
    printf("4 - Exibir quarto por tipo\n");
    printf("0 - Voltar\n");

    Utils.InputsBasic.getNumeroInt(&opc, "Digite o numero correspodente: ");

    switch (opc)
    {
      case 0:
        return;
        break;
      case 1:
        Quarto.ExibirQuarto.exibirQuartoAll(quartos, qtdQuarto);
        break;
      case 2:
        Quarto.ExibirQuarto.exibirQuartoId(quartos, qtdQuarto);
        break;
      case 3:
        Quarto.ExibirQuarto.exibirQuartoStatus(quartos, qtdQuarto);
        break;
      case 4:
        Quarto.ExibirQuarto.exibirQuartoTipo(quartos, qtdQuarto);
        break;
      default:
        printf("Alternativa invalida\n");
    }

    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
  }
}

#endif