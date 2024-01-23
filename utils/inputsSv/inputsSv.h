#if !defined(INPUTSSV)
#define INPUTSSV

#include "./_input_Cpf.h"
#include "./_input_Name.h"
#include "./_input_Rg.h"
#include "./_input_Telefone.h"

typedef struct {
  void (*getName)(char *name);
  void (*getCpf)(char *cpf);
  void (*getRg)(char *rg);
  void (*getTelefone)(char *telefone);

} stInputsSv;

#endif // INPUTSSV