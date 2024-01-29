#if !defined(EXIVIRONLY)
#define EXIVIRONLY

void exibirData(struct tm *data, const char *msg)
{
  char buffer[20];

  strftime(buffer, sizeof(buffer), "%d-%m-%Y", data);

  printf("%s%s\n", msg, buffer);
}

void exibirDataPagamento(StDbFluxoFinanceiro *fluxo, int i)
{
  char buffer[80];

  strftime(buffer, sizeof(buffer), " - Data e hora do pagamento: %d-%m-%Y %H:%M:%S", &(fluxo[i].dataPagamento));
  
  printf("%s\n", buffer);
}


void exibirOnly(StDbFluxoFinanceiro *dbFluxoFinanceiro, int x)
{
  printf("Fluxo Financa [%d]: \n", x + 1);
  printf(" - id da Reserva: %d\n", dbFluxoFinanceiro[x].idReserva);
  printf(" - id do Cliente: %d\n", dbFluxoFinanceiro[x].idCliente);
  printf(" - id do Quarto: %d\n", dbFluxoFinanceiro[x].idQuarto);
  printf(" - Nome do Cliente: %s\n", dbFluxoFinanceiro[x].nomeCliente);
  printf(" - cpf do Cliente: %s\n", dbFluxoFinanceiro[x].cpfCliente);
  printf(" - Valor a pagar: %.2lf\n", dbFluxoFinanceiro[x].valorPagar);
  switch (dbFluxoFinanceiro[x].statusPagamento)
  {
  case NAO_PAGO:
    printf(" - Status do Pagamento: NAO PAGO\n");
    break;
  case PAGO:
    printf(" - Status do Pagamento: PAGO\n");
    exibirDataPagamento(dbFluxoFinanceiro, x);
    break;
  }
  switch (dbFluxoFinanceiro[x].statusQuarto)
  {
    case LIVRE:
      printf(" - Status do Quarto: LIVRE\n");
      break;
    case OCUPADO:
      printf(" - Status do Quarto: OCUPADO\n");
      break;
    case RESERVADO:
      printf(" - Status do Quarto: RESERVADO\n");
      break;
  }

  exibirData(&dbFluxoFinanceiro[x].dataReserva.DataInicial, " - Data de inicial cadrastro: ");
  exibirData(&dbFluxoFinanceiro[x].dataReserva.DataFinal, " - Data de final cadrastro: ");

  printf("\n");
}

#endif // EXIVIRONLY
