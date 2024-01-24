#if !defined(INPUTS)
#define INPUTS

#include "./_input_confirmacao.h"
#include "./_input_NumeroInt.h"
#include "./_input_NumeroDouble.h"

typedef struct {
  int (*getConfirmacao)(const char *msg);
  void (*getNumeroInt)(int *numero, const char *msg);
  void (*getNumeroDouble)(double *numero, const char *msg);
  void (*getString)(char *numero, const char *msg);
} stInputsBasic;

#endif // SYSTEMCOMAND