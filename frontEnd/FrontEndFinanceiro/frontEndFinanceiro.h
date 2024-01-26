// O.h
#if !defined(adsd)
#define adsd

#include "../../db/model.h"
#include "../../BackEnd/financeiro/financeiro.h"
#include "./frontEndExibicaoFinanceiro.h"
#include "../../db/Financeiro/saveFinanceiro.h"
#include "../../db/quartos/saveQuartos.h"

void frontEndFinanceiro(StDbFluxoFinanceiro **financeiro, StDbQuartos *quarto, StDbClientes *cliente, StDbControle *controle)
{
  int opc;

  while (1)
  {
    Utils.SystemComand.clearTela();

    printf("Menu Financeiro!\n");
    printf("1 - Realizar Reserva\n");
    printf("2 - Exibir Reserva\n");
    printf("3 - Realizar shek-In\n");
    printf("4 - Realizar shek-Out\n");
    printf("5 - Exibir valores em um intervalo de tempo\n");
    printf("6 - remover Reserva\n");
    printf("0 - Voltar\n");

    Utils.InputsBasic.getNumeroInt(&opc, "Digite o numero correspodente: ");

    switch (opc)
    {
      case 0:
        return;
        break;
      case 1:
        Financeiro.realizarReserva(financeiro, quarto, cliente, controle);
        saveFinanceiro(*financeiro, *(controle->quantidadeDeReserva), *(controle->idReserva));
        saveQuartos(quarto, *(controle->quantidadeDeQuarto), *(controle->idQuarto));
        break;
      case 2:
        frontEndExibicaoFinanceiro(*financeiro, *controle);
        break;
      case 3:
        Financeiro.checkin(*financeiro, controle, quarto);
        saveFinanceiro(*financeiro, *(controle->quantidadeDeReserva), *(controle->idReserva));
        saveQuartos(quarto, *(controle->quantidadeDeQuarto), *(controle->idQuarto));
        break;
      case 4:
        Financeiro.checkout(*financeiro, controle, quarto);
        saveFinanceiro(*financeiro, *(controle->quantidadeDeReserva), *(controle->idReserva));
        saveQuartos(quarto, *(controle->quantidadeDeQuarto), *(controle->idQuarto));
        break;
      case 5:
        Financeiro.exibirValoresIntervalo(*financeiro, controle);
        break;
      case 6:
        Financeiro.removerReserva(financeiro, controle->quantidadeDeReserva, quarto);
        saveFinanceiro(*financeiro, *(controle->quantidadeDeReserva), *(controle->idReserva));
        saveQuartos(quarto, *(controle->quantidadeDeQuarto), *(controle->idQuarto));
        break;
      default:
        printf("Alternativa invalida\n");
        break;
    }
  }
}

#endif
