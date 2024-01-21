#if !defined(SYSTEMCOMAND)
#define SYSTEMCOMAND

#include "./_system_pause.h"
#include "./_clear_tela.h"
#include "./_clear_buffer.h"

typedef struct{
  void (*systemPause)(const char *msg);
  void (*clearTela)();
  void (*limparBuffer)();
} stSystemComand;

#endif // SYSTEMCOMAND
