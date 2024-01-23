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
      if (!getConfirmacao())
        continue;
      *numero = temp;
      return;
    }
    else
    {
      printf("\nEntrada invalida. Por favor, insira um valor Valido!!\n");
      getNumeroInt(numero, msg);
    }
  }
}

#endif // _OBTERNUMEROINT
