#if !defined(INPUTCPF)
#define INPUTCPF

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool validarCPF(const char* cpf) {
  int i, j, digito1 = 0, digito2 = 0;
  int cpfNumerico[11];

  for (i = 0; i < 11; i++) {
    cpfNumerico[i] = cpf[i] - '0';
  }

  bool todosDigitosIguais = true;
  for (i = 1; i < 11; i++) {
    if (cpfNumerico[i] != cpfNumerico[0]) {
      todosDigitosIguais = false;
      break;
    }
  }

  if (todosDigitosIguais) {
    return false;
  }

  for (i = 0, j = 10; i < 9; i++, j--) {
    digito1 += cpfNumerico[i] * j;
  }

  digito1 = (digito1 % 11) < 2 ? 0 : 11 - (digito1 % 11);

  for (i = 0, j = 11; i < 10; i++, j--) {
    digito2 += cpfNumerico[i] * j;
  }
  
  digito2 = (digito2 % 11) < 2 ? 0 : 11 - (digito2 % 11);

  if (cpfNumerico[9] != digito1 || cpfNumerico[10] != digito2) {
    return false;
  }

  return true;
}

void removerCaracteresEspeciais(char* cpf) {
  char* posicao;
  
  while ((posicao = strchr(cpf, '.')) != NULL) {
    strcpy(posicao, posicao + 1);
  }
  
  while ((posicao = strchr(cpf, '-')) != NULL) {
    strcpy(posicao, posicao + 1);
  }
}

void getCpf(char *cpfUser, const char *msg) {
  char *cpf = malloc(15 * sizeof(char));

  printf("%s", msg);

  fflush(stdin);
  scanf("%s", cpf);
  fflush(stdin);

  removerCaracteresEspeciais(cpf);
  
  cpf = realloc(cpf, strlen(cpf) + 1);

  if(validarCPF(cpf))
    printf("CPF valido\n");
  else
  {
    printf("CPF invalido\n");
    getCpf(cpfUser, msg);
  }

  strcpy(cpfUser, cpf);
  free(cpf);
}


#endif // INPUTCPF


