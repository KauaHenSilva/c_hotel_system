#if !defined(SYSTEMPAUSE)
#define SYSTEMPAUSE

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void systemPause(const char *msg){
  printf("\n%s", msg);
  getch();
  printf("\n");
}

#endif // SYSTEMPAUSE
