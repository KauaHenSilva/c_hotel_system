#if !defined(INPUTSSV)
#define INPUTSSV

#include "./_input_Cpf.h"
#include "./_input_Rg.h"
#include "./_input_Telefone.h"

typedef struct {
  void (*getCpf)(char *cpf, const char *msg);
  void (*getRg)(char *rg, const char *msg);
  void (*getTelefone)(char *telefone);
} stInputsSv;

#endif // INPUTSSV