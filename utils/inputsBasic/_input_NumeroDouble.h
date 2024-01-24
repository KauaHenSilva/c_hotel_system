#if !defined(_OBTERNUMERODOUBLE)
#define _OBTERNUMERODOUBLE

#include <stdio.h>
#include "../systemComand/_clear_buffer.h"
#include "_input_confirmacao.h"

void getNumeroDouble(double *numero, const char *msg)
{
  double temp;
  while (1)
  {
    printf("\n%s", msg);
    limparBuffer();
    if (scanf("%lf", &temp) == 1)
    {
      limparBuffer();
      printf("Voce digitou %.2lf\n", temp);
      if (!getConfirmacao("Voce confirma a entrada? [S]im ou [N]ao: "))
        continue;
      *numero = temp;
      return;
    }
    else
    {
      limparBuffer();
      printf("\nEntrada invalida. Por favor, insira um numero maior que 0!!\n");
    }
  }
}

#endif // _OBTERNUMERODOUBLE
