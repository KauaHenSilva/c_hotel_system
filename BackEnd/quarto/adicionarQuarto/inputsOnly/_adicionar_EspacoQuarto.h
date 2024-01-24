#if !defined(_ADICIONARQUARTO)
#define _ADICIONARQUARTO

#include <stdio.h>
#include <stdlib.h>


void adicionarEspacoQuarto(StDbQuartos **dbQuartos, int *numQuartos)
{
  Utils.SystemComand.clearTela();

  printf("Adicionando Quarto [espaco]... \n\n");
  
  if (*dbQuartos == NULL)
  {
    *dbQuartos = (StDbQuartos *)malloc(sizeof(StDbQuartos));

    if(!dbQuartos)
    {
        printf("Erro ao alocar memoria");
        exit(1);
    }

    (*numQuartos)++;
    printf("[espaco] adicionado com sucesso!... \n");
    return;
  }

  *dbQuartos = (StDbQuartos *)realloc(*dbQuartos, (*numQuartos + 1) * sizeof(StDbQuartos));

    if(!dbQuartos)
    {
        printf("Erro ao alocar memoria");
        exit(1);
    }

  (*numQuartos)++;

  printf("[espaco] adicionado com sucesso!... \n");
}

#endif // ADICIONARQUARTO