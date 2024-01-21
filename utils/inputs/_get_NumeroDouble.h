#if !defined(_OBTERNUMERODOUBLE)
#define _OBTERNUMERODOUBLE

#include <stdio.h>
#include "../systemComand/_clear_buffer.h"
#include "_get_confirmacao.h"

void getNumeroDouble(double *numero, const char *msg)
{
  double temp;

  printf("\n%s", msg);
  limparBuffer();
  if (scanf("%lf", &temp) == 1)
  {
    printf("Voce digitou %.2lf\n", temp);
    if (!getConfirmacao())
      getNumeroDouble(numero, msg);
    *numero = temp;
  }
  else
  {
    printf("\nEntrada invalida. Por favor, insira um numero maior que 0!!\n");
    getNumeroDouble(numero, msg);
  }
}

#endif // _OBTERNUMERODOUBLE
