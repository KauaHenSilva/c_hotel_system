#if !defined(EXIBIRRESERVA)
#define EXIBIRRESERVA

#include "../../../db/model.h"

void exibirReserva(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle controler)
{
  Utils.SystemComand.clearTela();

  for(int x = 0 ; x < *(controler.quantidadeDeReserva) ; x++)
  {
    printf("Fluxo Financa [%d]: \n", x + 1);
    printf(" - id da Reserva: %d\n", dbFluxoFinanceiro[x].idReserva);
    printf(" - id do Cliente: %d\n", dbFluxoFinanceiro[x].idCliente);
    printf(" - id do Quarto: %d\n", dbFluxoFinanceiro[x].idQuarto);
    printf(" - Nome do Cliente: %s\n", dbFluxoFinanceiro[x].nomeCliente);
    printf(" - Valor a pagar: %.2lf\n", dbFluxoFinanceiro[x].valorPagar);
    switch (dbFluxoFinanceiro[x].statusPagamento)
    {
      case NAO_PAGO:
        printf(" - Status do Pagamento: NAO PAGO\n");
        break;
      case PAGO:
        printf(" - Status do Pagamento: PAGO\n");
        break;
    }
  }
  
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
}

#endif // EXIBIRRESERVA
