#if !defined(_ADICIONARVALORQUARTO)
#define _ADICIONARVALORQUARTO

#include "../../../../utils/utilis.h"

static void adicionarValorPersonalizadoQuarto(StDbQuartos *dbQuarto, int posicaoMemoria);
static void adicionarValorPadraoQuarto(StDbQuartos *dbQuarto, int posicaoMemoria);

void adicionarValorQuarto(StDbQuartos *dbQuarto, int posicaoMemoria)
{
    Utils.SystemComand.clearTela();

    while (1)
    {
        printf("Adicionando Quarto [valor]... \n\n");

        int opc;

        printf("Digite o tipo do valor do quarto [%d]: \n", dbQuarto[posicaoMemoria].numero);
        printf("1 - Valor Padrao(SIMPLES: 100R$, DUPLO: 200R$, SUITE 300R$)\n");
        printf("2 - Valor Personalizado\n");

        Utils.InputsBasic.getNumeroInt(&opc, "Digite o tipo do valor do quarto: ");

        switch (opc)
        {
        case 1:
            adicionarValorPadraoQuarto(dbQuarto, posicaoMemoria);
            break;
        case 2:
            adicionarValorPersonalizadoQuarto(dbQuarto, posicaoMemoria);
            break;
        default:
            printf("Alternativa Invalida\n");
            continue;
        }
        break;;
    }

    printf("[valor] adicionado com sucesso!... \n");

}

static void adicionarValorPersonalizadoQuarto(StDbQuartos *dbQuarto, int posicaoMemoria)
{
    Utils.InputsBasic.getNumeroDouble( \
    &dbQuarto[posicaoMemoria].valorDiaria, \
    "Digite o valor a ser pago no quarto: ");
}

static void adicionarValorPadraoQuarto(StDbQuartos *dbQuarto, int posicaoMemoria)
{
    switch (dbQuarto[posicaoMemoria].tipoQuarto)
    {
        case SIMPLES:
            dbQuarto[posicaoMemoria].valorDiaria = 100.0;
            break;
        case DUPLO:
            dbQuarto[posicaoMemoria].valorDiaria = 200.0;
            break;
        case SUITE:
            dbQuarto[posicaoMemoria].valorDiaria = 300.0;
            break;
    }
}

#endif // __pegarValor
