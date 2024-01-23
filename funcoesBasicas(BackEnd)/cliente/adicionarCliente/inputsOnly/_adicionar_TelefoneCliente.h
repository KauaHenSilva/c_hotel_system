#if !defined(ADICONARTELEFONECLIENTE)
#define ADICONARTELEFONECLIENTE

void adicionarTelefoneCliente(StDbClintes *dbCliente, int posicaoMemoria)
{
  Utils.InputsSavin.getTelefone(dbCliente[posicaoMemoria].telefone);
}

#endif // ADICONARTELEFONECLIENTE
