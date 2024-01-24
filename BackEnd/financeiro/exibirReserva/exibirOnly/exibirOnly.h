#if !defined(EXIVIRONLY)
#define EXIVIRONLY

void exibirOnly(StDbFluxoFinanceiro *dbFluxoFinanceiro, int x)
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
  printf("\n");
}

#endif // EXIVIRONLY
