#if !defined(_ADICIONARIDQUARTO)
#define _ADICIONARIDQUARTO


void adicionarIdQuarto(StDbQuartos *dbQuarto, int numQuartos, int posicaoMemoria)
{
  dbQuarto[posicaoMemoria].numero = numQuartos;
}

#endif // ADICIONARIDQUARTO
