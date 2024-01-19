#if !defined(__PEGARVALORQUARTO)
#define __PEGARVALORQUARTO

#include "db.h"
double pegarValorQuarto(tipoQuarto tipo) {
    switch(tipo) {
        case SIMPLES:
            return 100.0;
        case DUPLO:
            return 200.0;
        case SUITE:
            return 300.0; 
        default:
            return -1;
    }
}

#endif // __pegarValor
