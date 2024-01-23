#if !defined(QUARTO)
#define QUARTO

#include "../../db/model.h"
#include "./AdicionarQuarto/adicionarQuarto.h"
#include "./exibirQuarto/exibirQuarto.h"
#include "./editarQuarto/editarQuarto.h"
#include "./removerQuarto/removerQuarto.h"

struct stQuarto
{
  void (*adicionarQuarto)(stDbQuartos **dbQuartos, int *numQuartos);
  void (*editarQuarto)(stDbQuartos *dbQuartos, int numQuartos);
  void (*removerQuarto)(stDbQuartos **dbQuartos, int *numQuartos);
  stExibirQuarto ExibirQuarto;

} Quarto = {
    (void (*)(stDbQuartos **, int *)) adicionarQuarto,
    (void (*)(stDbQuartos *, int )) editarQuarto,
    (void (*)(stDbQuartos **, int *)) removerQuarto,
    {
      (void (*)(stDbQuartos *, int )) exibirQuartoAll,
      (void (*)(stDbQuartos *, int )) exibirQuartoId,
      (void (*)(stDbQuartos *, int )) exibirQuartoStatus,
      (void (*)(stDbQuartos *, int )) exibirQuartoTipo,
    },
};

#endif // QUARTO
