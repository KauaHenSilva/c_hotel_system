// O.h
#if !defined(adsd)
#define adsd

#include "../../db/model.h"
#include "../../BackEnd/financeiro/financeiro.h"

void frontEndFinanceiro(StDbFluxoFinanceiro **financeiro, StDbQuartos *quarto, StDbClientes *cliente, StDbControle *controle)
{
  Financeiro.realizarReserva(financeiro, quarto, cliente, controle);
}

#endif
