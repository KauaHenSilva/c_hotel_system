#if !defined(FRONTENDEXIBICAOFinanceiro)
#define FRONTENDEXIBICAOFinanceiro

#include "../../db/model.h"

#include "../../BackEnd/Financeiro/Financeiro.h"
#include "../../Utils/utilis.h"

void frontEndExibicaoFinanceiro(StDbFluxoFinanceiro *Financeiros, StDbControle controle)
{
  int opc;
  while (1)
  {
    Utils.SystemComand.clearTela();

    printf("Exibir Fluxos Financeiros\n");
    printf("1 - Exibir todos os Fluxos Financeiros\n");
    printf("2 - Exibir Fluxos Financeiros por Id\n");
    printf("3 - Exibir Fluxos Financeiros por Nome\n");
    printf("0 - Voltar\n");

    Utils.InputsBasic.getNumeroInt(&opc, "Digite o numero correspodente: ");

    switch (opc)
    {
      case 0:
        return;
        break;
      case 1:
        Financeiro.ExibirReserva.exibirReservaAll(Financeiros, controle);
        break;
      case 2:
        Financeiro.ExibirReserva.exibirReservaId(Financeiros, controle);
        break;
      case 3:
        Financeiro.ExibirReserva.exibirReservaNome(Financeiros, controle);
        break;
      default:
        printf("Alternativa invalida\n");
        break;
    }

    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
  }
}

#endif // MACRO