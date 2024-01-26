#if !defined(INPUTDATA)
#define INPUTDATA

#include "../inputsBasic/_input_NumeroInt.h"
#include "time.h"

void getData(struct tm *data, const char *msg)
{

  printf("%s\n", msg);

  while (1)
  {
    getNumeroInt(&data->tm_year, "Digite o ano [AAAA]: ");
    data->tm_year -= 1900;
    if (data->tm_year < 0)
    {
      printf("Ano invalido!\n");
      continue;
    }
    break;
  }

  while (1)
  {
    getNumeroInt(&data->tm_mon, "Digite o mes [1-12]: ");
    data->tm_mon -= 1;
    if (data->tm_mon < 0 || data->tm_mon > 11)
    {
      printf("mes Invalido\n");
      continue;
    }
    break;
  }

  while (1)
  {
    getNumeroInt(&data->tm_mday, "Digite o dia [1-31]: ");
    if (data->tm_mday < 1 || data->tm_mday > 31)
    {
      printf("Dia invalido\n");
      continue;
    }
    break;
  }

  data->tm_hour = 0;
  data->tm_min = 0;
  data->tm_sec = 0;
}

#endif // INPUTDATA
