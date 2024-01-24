#include "db/model.h"
#include "db/initDb.h" 

#include "db/Clientes/loadCliente.h"
#include "db/quartos/loadQuartos.h"

#include "frontEnd/frontEnd.h"
#include "./utils/utilis.h"

void exec();
int main()
{
  loadCliente(&dbClintes, &quantidadeDeCLientes, &idCliente);
  loadQuartos(&dbQuartos, &quantidadeDeQuarto, &idQuarto);
  exec();
  return 0;
}

void exec()
{
  Utils.SystemComand.clearTela();

  printf("Bem vindo ao sistema de gerenciamento de hotel!\n");
  printf("Escolha uma das opcoes abaixo:\n");
  printf("1 - Abrir menu Quarto\n");
  printf("2 - abrir menu Cliente\n");
  printf("0 - Sair\n");

  int opcao;
  Utils.InputsBasic.getNumeroInt(&opcao, "Digite o numero correspodente: ");

  switch (opcao)
  {
    case 0:
      return;
      break;
    case 1:
      FrontEnd.frontEndQuarto(&dbQuartos, &quantidadeDeQuarto, &idQuarto);
      break;
    case 2:
      FrontEnd.frontEndCliente(&dbClintes, &quantidadeDeCLientes, &idCliente);
      break;
  }
  exec();
}