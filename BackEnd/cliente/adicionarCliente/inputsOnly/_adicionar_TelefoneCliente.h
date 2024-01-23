#if !defined(ADICONARTELEFONECLIENTE)
#define ADICONARTELEFONECLIENTE

void adicionarTelefoneCliente(StDbClientes *dbCliente, int posicaoMemoria)
{
  Utils.InputsSavin.getTelefone(dbCliente[posicaoMemoria].telefone);
}

#endif // ADICONARTELEFONECLIENTE
