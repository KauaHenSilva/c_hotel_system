#if !defined(_ADICIONARTIPODOQUARTO)
#define _ADICIONARTIPODOQUARTO

#include "../../../db/model.h"
#include "../../../utils/utilis.h"

static void adicionarTipoPersonalizadoQuarto(stDbQuarto *dbQuarto, int numQuartos);
static void adicionarTipoPadraoQuarto(stDbQuarto *dbQuarto, int numQuartos);

void adicionarTipoQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
  numQuartos -= 1;

  int ver;

  printf("Digite o tipo do quarto [%d]: \n", dbQuarto[numQuartos].numero);
  printf("1 - Tipo Padrao(Tipo: Simples)\n");
  printf("2 - Tipo Personalizado\n");
  Utils.getNumeroInt(&ver, "Digite o tipo do quarto: ");

  switch (ver)
  {
    case 1:
      adicionarTipoPadraoQuarto(dbQuarto, numQuartos);
      break;
    case 2:
      adicionarTipoPersonalizadoQuarto(dbQuarto, numQuartos);
      break;
    
    default:
      adicionarTipoQuarto(dbQuarto, numQuartos + 1);
      break;
  }

}

static void adicionarTipoPersonalizadoQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
  int tipo;
  printf("Digite o Tipo do quarto [%d]: \n", dbQuarto[numQuartos].numero);
  printf("1 - Simples\n");
  printf("2 - Duplo\n");
  printf("3 - Suite\n");
  
  Utils.getNumeroInt(&tipo, "Digite o tipo do quarto: ");

  switch (tipo)
  {
    case 1:
      dbQuarto[numQuartos].tipoQuarto = SIMPLES;
      break;
    case 2:
      dbQuarto[numQuartos].tipoQuarto = DUPLO;
      break;
    case 3:
      dbQuarto[numQuartos].tipoQuarto = SUITE;
      break;
    default:
      printf("Tipo de quarto invalido\n");
      adicionarTipoPersonalizadoQuarto(dbQuarto, numQuartos);
  }
}

static void adicionarTipoPadraoQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
  dbQuarto[numQuartos].tipoQuarto = SIMPLES;
}

#endif // PEGARTIPODOQUARTO
