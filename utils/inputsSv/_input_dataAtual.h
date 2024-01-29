#if !defined(INPUTDATAATUAL)
#define INPUTDATAATUAL

#include "time.h"

void getDataAtual(struct tm *data)
{
  time_t currentTime = time(NULL);
  struct tm *localTime = localtime(&currentTime);

  // Obtém a data e hora atuais
  data->tm_year = localTime->tm_year;
  data->tm_mon = localTime->tm_mon;
  data->tm_mday = localTime->tm_mday;

  data->tm_hour = localTime->tm_hour;
  data->tm_min = localTime->tm_min;
  data->tm_sec = localTime->tm_sec;
}

#endif // INPUTDATAATUAL
