#if !defined(_OBTERNUMERODOUBLE)
#define _OBTERNUMERODOUBLE

#include <stdio.h>
#include "./_clear_buffer.h"
#include "_get_confirmacaoChar.h"

void getNumeroDouble(double *numero, const char *msg)
{
  double temp;

  printf("\n%s", msg);
  if (scanf("%lf", &temp) != 1 || temp < 0)
  {
    printf("\nEntrada invalida. Por favor, insira um valor valido!!\n");
    limparBuffer();
    getNumeroDouble(numero, msg);
  }
  if (temp < 0)
  {
    printf("\nEntrada invalida. Por favor, insira um numero maior que 0!!\n");
    limparBuffer();
    getNumeroDouble(numero, msg);
  }

  limparBuffer();

  printf("Voce digitou %.2lf\n", temp);
  if (!getConfirmacao())
    getNumeroDouble(numero, msg);

  *numero = temp;
  limparBuffer();
}

#endif // _OBTERNUMERODOUBLE
