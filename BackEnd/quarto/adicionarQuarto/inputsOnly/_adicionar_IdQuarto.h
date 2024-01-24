#if !defined(_ADICIONARIDQUARTO)
#define _ADICIONARIDQUARTO


void adicionarIdQuarto(StDbQuartos *dbQuarto, int posicaoMemoria, int *idQuarto)
{
  dbQuarto[posicaoMemoria].numero = ++(*idQuarto);
}

#endif // ADICIONARIDQUARTO
