#if !defined(_ADICIONARQUARTO)
#define _ADICIONARQUARTO

#include <stdio.h>
#include <stdlib.h>

static void errorAoAlocarMemoria();

void adicionarEspacoQuarto(stDbQuartos **dbQuartos, int *numQuartos)
{
  if (*dbQuartos == NULL)
  {
    *dbQuartos = (stDbQuartos *)malloc(sizeof(stDbQuartos));

    if(!dbQuartos)
      errorAoAlocarMemoria();

    (*numQuartos)++;
    return;
  }
  *dbQuartos = (stDbQuartos *)realloc(*dbQuartos, (*numQuartos + 1) * sizeof(stDbQuartos));

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