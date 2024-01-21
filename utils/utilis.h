#if !defined(UTILS)
#define UTILS

#include "systemComand/systemComand.h"
#include "./systemComand/_clear_buffer.h"
#include "./systemComand/_clear_tela.h"
#include "./systemComand/_system_pause.h"

#include "./inputsBasic/inputsBasic.h"
#include "./inputsBasic/_input_NumeroInt.h"
#include "./inputsBasic/_input_NumeroDouble.h"
#include "./inputsBasic/_input_confirmacao.h"


struct stUtils
{
  stSystemComand SystemComand;
  stInputsBasic InputsBasic;

} Utils = {
  { 
    (void(*)(const char *))systemPause,
    (void(*)())clearTela,
    (void(*)())limparBuffer
  },
  {
    (void (*)()) getConfirmacao,
    (void (*)(int *, const char *)) getNumeroInt,
    (void (*)(double *, const char *)) getNumeroDouble,
  }
};

#endif // UTILS
