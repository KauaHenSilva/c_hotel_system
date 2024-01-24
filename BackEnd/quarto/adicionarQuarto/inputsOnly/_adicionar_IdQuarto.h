#if !defined(_ADICIONARIDQUARTO)
#define _ADICIONARIDQUARTO


void adicionarIdQuarto(StDbQuartos *dbQuarto, int posicaoMemoria, int *idQuarto)
{
  Utils.SystemComand.clearTela();
  printf("Adicionando Quarto [posicao]... \n\n");
  dbQuarto[posicaoMemoria].numero = ++(*idQuarto);
  printf("[posicao] adicionado com sucesso!... \n");

}

#endif // ADICIONARIDQUARTO
