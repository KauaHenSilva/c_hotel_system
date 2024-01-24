#if !defined(QUARTO)
#define QUARTO

#include "../../db/model.h"
#include "./AdicionarQuarto/adicionarQuarto.h"
#include "./exibirQuarto/exibirQuarto.h"
#include "./editarQuarto/editarQuarto.h"
#include "./removerQuarto/removerQuarto.h"

#include "./util/getQuartoId.h"

struct stQuarto
{
  void (*adicionarQuarto)(StDbQuartos **dbQuartos, int *numQuartos, int *idQuarto);
  void (*editarQuarto)(StDbQuartos *dbQuartos, int numQuartos);
  void (*removerQuarto)(StDbQuartos **dbQuartos, int *numQuartos);
  void (*geyQuartoId)(StDbQuartos *dbQuarto, int numQuartos, int *idQuarto);

  StExibirQuarto ExibirQuarto;

} Quarto = {
    (void (*)(StDbQuartos **, int *, int *)) adicionarQuarto,
    (void (*)(StDbQuartos *, int )) editarQuarto,
    (void (*)(StDbQuartos **, int *)) removerQuarto,
    (void (*)(StDbQuartos *, int , int *)) getQuartoId,
    {
      (void (*)(StDbQuartos *, int )) exibirQuartoAll,
      (void (*)(StDbQuartos *, int )) exibirQuartoId,
      (void (*)(StDbQuartos *, int )) exibirQuartoStatus,
      (void (*)(StDbQuartos *, int )) exibirQuartoTipo,
    },
};

#endif // QUARTO
