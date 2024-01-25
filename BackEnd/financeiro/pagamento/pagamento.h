#if !defined(REALIZARPAGAMENTO)
#define REALIZARPAGAMENTO

#include "../exibirReserva/exibirOnly/exibirOnly.h"

void realizarPagamento(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle *controle)
{
    int opc;

    int *disponiveis = NULL;

    while (1)
    {
        Utils.SystemComand.clearTela();

        int cont = 0;
        for (int x = 0; x < *(controle->quantidadeDeReserva); x++)
            if (dbFluxoFinanceiro[x].statusPagamento == NAO_PAGO)
            {
                disponiveis = (int *)realloc(disponiveis, sizeof(int) * ++cont);
                if (disponiveis == NULL)
                {
                    printf("Erro ao alocar memoria\n");
                    exit(1);
                }

                disponiveis[cont - 1] = dbFluxoFinanceiro[x].idReserva;

                exibirOnly(dbFluxoFinanceiro, x);
            }

        Utils.InputsBasic.getNumeroInt(&opc, "Digite o id correspodente: ");

        int Pago = 0;
        for (int x = 0; x < cont; x++)
            if (disponiveis[x] == opc)
            {
                if (!Utils.InputsBasic.getConfirmacao("Deseja realmente realizar o pagamento? [S]im [N]ao: "))
                {
                    free(disponiveis);
                    return;
                }

                Pago = 0;
                for (int x = 0; x < *(controle->quantidadeDeReserva); x++)
                    if (dbFluxoFinanceiro[x].idReserva == disponiveis[x])
                    {
                        dbFluxoFinanceiro[x].statusPagamento = PAGO;
                        Pago = 1;
                        printf("Pagamento realizado com sucesso\n");
                        free(disponiveis);
                        return;
                        break;
                    }
            }

        if (!Pago)
            printf("Id invalido\n");
    }
}

#endif // REALIZARPAGAMENTO
