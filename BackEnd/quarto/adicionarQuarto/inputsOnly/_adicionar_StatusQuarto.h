#if !defined(ADICIONARSTATUSQUARTO2)
#define ADICIONARSTATUSQUARTO2

// #include "../../../../utils/utilis.h"

void initStatusQuarto(StDbQuartos *dbQuarto, int posicaoMemoria);

void adicionarStatusQuarto(StDbQuartos *dbQuarto, int posicaoMemoria)
{
  Utils.SystemComand.clearTela();
  printf("Adicionando Quarto [status] Padrao... \n\n");

  initStatusQuarto(dbQuarto, posicaoMemoria);

  printf("[status] Livre adicionado com sucesso!... \n\n");
}

void initStatusQuarto(StDbQuartos *dbQuarto, int posicaoMemoria)
{
  dbQuarto[posicaoMemoria].statusQuarto = LIVRE;
}

#endif // ADICIONARSTATUSQUARTO2