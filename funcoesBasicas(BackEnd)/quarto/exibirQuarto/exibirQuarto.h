#if !defined(EXIBIRQUARTO)
#define EXIBIRQUARTO

#include "../../../db/model.h"
#include "./exibirQuartoAll.h"
#include "./exibirQuartoIDUser.h"
#include "./exibirQuartoStatus.h"
#include "./exibirQuartoTipo.h"

typedef struct 
{
  void (*exibirQuartoAll)(stDbQuartos *dbQuartos, int numQuartos);
  void (*exibirQuartoId)(stDbQuartos *dbQuartos, int numQuartos);
  void (*exibirQuartoStatus)(stDbQuartos *dbQuartos, int numQuartos);
  void (*exibirQuartoTipo)(stDbQuartos *dbQuartos, int numQuartos);
} stExibirQuarto;

#endif // QUARTO
