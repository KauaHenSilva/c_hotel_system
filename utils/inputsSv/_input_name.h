#if !defined(_INPUT_NOME)
#define _INPUT_NOME

#include <stdio.h>

void getName(char *nome)
{
  printf("Digite o nome: ");
  scanf("%[^\n]", nome);
  fflush(stdin);
}

#endif // _INPUT_NOME
