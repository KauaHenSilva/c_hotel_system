#if !defined(INPUTRG)
#define INPUTRG

#include <stdbool.h>
#include <ctype.h>

void getRg(char *rg, const char *msg)
{
  char rgTemp[9];

  while (1)
  {
    printf("%s", msg);
    fflush(stdin);
    scanf("%[^\n]s", rgTemp);
    fflush(stdin);

    if (strlen(rgTemp) != 9)
    {
      printf("RG invalido\n");
      continue;
    }

    for (int i = 0; i < 9; i++)
    {
      if (!isdigit(rgTemp[i]))
      {
        printf("RG invalido\n");
        continue;
      }
    }

    printf("Voce digitou %s\n", rgTemp);
    if (!getConfirmacao())
      continue;

    strcpy(rg, rgTemp);
    return;
  }
}

#endif // INPUTRG
