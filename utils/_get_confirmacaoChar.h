#if !defined(_GETCONFIRMACAO)
#define _GETCONFIRMACAO

#include <stdio.h>
#include "_clear_buffer.h"

int getConfirmacao()
{
  char temp;
  printf("Voce confirma? [S]im [N]ao: ");

  if (scanf("%c", &temp) != 1)
  {
    printf("\nEntrada invalida. Por favor, insira um caracter valido: \n");
    limparBuffer();
    getConfirmacao();
  }

  if(temp != 'S' && temp != 's' && temp != 'N' && temp != 'n'){
    printf("\nEntrada invalida. Por favor, insira Somente [S] ou [N]: \n");
    limparBuffer();
    getConfirmacao();
  }
  
  limparBuffer();
  printf("\n");

  if(temp == 'S' || temp == 's')
    return 1;

  return 0;
}

#endif // _GETCONFIRMACAO
