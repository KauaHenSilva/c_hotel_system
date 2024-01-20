#if !defined(_OBTERNUMEROINT)
#define _OBTERNUMEROINT

#include <stdio.h>
#include <ctype.h>
#include "./_clear_buffer.h"

void getNumeroInt(int *numero, const char *msg)
{
  int temp;

  printf("\n%s", msg);
  if (scanf("%d", &temp) != 1)
  {
    printf("\nEntrada invalida. Por favor, insira um numero valido!!\n");
    limparBuffer();
    getNumeroInt(numero, msg);
  }
  if (temp < 0)
  {
    printf("\nEntrada invalida. Por favor, insira um numero maior que 0!!\n");
    limparBuffer();
    getNumeroInt(numero, msg);
  }
  
  limparBuffer();

  printf("Voce digitou %d\n", temp);
  if(!getConfirmacao())
    getNumeroInt(numero, msg);

  *numero = temp;
  limparBuffer();

}

#endif // _OBTERNUMEROINT
