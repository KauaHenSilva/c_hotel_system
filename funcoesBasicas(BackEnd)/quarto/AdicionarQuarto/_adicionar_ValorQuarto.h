#if !defined(_ADICIONARVALORQUARTO)
#define _ADICIONARVALORQUARTO

#include "../../../db/model.h"
#include "../../../utils/utilis.h"

static void adicionarValorPersonalizadoQuarto(stDbQuarto *dbQuarto, int numQuartos);
static void adicionarValorPadraoQuarto(stDbQuarto *dbQuarto, int numQuartos);

void adicionarValorQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
    numQuartos -= 1;

    int ver;

    printf("Digite o tipo do valor do quarto [%d]: \n", dbQuarto[numQuartos].numero);
    printf("1 - Valor Padrao(SIMPLES: 100R$, DUPLO: 200R$, SUITE 300R$)\n");
    printf("2 - Valor Personalizado\n");
    Utils.getNumeroInt(&ver, "Digite o tipo do valor do quarto: ");

    switch (ver)
    {
    case 1:
        adicionarValorPadraoQuarto(dbQuarto, numQuartos);
        break;
    case 2:
        adicionarValorPersonalizadoQuarto(dbQuarto, numQuartos);
        break;
    default:
        printf("Alternativa Invalida\n");
    }
}

static void adicionarValorPersonalizadoQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
    Utils.getNumeroDouble(&dbQuarto[numQuartos].valorDiaria, "Digite o valor a ser pago no quarto: ");
}

static void adicionarValorPadraoQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
    switch (dbQuarto[numQuartos].tipoQuarto)
    {
        case SIMPLES:
            dbQuarto[numQuartos].valorDiaria = 100.0;
        case DUPLO:
            dbQuarto[numQuartos].valorDiaria = 200.0;
        case SUITE:
            dbQuarto[numQuartos].valorDiaria = 300.0;
    }
}

#endif // __pegarValor
