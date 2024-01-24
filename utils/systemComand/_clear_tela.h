#if !defined(CHEARTELA)
#define CHEARTELA

#include <windows.h>

int get_cmd_nrows()
{
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
  return (csbi.srWindow.Bottom - csbi.srWindow.Top + 1);
}
int get_cmd_ncols()
{
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
  return (csbi.srWindow.Right - csbi.srWindow.Left + 1);
}
void clearTela()
{
  int i, r, c;
  r = get_cmd_nrows();
  c = get_cmd_ncols();
  for (i = 0; i < r * c; i++)
  {
    printf(" ");
  }
}

#endif // CHEARTELA
