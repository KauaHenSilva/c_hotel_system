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

  Utils.InputsSavin.getData(&inicio, "Digite a data e hora de início do intervalo (AAAA-MM-DD): ");
  Utils.SystemComand.clearTela(); 
  Utils.InputsSavin.getData(&fim, "Digite a data e hora do fim do intervalo (AAAA-MM-DD): ");
  Utils.SystemComand.clearTela(); 

  printf("Valores recebidos nesse intervalo\n\n");

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
      printf("Voce recebeu: %.2lf\n", dbFluxoFinanceiro[i].valorPagar);
    }
  }
  printf("\n");
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");

}
#endif // EXIBIRVALORESINTERVALO
