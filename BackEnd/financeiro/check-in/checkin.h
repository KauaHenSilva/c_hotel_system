#if !defined(CHECKIN)
#define CHECKIN

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "../exibirReserva/exibirOnly/exibirOnly.h"

int preucurarQuartoOcupado(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle *controle, int idQuarto)
{
    for (int x = 0; x < *controle->quantidadeDeReserva; x++)
    {
        if (dbFluxoFinanceiro[x].statusQuarto == OCUPADO && dbFluxoFinanceiro[x].idQuarto == idQuarto)
        {
            printf("O quarto esta ocupado!\n\n");
            return 1;
        }
    }
    return 0;
}

void checkin(StDbFluxoFinanceiro *dbFluxoFinanceiro,StDbClientes *dbClientes, StDbControle *controle, StDbQuartos *dbQuartos)
{
    int cont = 0;
    int *disponivel = NULL;

    printf("Exibindo todas as reservas disponiveis para check-in:\n\n");

    for (int x = 0; x < *controle->quantidadeDeReserva; x++)
    {
        if ((dbFluxoFinanceiro[x].statusPagamento == NAO_PAGO) &&
            (dbFluxoFinanceiro[x].statusQuarto == RESERVADO) &&
            !preucurarQuartoOcupado(dbFluxoFinanceiro, controle, dbFluxoFinanceiro[x].idQuarto))
        {
            exibirOnly(dbFluxoFinanceiro, x);
            disponivel = (int *)realloc(disponivel, sizeof(int) * (cont + 1));
            disponivel[cont] = dbFluxoFinanceiro[x].idReserva;
            cont++;
        }
    }

    if (cont == 0)
    {
        printf("Nao existe nenhuma reserva para fazer check-in\n\n");
        Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
        free(disponivel);
        return;
    }

    int idReserva;
    Utils.InputsBasic.getNumeroInt(&idReserva, "Digite o id da reserva que deseja fazer check-in: ");

    int encontrada = 0;
    for (int x = 0; x < cont; x++)
    {
        if (idReserva == disponivel[x])
        {
            encontrada = 1;
            break;
        }
    }

    if (!encontrada)
    {
        printf("Reserva nao encontrada\n\n");
        Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
        free(disponivel);
        return;
    }

    int idDoQuartoSelecionado = 0;
    int idDoClienteSelecionado = 0;
    int localReservaFinal = 0;

    for (int x = 0; x < *controle->quantidadeDeReserva; x++)
    {
        if (idReserva == dbFluxoFinanceiro[x].idReserva)
        {
            idDoQuartoSelecionado = dbFluxoFinanceiro[x].idQuarto;
            localReservaFinal = x;
            break;
        }
    }

    for (int x = 0; x < *controle->quantidadeDeReserva; x++)
    {
        if (idReserva == dbFluxoFinanceiro[x].idReserva)
        {
            idDoQuartoSelecionado = dbFluxoFinanceiro[x].idCliente;
            localReservaFinal = x;
            break;
        }
    }

    // Encontrar informações do quarto
    int localQuartoFinal = 0;
    for (int x = 0; x < *controle->quantidadeDeQuarto; x++)
    {
        if (dbClintes[x].idCadrastro == idDoQuartoSelecionado)
        {
            idDoClienteSelecionado = x;
            break;
        }
    }

    int localClienteFinal = 0;
    for (int x = 0; x < *controle->quantidadeDeCLientes; x++)
    {
        if (dbClientes[x].idCadrastro == idDoClienteSelecionado)
        {
            localClienteFinal = x;
            break;
        }
    }

    dbFluxoFinanceiro[localReservaFinal].statusQuarto = OCUPADO;
    dbQuartos[localQuartoFinal].statusQuarto = OCUPADO;
    dbClintes[localClienteFinal].statusCliente = OCUPADO;

    printf("Check-in Feito Com sucesso!\n\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    free(disponivel);
}

#endif // CHECKIN
