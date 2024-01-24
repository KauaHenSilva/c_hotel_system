#if !defined(INITDB)
#define INITDB

#include "./model.h"

#include <stdlib.h> 

StDbQuartos *dbQuartos = NULL;
StDbClientes *dbClintes = NULL;
StDbFluxoFinanceiro *DbFluxoFinanceiro = NULL;

int quantidadeDeQuarto = 0;
int quantidadeDeCLientes = 0;
int idQuarto = 0;
int idCliente = 0;

#endif // INITDB
