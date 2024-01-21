#if !defined(EXIBIRQUARTO)
#define EXIBIRQUARTO

#include "../../../db/model.h"
#include "./exibirQuartoAll.h"
#include "./exibirQuartoIDUser.h"
#include "./exibirQuartoStatus.h"
#include "./exibirQuartoTipo.h"

typedef struct 
{
  void (*exibirQuartoAll)(stDbQuarto *dbQuartos, int numQuartos);
  void (*exibirQuartoId)(stDbQuarto *dbQuartos, int numQuartos);
  void (*exibirQuartoStatus)(stDbQuarto *dbQuartos, int numQuartos);
  void (*exibirQuartoTipo)(stDbQuarto *dbQuartos, int numQuartos);
} stExibirQuarto;

#endif // QUARTO
