#if !defined(UTILS)
#define UTILS

#include "systemComand/systemComand.h"
#include "./systemComand/_clear_buffer.h"
#include "./systemComand/_clear_tela.h"
#include "./systemComand/_system_pause.h"

#include "./inputs/inputs.h"
#include "./inputs/_get_NumeroInt.h"
#include "./inputs/_get_NumeroDouble.h"
#include "./inputs/_get_IdQuarto.h"
#include "./inputs/_get_confirmacao.h"

#include "./exibirSystem/exibirSystem.h"

struct stUtils
{
  stSystemComand SystemComand;
  stInputs Inputs;
  stExibir ExibirSystem;

} Utils = {
  { 
    (void(*)(const char *))systemPause,
    (void(*)())clearTela,
    (void(*)())limparBuffer
  },
  {
    (void (*)()) getConfirmacao,
    (void (*)(stDbQuarto *, int, int *)) getQuartoId,
    (void (*)(int *, const char *)) getNumeroInt,
    (void (*)(double *, const char *)) getNumeroDouble,
  },
  {
    (void (*)(stDbQuarto *, int)) exibirQuartoIdSystem,
  }

};

#endif // UTILS
