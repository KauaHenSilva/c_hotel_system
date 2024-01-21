#if !defined(_GETCONFIRMACAO)
#define _GETCONFIRMACAO

#include <stdio.h>
#include "_clear_buffer.h"

int getConfirmacao()
{
  char temp;
  printf("Voce confirma? [S]im [N]ao: ");
  limparBuffer();
  if (scanf("%c", &temp) == 1)
  {
    if (temp != 'S' && temp != 's' && temp != 'N' && temp != 'n')
    {
      printf("\nEntrada invalida. Por favor, insira Somente [S] ou [N]!! \n");
    }
    else
    {
      printf("\n");
      if (temp == 'S' || temp == 's')
        return 1;
      if (temp == 'N' || temp == 'n')
        return 0;
    }
  }
  else 
  {
    printf("\nEntrada invalida. Por favor, insira Valores Aceitos! \n");
  }
  
  return getConfirmacao();
}

#endif // _GETCONFIRMACAO