#if !defined(INPUTRG)
#define INPUTRG

#include <stdbool.h>
#include <ctype.h>

void getRg(char *rg, const char *msg)
{
  char rgTemp[9];

  printf("%s:", msg);
  fflush(stdin);
  scanf("%[^\n]s", rgTemp);
  fflush(stdin);

  if (strlen(rgTemp) != 9)
  {
    printf("RG invalido\n");
    getRg(rg, msg);
  }

  for (int i = 0; i < 9; i++)
  {
    if (!isdigit(rgTemp[i]))
    {
      printf("RG invalido\n");
      getRg(rg, msg);
    }
  }

  strcpy(rg, rgTemp);
}


#endif // INPUTRG
