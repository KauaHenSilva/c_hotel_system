#include "db/model.h"
#include "db/initDb.h" 

#include "frontEnd/frontEnd.h"
#include "./utils/utilis.h"

void exec();
int main()
{
  exec();
  return 0;
}

void exec()
{
  printf("Bem vindo ao sistema de gerenciamento de hotel!\n");
  printf("Escolha uma das opcoes abaixo:\n");
  printf("1 - Abrir menu Quarto\n");
  printf("2 - abrir menu Cliente\n");
  printf("0 - Sair\n");
  int opcao;
  Utils.InputsBasic.getNumeroInt(&opcao, "Selecione uma opcao: ");

  switch (opcao)
  {
    case 1:
      FrontEnd.frontEndQuarto(&dbQuartos, &quantidadeDeQuarto);
      break;
    case 2:
      FrontEnd.frontEndCliente(&dbClintes, &quantidadeDeQuarto);
      break;
  }
}