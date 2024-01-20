#if !defined(UTILS)
#define UTILS

#include "_clear_buffer.h"
#include "_clear_tela.h"
#include "_get_ConfirmacaoChar.h"
#include "_get_NumeroInt.h"
#include "_get_IdQuarto.h"
#include "_get_NumeroDouble.h"
#include "_get_IdQuarto.h"

struct stUtils
{
  void (*clearBuffer)();
  void (*clearTela)();
  void (*getConfirmacaoChar)();
  void (*getQuartoId)(stDbQuarto *dbQuarto, int numQuartos, int *idQuarto);
  void (*getNumeroInt)(int *numero, const char *msg);
  void (*getNumeroDouble)(double *numero, const char *msg);

} Utils = {
  (void (*)()) limparBuffer,
  (void (*)()) clearTela,
  (void (*)) getConfirmacao,
  (void (*)(stDbQuarto *, int, int *)) getQuartoId,
  (void (*)(int *, const char *)) getNumeroInt,
  (void (*)(double *, const char *)) getNumeroDouble,
};

#endif // UTILS
