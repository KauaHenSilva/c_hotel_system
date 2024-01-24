#if !defined(REALIZARRESERVA)
#define REALIZARRESERVA

#include "../../quarto/quarto.h"
#include "../../quarto/exibirQuarto/exibirOnlyQuarto/exibirOnlyQuarto.h"
#include "../../cliente/Cliente.h"

void realizarReserva(StDbFluxoFinanceiro **FluxoFinanceiro, StDbClientes *cliente, StDbQuartos *quarto, StDbControle *controle)
{

  printf("Quantidade de Clientes: %d\n", *(controle->quantidadeDeCLientes));
  printf("Quantidade de Quartos: %d\n", *(controle->quantidadeDeQuarto));

  for (int x = 0; x < *(controle->quantidadeDeQuarto); x++)
    exibirOnlyQuarto(quarto, x);

  for (int x = 0; x < *(controle->quantidadeDeCLientes); x++)
    exibirOnlyCliente(cliente, x);
}

#endif // REALIZARRESERVA
