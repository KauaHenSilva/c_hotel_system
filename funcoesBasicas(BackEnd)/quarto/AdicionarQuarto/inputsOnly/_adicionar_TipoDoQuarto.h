#if !defined(_ADICIONARTIPODOQUARTO)
#define _ADICIONARTIPODOQUARTO

#include "../../../../utils/utilis.h"

static void adicionarTipoPersonalizadoQuarto(stDbQuarto *dbQuarto, int posicaoMemoria);
static void adicionarTipoPadraoQuarto(stDbQuarto *dbQuarto, int posicaoMemoria);

void adicionarTipoQuarto(stDbQuarto *dbQuarto, int posicaoMemoria)
{
  int ver;
  
  printf("Digite o tipo do quarto [%d]: \n", dbQuarto[posicaoMemoria].numero);
  printf("1 - Tipo Padrao(Tipo: Simples)\n");
  printf("2 - Tipo Personalizado\n");
  Utils.InputsBasic.getNumeroInt(&ver, "Digite o tipo do quarto: ");

  switch (ver)
  {
    case 1:
      adicionarTipoPadraoQuarto(dbQuarto, posicaoMemoria);
      break;
    case 2:
      adicionarTipoPersonalizadoQuarto(dbQuarto, posicaoMemoria);
      break;
    
    default:
      adicionarTipoQuarto(dbQuarto, posicaoMemoria);
      break;
  }

}

static void adicionarTipoPersonalizadoQuarto(stDbQuarto *dbQuarto, int posicaoMemoria)
{
  int tipo;
  printf("Digite o Tipo do quarto [%d]: \n", dbQuarto[posicaoMemoria].numero);
  printf("1 - Simples\n");
  printf("2 - Duplo\n");
  printf("3 - Suite\n");
  
  Utils.InputsBasic.getNumeroInt(&tipo, "Digite o tipo do quarto: ");

  switch (tipo)
  {
    case 1:
      dbQuarto[posicaoMemoria].tipoQuarto = SIMPLES;
      break;
    case 2:
      dbQuarto[posicaoMemoria].tipoQuarto = DUPLO;
      break;
    case 3:
      dbQuarto[posicaoMemoria].tipoQuarto = SUITE;
      break;
    default:
      printf("Tipo de quarto invalido\n");
      adicionarTipoPersonalizadoQuarto(dbQuarto, posicaoMemoria);
  }
}

static void adicionarTipoPadraoQuarto(stDbQuarto *dbQuarto, int posicaoMemoria)
{
  dbQuarto[posicaoMemoria].tipoQuarto = SIMPLES;
}

#endif // PEGARTIPODOQUARTO
