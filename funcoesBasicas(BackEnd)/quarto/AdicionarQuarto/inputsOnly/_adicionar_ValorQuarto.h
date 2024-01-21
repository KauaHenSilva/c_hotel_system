#if !defined(_ADICIONARVALORQUARTO)
#define _ADICIONARVALORQUARTO

#include "../../../../utils/utilis.h"

static void adicionarValorPersonalizadoQuarto(stDbQuarto *dbQuarto, int posicaoMemoria);
static void adicionarValorPadraoQuarto(stDbQuarto *dbQuarto, int posicaoMemoria);

void adicionarValorQuarto(stDbQuarto *dbQuarto, int posicaoMemoria)
{
    int ver;

    printf("Digite o tipo do valor do quarto [%d]: \n", dbQuarto[posicaoMemoria].numero);
    printf("1 - Valor Padrao(SIMPLES: 100R$, DUPLO: 200R$, SUITE 300R$)\n");
    printf("2 - Valor Personalizado\n");
    Utils.InputsBasic.getNumeroInt(&ver, "Digite o tipo do valor do quarto: ");

    switch (ver)
    {
    case 1:
        adicionarValorPadraoQuarto(dbQuarto, posicaoMemoria);
        break;
    case 2:
        adicionarValorPersonalizadoQuarto(dbQuarto, posicaoMemoria);
        break;
    default:
        printf("Alternativa Invalida\n");
    }
}

static void adicionarValorPersonalizadoQuarto(stDbQuarto *dbQuarto, int posicaoMemoria)
{
    Utils.InputsBasic.getNumeroDouble( \
    &dbQuarto[posicaoMemoria].valorDiaria, \
    "Digite o valor a ser pago no quarto: ");
}

static void adicionarValorPadraoQuarto(stDbQuarto *dbQuarto, int posicaoMemoria)
{
    switch (dbQuarto[posicaoMemoria].tipoQuarto)
    {
    case SIMPLES:
        dbQuarto[posicaoMemoria].valorDiaria = 100.0;
    case DUPLO:
        dbQuarto[posicaoMemoria].valorDiaria = 200.0;
    case SUITE:
        dbQuarto[posicaoMemoria].valorDiaria = 300.0;
    }
}

#endif // __pegarValor