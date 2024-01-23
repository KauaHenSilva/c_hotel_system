#if !defined(INPUTRG)
#define INPUTRG

#include <stdbool.h>
#include <ctype.h>

void getRg(char *rg)
{
  char rgTemp[9];

  printf("Digite o RG [123456789]: ");
  scanf("%[^\n]s", rgTemp);
  fflush(stdin);

  if (strlen(rgTemp) != 9)
  {
    printf("RG invalido\n");
    getRg(rg);
  }

  for (int i = 0; i < 9; i++)
  {
    if (!isdigit(rgTemp[i]))
    {
      printf("RG invalido\n");
      getRg(rg);
    }
  }

  strcpy(rg, rgTemp);
}


#endif // INPUTRG
