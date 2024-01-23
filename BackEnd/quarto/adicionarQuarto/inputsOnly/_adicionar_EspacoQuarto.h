#if !defined(_ADICIONARQUARTO)
#define _ADICIONARQUARTO

#include <stdio.h>
#include <stdlib.h>

static void errorAoAlocarMemoria();

void adicionarEspacoQuarto(StDbQuartos **dbQuartos, int *numQuartos)
{
  if (*dbQuartos == NULL)
  {
    *dbQuartos = (StDbQuartos *)malloc(sizeof(StDbQuartos));

    if(!dbQuartos)
      errorAoAlocarMemoria();

    (*numQuartos)++;
    return;
  }
  *dbQuartos = (StDbQuartos *)realloc(*dbQuartos, (*numQuartos + 1) * sizeof(StDbQuartos));

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