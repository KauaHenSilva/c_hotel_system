#if !defined(UTILS)
#define UTILS

#include "./systemComand/systemComand.h"
#include "./systemComand/_clear_buffer.h"
#include "./systemComand/_clear_tela.h"
#include "./systemComand/_system_pause.h"

#include "./inputsBasic/inputsBasic.h"
#include "./inputsBasic/_input_confirmacao.h"
#include "./inputsBasic/_input_NumeroDouble.h"
#include "./inputsBasic/_input_NumeroInt.h"
#include "./inputsBasic/_input_String.h"

#include "./inputsSv/inputsSv.h"
#include "./inputsSv/_input_Cpf.h"
#include "./inputsSv/_input_Rg.h"
#include "./inputsSv/_input_Telefone.h"
#include "./inputsSv/_input_Data.h"
#include "./inputsSv/_input_DataAtual.h"


struct stUtils
{
  stSystemComand SystemComand;
  stInputsBasic InputsBasic;
  stInputsSv InputsSavin;
} Utils = {
  { 
    (void(*)(const char *))systemPause,
    (void(*)())clearTela,
    (void(*)())limparBuffer,
  },
  {
    (int (*)(const char *)) getConfirmacao,
    (void (*)(int *, const char *)) getNumeroInt,
    (void (*)(double *, const char *)) getNumeroDouble,
    (void (*)(char *, const char *)) getString,
  },
  {
    (void (*)(char *, const char*)) getCpf,
    (void (*)(char *, const char*)) getRg,
    (void (*)(char *)) getTelefone,
    (void (*)(struct tm *, const char*)) getData,
    (void (*)(struct tm *)) getDataAtual,
  }
};


#endif // UTILS
