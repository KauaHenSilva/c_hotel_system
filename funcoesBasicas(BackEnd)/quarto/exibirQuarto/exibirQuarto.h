#if !defined(EXIBIRQUARTO)
#define EXIBIRQUARTO

#include "../../../db/model.h"
#include "./exibirQuartoAll.h"
#include "./exibirQuartoID.h"

typedef struct 
{
  void (*exibirAllQuarto)(stDbQuarto *dbQuartos, int numQuartos);
  void (*exibirIdQuarto)(stDbQuarto *dbQuartos, int numQuartos);

} stExibirQuarto;

#endif // QUARTO
