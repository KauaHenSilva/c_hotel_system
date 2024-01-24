#if !defined(_OBTERNUMEROINT)
#define _OBTERNUMEROINT

#include <stdio.h>
#include <ctype.h>
#include "../systemComand/_clear_buffer.h"

void getNumeroInt(int *numero, const char *msg)
{
  int temp;
  while (1)
  {
    printf("\n%s", msg);
    limparBuffer();
    if (scanf("%d", &temp) == 1)
    {
      limparBuffer();
      printf("Voce digitou %d\n", temp);
      if (!getConfirmacao("Voce confirma a entrada? [S]im ou [N]ao: "))
        continue;
      *numero = temp;
      return;
    }
    else
    {
      printf("\nEntrada invalida. Por favor, insira um valor Valido!!\n");
    }
  }
}

#endif // _OBTERNUMEROINT
