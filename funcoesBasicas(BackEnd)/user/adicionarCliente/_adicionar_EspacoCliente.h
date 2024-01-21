// #if !defined(_ADICIONARCLIENTE)
// #define _ADICIONARCLIENTE

// #include "../../../db/model.h"
// #include <stdio.h>
// #include <stdlib.h>

// static void errorAoAlocarMemoria();

// void adicionarEspacoQuarto(StDbClintes **dbCliente, int *numQuartos)
// {
//   if (*dbCliente == NULL)
//   {
//     *dbCliente = (StDbClintes *)malloc(sizeof(StDbClintes));

//     if(!dbCliente)
//       errorAoAlocarMemoria();

//     (*numQuartos)++;
//     return;
//   }
//   *dbCliente = (StDbClintes *)realloc(*dbCliente, (*numQuartos + 1) * sizeof(StDbClintes));

//     if(!dbCliente)
//       errorAoAlocarMemoria();

//   (*numQuartos)++;
// }

// static void errorAoAlocarMemoria()
// {
//   printf("Erro ao alocar memoria");
//   exit(1);
// }

// #endif // _ADICIONARCLIENTE