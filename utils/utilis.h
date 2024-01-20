#if !defined(UTILS)
#define UTILS

#include "_obterNumero.h"

/**
 * @brief Função responsável por utilidades ao sistema.
 *
 * Esta função recebe as informações necessárias para adicionar uma Variavel
 * int.
 *
 */
struct stUtils
{
  /**
 * @brief strict responsável por adicionar um valor inteiro ao sistema.
 *
 * Esta struct realiza as validações necessárias e adiciona o valor int.
 * 
 * @param *int esse valor vai ser o valor a ser adicionado.
 */
  void (*obterNumero)(int *numero);
  void (*get_idQuarto)(int *numero);

} Utils = {
    (void (*)(int *)) obterNumero,
    (void (*)(stDbQuarto *, int, int *)) get_idQuarto,
};

#endif // MACRO
