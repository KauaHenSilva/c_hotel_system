#if !defined(INPUTDATA)
#define INPUTDATA

#include "../inputsBasic/_input_NumeroInt.h"
#include "time.h"

void getData(struct tm *data, const char *msg)
{
  printf("%s\n", msg);

  getNumeroInt(&data->tm_year, "Digite o ano (AAAA): ");
  data->tm_year -= 1900;
  
  getNumeroInt(&data->tm_mon, "Digite o mes (1-12): ");
  data->tm_mon -= 1;

  getNumeroInt(&data->tm_mday, "Digite o dia (1-31): ");

  data->tm_hour = 0;
  data->tm_min = 0;
  data->tm_sec = 0;
}

#endif // INPUTDATA
