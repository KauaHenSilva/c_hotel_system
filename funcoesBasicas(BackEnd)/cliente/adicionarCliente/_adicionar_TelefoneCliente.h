#if !defined(ADICONARTELEFONECLIENTE)
#define ADICONARTELEFONECLIENTE

void adiconarTelefoneCliente(StDbClintes *dbCliente, int posicaoMemoria)
{
  Utils.InputsSavin.getTelefone(dbCliente[posicaoMemoria].telefone);
}

#endif // ADICONARTELEFONECLIENTE
