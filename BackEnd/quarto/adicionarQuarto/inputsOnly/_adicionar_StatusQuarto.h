#if !defined(ADICIONARSTATUSQUARTO2)
#define ADICIONARSTATUSQUARTO2

// #include "../../../../utils/utilis.h"

void initStatusQuarto(StDbQuartos *dbQuarto, int posicaoMemoria);

void adicionarStatusQuarto(StDbQuartos *dbQuarto, int posicaoMemoria)
{
  initStatusQuarto(dbQuarto, posicaoMemoria);
}

void initStatusQuarto(StDbQuartos *dbQuarto, int posicaoMemoria)
{
  dbQuarto[posicaoMemoria].statusQuarto = LIVRE;
}

#endif // ADICIONARSTATUSQUARTO2