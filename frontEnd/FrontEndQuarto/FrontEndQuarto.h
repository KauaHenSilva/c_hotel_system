#if !defined(MENUQUARTO)
#define MENUQUARTO

#include <stdio.h>

#include "../../db/model.h"
#include "../../BackEnd/quarto/quarto.h"
#include "../../db/quartos/saveQuartos.h"

#include "../../Utils/utilis.h"

#include "./frontEndExibicaoQuarto.h"

void frontEndQuarto(StDbQuartos **quartos, int *qtdQuartos)
{
  Utils.SystemComand.clearTela();

  printf("Menu Quarto!\n");
  printf("1 - Cadastrar Quarto\n");
  printf("2 - Listar Quartos\n");
  printf("3 - Editar Quarto\n");
  printf("4 - Excluir Quarto\n");
  printf("0 - Voltar\n");

  int opc;
  Utils.InputsBasic.getNumeroInt(&opc, "Digite o numero correspodente: ");

  switch (opc)
  {
    case 0:
      return;
      break;
    case 1:
      Quarto.adicionarQuarto(quartos, qtdQuartos);
      saveQuartos(*quartos, *qtdQuartos);
      break;
    case 2:
      frontEndExibicaoQuarto(*quartos, *qtdQuartos);
      break;
    case 3:
      Quarto.editarQuarto(*quartos, *qtdQuartos);
      saveQuartos(*quartos, *qtdQuartos);
      break;
    case 4:
      Quarto.removerQuarto(quartos, qtdQuartos);
      saveQuartos(*quartos, *qtdQuartos);
      break;
    default:
      printf("Alternativa invalida\n");
      break;
  }
  frontEndQuarto(quartos, qtdQuartos);
}

#endif // MENUQUARTO
