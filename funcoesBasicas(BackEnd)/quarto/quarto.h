#if !defined(QUARTO)
#define QUARTO

#include "../../db/model.h"
#include "./AdicionarQuarto/adicionarQuarto.h"
#include "./exibirQuarto/exibirQuarto.h"
#include "./editarQuarto/editarQuarto.h"


/*
  A estrutura Quarto contém funções para adicionar, remover e exibir Quartos.
*/
struct stQuarto
{
  /**
   * @brief Função responsável por adicionar um quarto ao sistema.
   *
   * Esta função recebe as informações necessárias para adicionar um quarto ao sistema,
   * como banco de dados dos quartos é a quantidade de quartos do sistema.
   * Ela realiza as validações necessárias e adiciona o quarto ao sistema.
   *
   * @param Obancodedados aonde possui os quartos.
   * @param Quantiade de quantos que o sistema possui.
   */
  void (*adicionarQuarto)(stDbQuarto **dbQuartos, int *numQuartos);
  void (*editarQuarto)(stDbQuarto *dbQuartos, int numQuartos);
  stExibirQuarto ExibirQuarto;

} Quarto = {
    (void (*)(stDbQuarto **, int *)) adicionarQuarto,
    (void (*)(stDbQuarto *, int )) editarQuarto,
    {
      (void (*)(stDbQuarto *, int )) exibirQuartoAll,
      (void (*)(stDbQuarto *, int )) exibirQuartoId,
    },
};

#endif // QUARTO
