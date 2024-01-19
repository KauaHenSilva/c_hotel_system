#if !defined(_OBTERNUMERO)
#define _OBTERNUMERO

#include <stdio.h>

void obterNumero(int *numero)
{
  int temp;
  if(scanf("%d", &temp) != 1)
  {
    printf("Entrada inválida. Por favor, insira um número válido: ");
    obterNumero(numero);
  }
  *numero = temp;
}

#endif // _OBTERNUMERO
