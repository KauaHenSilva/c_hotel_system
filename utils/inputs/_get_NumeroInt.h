#if !defined(_OBTERNUMEROINT)
#define _OBTERNUMEROINT

#include <stdio.h>
#include <ctype.h>
#include "../systemComand/_clear_buffer.h"

void getNumeroInt(int *numero, const char *msg)
{
  int temp;

  printf("\n%s", msg);
  limparBuffer();
  if (scanf("%d", &temp) == 1)
  {
    printf("Voce digitou %d\n", temp);
    if(!getConfirmacao())
      getNumeroInt(numero, msg);
    *numero = temp;
  }
  else
  {
    printf("\nEntrada invalida. Por favor, insira um valor Valido!!\n");
    getNumeroInt(numero, msg);
  }

}

#endif // _OBTERNUMEROINT
