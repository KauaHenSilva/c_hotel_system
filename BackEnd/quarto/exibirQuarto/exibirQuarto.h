#if !defined(EXIBIRQUARTO)
#define EXIBIRQUARTO

#include "../../../db/model.h"
#include "./exibirQuartoAll.h"
#include "./exibirQuartoIDUser.h"
#include "./exibirQuartoStatus.h"
#include "./exibirQuartoTipo.h"

typedef struct 
{
  void (*exibirQuartoAll)(StDbQuartos *dbQuartos, int numQuartos);
  void (*exibirQuartoId)(StDbQuartos *dbQuartos, int numQuartos);
  void (*exibirQuartoStatus)(StDbQuartos *dbQuartos, int numQuartos);
  void (*exibirQuartoTipo)(StDbQuartos *dbQuartos, int numQuartos);
} StExibirQuarto;

#endif // QUARTO
