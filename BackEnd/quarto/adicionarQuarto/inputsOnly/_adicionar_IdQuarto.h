#if !defined(_ADICIONARIDQUARTO)
#define _ADICIONARIDQUARTO


void adicionarIdQuarto(StDbQuartos *dbQuarto, int numQuartos, int posicaoMemoria)
{
  Utils.SystemComand.clearTela();
  printf("Adicionando Quarto [posicao]... \n\n");
  dbQuarto[posicaoMemoria].numero = numQuartos;
  printf("[posicao] adicionado com sucesso!... \n");

}

#endif // ADICIONARIDQUARTO
