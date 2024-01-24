#if !defined(_GETCONFIRMACAO)
#define _GETCONFIRMACAO

#include <stdio.h>
#include "../systemComand/_clear_buffer.h"

int getConfirmacao(const char* msg)
{
  char temp;
  while (1)
  {
    printf("%s", msg);
    limparBuffer();
    if (scanf("%c", &temp) == 1)
    {
      limparBuffer();
      if (temp != 'S' && temp != 's' && temp != 'N' && temp != 'n')
      {
        printf("\nEntrada invalida. Por favor, insira Somente [S] ou [N]!! \n");
        continue;
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
  }
}

#endif // _GETCONFIRMACAO
