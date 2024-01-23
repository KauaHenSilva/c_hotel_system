#if !defined(INPUTTELEFONE)
#define INPUTTELEFONE

#include <stdio.h>
#include <string.h>

void getTelefone(char *telefone)
{
  char telefoneTemp[11];
  printf("Digite o telefone [89981280128]: ");
  scanf("%s", telefoneTemp);

  if(strlen(telefoneTemp) != 11)
  {
    printf("Telefone inválido!\n");
    getTelefone(telefone);
  }

  strcpy(telefone, telefoneTemp);

}

#endif // INPUTTELEFONE
