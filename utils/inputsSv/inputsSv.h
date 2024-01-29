#if !defined(INPUTSSV)
#define INPUTSSV

#include "./_input_Cpf.h"
#include "./_input_Rg.h"
#include "./_input_Telefone.h"
#include "./_input_Data.h"

typedef struct {
  void (*getCpf)(char *cpf, const char *msg);
  void (*getRg)(char *rg, const char *msg);
  void (*getTelefone)(char *telefone);
  void (*getData)(struct tm *data, const char *msg);
  void (*getDataAtual)(struct tm *data);
} stInputsSv;

#endif // INPUTSSV