#if !defined(EXIBIRONLY)
#define EXIBIRONLY

#include "./_exibir_QuartoIdSystem.h"
#include "../../db/model.h"

typedef struct {
  void (*exibirQuartoIdSystem)(stDbQuarto *quarto, int numQuartos);
} stExibir;

#endif // EXIBIRONLUY