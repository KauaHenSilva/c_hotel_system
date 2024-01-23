#if !defined(ADICONARTELEFONECLIENTE)
#define ADICONARTELEFONECLIENTE

void adicionarTelefoneCliente(StDbClientes *dbCliente, int posicaoMemoria)
{
  Utils.SystemComand.clearTela();
  printf("Adicionando Clinte [Telefone]... \n");
  Utils.InputsSavin.getTelefone(dbCliente[posicaoMemoria].telefone);
  printf("Clinte [Telefone] Adicionado... \n");
}

#endif // ADICONARTELEFONECLIENTE
