// O.h
#if !defined(adsd)
#define adsd

#include "../../db/model.h"
#include "../../BackEnd/financeiro/financeiro.h"

void frontEndFinanceiro(StDbFluxoFinanceiro **financeiro, StDbQuartos *quarto, StDbClientes *cliente, StDbControle *controle)
{
  int opc;

  while (1)
  {
    Utils.SystemComand.clearTela();

    printf("Menu Reserva!\n");
    printf("1 - Realizar Reserva\n");
    printf("0 - Voltar\n");

    Utils.InputsBasic.getNumeroInt(&opc, "Digite o numero correspodente: ");

    switch (opc)
    {
      case 0:
        return;
        break;
      case 1:
        Financeiro.realizarReserva(financeiro, quarto, cliente, controle);
        break;
      default:
        printf("Alternativa invalida\n");
        break;
    }
  }
}

#endif
