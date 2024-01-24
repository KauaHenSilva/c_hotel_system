#if !defined(EXIBIRFLUXOFINANCEIROCPF)
#define EXIBIRFLUXOFINANCEIROCPF

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnly/exibirOnly.h"

void exibirReservaNome(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle controler){

  Utils.SystemComand.clearTela();
  if(controler.quantidadeDeReserva == 0){
    printf("Nenhum Fluxo Financeiro cadrastrado!\n");
    return;
  };

  for(int x = 0 ; x < *(controler.quantidadeDeReserva) ; x++)
  {
    printf("Fluxo Financeiro numero [%d]\n", x + 1);
    exibirOnly(dbFluxoFinanceiro, x);
  }

  int existe = 0; char nome[100];
  Utils.InputsBasic.getString(nome, "Digite o nome do cliente para buscar os Fluxos Financeiros: ");

  for(int x = 0 ; x <  *(controler.quantidadeDeReserva) ; x++)
  {
    if(!strcmp(dbFluxoFinanceiro[x].nomeCliente , nome)){
      existe = 1;
      exibirOnly(dbFluxoFinanceiro, x);
    }
  }

  if(!existe)
    printf("Este cliente nao possui fluxo financeiro\n");

}

#endif // EXIBIRCLIENTECPF
