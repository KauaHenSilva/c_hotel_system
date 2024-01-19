#if !defined(__PEGARVALORQUARTO)
#define __PEGARVALORQUARTO

#include "../../../db/model.h"
void adicionarValorQuarto(stDbQuarto *dbQuarto, int numQuartos) {
  numQuartos -= 1;
    switch(dbQuarto[numQuartos].tipoQuarto) {
        case SIMPLES:
            dbQuarto[numQuartos].valorDiaria = 100.0;
        case DUPLO:
            dbQuarto[numQuartos].valorDiaria = 200.0;
        case SUITE:
            dbQuarto[numQuartos].valorDiaria = 300.0; 
    }
}

#endif // __pegarValor
