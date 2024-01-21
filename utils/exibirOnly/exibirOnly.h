#if !defined(EXIBIRONLY)
#define EXIBIRONLY

#include "./_exibir_QuartoOnlyId.h"
#include "../../db/model.h"

typedef struct {
  void (*exibirOnlyIdQuarto)(stDbQuarto *quarto, int numQuartos);
} stExibir;

#endif // EXIBIRONLUY