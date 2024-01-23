#if !defined(_INPUT_STRING)
#define _INPUT_STRING

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../systemComand/_clear_buffer.h"

void getString(char *string, const char *msg)
{
  char *stringTemp = (char *)malloc(sizeof(char) * 100) ;

  limparBuffer();
  printf("\n%s", msg);
  if (scanf("%[^\n]s", stringTemp) == 1)
  {
    limparBuffer();
    printf("Voce digitou %s\n", stringTemp);
    if(!getConfirmacao())
    {
      free(stringTemp);
      getString(string, msg);
    }
    strcpy(string, stringTemp);
  }
  else
  {
    limparBuffer();
    printf("\nEntrada invalida. Por favor, insira um valor Valido!!\n");
    free(stringTemp);
    limparBuffer();

    getString(string, msg);
  }


}



#endif // _INPUT_STRING
