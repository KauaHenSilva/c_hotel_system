#if !defined(INPUTS)
#define INPUTS

#include "./_get_confirmacao.h"
#include "./_get_IdQuarto.h"
#include "./_get_NumeroInt.h"
#include "./_get_NumeroDouble.h"

typedef struct {
  void (*getConfirmacao)(const char *msg);
  void (*getQuartoId)(stDbQuarto *dbQuarto, int numQuartos, int *idQuarto);
  void (*getNumeroInt)(int *numero, const char *msg);
  void (*getNumeroDouble)(double *numero, const char *msg);
} stInputs;

#endif // SYSTEMCOMAND