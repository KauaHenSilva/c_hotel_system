#if !defined(_ADICIONARIDQUARTO)
#define _ADICIONARIDQUARTO


void adicionarIdQuarto(stDbQuartos *dbQuarto, int numQuartos, int posicaoMemoria)
{
  dbQuarto[posicaoMemoria].numero = numQuartos;
}

#endif // ADICIONARIDQUARTO
