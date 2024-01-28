#if !defined(EXIBIRVALORESINTERVALO)
#define EXIBIRVALORESINTERVALO

#include "../../../utils/utilis.h"

void exibirValoresIntervalo(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle *controle)
{
  Utils.SystemComand.clearTela(); 

  if(*(controle->quantidadeDeReserva) == 0){
    printf("Nenhuma reserva cadastrada\n\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  }

  struct tm inicio, fim;

  Utils.InputsSavin.getData(&inicio, "Digite a data do inicio do intervalo: ");
  Utils.SystemComand.clearTela(); 
  Utils.InputsSavin.getData(&fim, "Digite a data do fim do intervalo: ");
  Utils.SystemComand.clearTela(); 

  printf("Valores recebidos nesse intervalo\n\n");
  int x = 0;
  // Exibir valores para o intervalo
  for (int i = 0; i < *(controle->quantidadeDeReserva); i++)
  {
    time_t inicioTimestamp = mktime(&inicio);
    time_t fimTimestamp = mktime(&fim);
    time_t dataInicioTimestamp = mktime(&dbFluxoFinanceiro[i].dataReserva.DataInicial);
    time_t dataFinalTimestamp = mktime(&dbFluxoFinanceiro[i].dataReserva.DataFinal);

    if (dataInicioTimestamp >= inicioTimestamp &&
        dataFinalTimestamp <= fimTimestamp &&
        dbFluxoFinanceiro[i].statusPagamento == PAGO)
    {
      x += dbFluxoFinanceiro[i].valorPagar;
      exibirOnly(dbFluxoFinanceiro, i);
    }
  }
  printf("\n");

  printf("Valor total recebido neste periodo: %d\n\n", x);

  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");

}
#endif // EXIBIRVALORESINTERVALO
