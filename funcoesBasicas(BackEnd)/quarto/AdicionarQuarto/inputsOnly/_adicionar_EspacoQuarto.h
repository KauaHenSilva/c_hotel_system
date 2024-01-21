#if !defined(_ADICIONARQUARTO)
#define _ADICIONARQUARTO

#include <stdio.h>
#include <stdlib.h>

static void errorAoAlocarMemoria();

void adicionarEspacoQuarto(stDbQuarto **dbQuartos, int *numQuartos)
{
  if (*dbQuartos == NULL)
  {
    *dbQuartos = (stDbQuarto *)malloc(sizeof(stDbQuarto));

    if(!dbQuartos)
      errorAoAlocarMemoria();

    (*numQuartos)++;
    return;
  }
  *dbQuartos = (stDbQuarto *)realloc(*dbQuartos, (*numQuartos + 1) * sizeof(stDbQuarto));

    if(!dbQuartos)
      errorAoAlocarMemoria();

  (*numQuartos)++;
}

static void errorAoAlocarMemoria()
{
  printf("Erro ao alocar memoria");
  exit(1);
}

#endif // ADICIONARQUARTO