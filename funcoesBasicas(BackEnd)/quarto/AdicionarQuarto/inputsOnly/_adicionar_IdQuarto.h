#if !defined(_ADICIONARIDQUARTO)
#define _ADICIONARIDQUARTO


void adicionarIdQuarto(stDbQuarto *dbQuarto, int numQuartos, int posicaoMemoria)
{
  dbQuarto[posicaoMemoria].numero = numQuartos;
}

#endif // ADICIONARIDQUARTO
