#if !defined(QUARTO)
#define QUARTO

#include "../../db/model.h"
#include "./AdicionarQuarto/adicionarQuarto.h"
#include "./exibirQuarto/exibirQuarto.h"
#include "./editarQuarto/editarQuarto.h"
#include "./removerQuarto/removerQuarto.h"

struct stQuarto
{
  void (*adicionarQuarto)(stDbQuarto **dbQuartos, int *numQuartos);
  void (*editarQuarto)(stDbQuarto *dbQuartos, int numQuartos);
  void (*removerQuarto)(stDbQuarto **dbQuartos, int *numQuartos);
  stExibirQuarto ExibirQuarto;

} Quarto = {
    (void (*)(stDbQuarto **, int *)) adicionarQuarto,
    (void (*)(stDbQuarto *, int )) editarQuarto,
    (void (*)(stDbQuarto **, int *)) removerQuarto,
    {
      (void (*)(stDbQuarto *, int )) exibirQuartoAll,
      (void (*)(stDbQuarto *, int )) exibirQuartoId,
      (void (*)(stDbQuarto *, int )) exibirQuartoStatus,
      (void (*)(stDbQuarto *, int )) exibirQuartoTipo,
    },
};

#endif // QUARTO
