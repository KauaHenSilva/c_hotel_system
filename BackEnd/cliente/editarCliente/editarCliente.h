#ifndef EDITARCLINTE
#define EDITARCLINTE

#include "../../../utils/utilis.h"
#include "../util/getClienteId.h"
#include "../AdicionarCliente/inputsOnly/_adicionar_CpfCliente.h"
#include "../AdicionarCliente/inputsOnly/_adicionar_EmailCliente.h"
#include "../AdicionarCliente/inputsOnly/_adicionar_enderecoCliente.h"
#include "../AdicionarCliente/inputsOnly/_adicionar_NomeCliente.h"
#include "../AdicionarCliente/inputsOnly/_adicionar_RgCliente.h"
#include "../AdicionarCliente/inputsOnly/_adicionar_TelefoneCliente.h"

void editarCliente(StDbClientes *dbCliente, int numQuartos)
{
  Utils.SystemComand.clearTela();

  int opcao;
  printf("O que deseja editar?\n");  
  printf("1 - Cpf do CLiente\n");
  printf("2 - email do CLiente\n");
  printf("3 - endereco do CLiente\n");
  printf("4 - nome do CLiente\n");
  printf("5 - rg do CLiente\n");
  printf("6 - telefone do CLiente\n");
  printf("0 - Sair do modo edicao\n");

  Utils.InputsBasic.getNumeroInt(&opcao, "Selecione uma opcao: ");
  if (opcao == 0) return;

  exibirOnlyCliente(dbCliente, numQuartos);

  int id;
  getClienteId(dbCliente, numQuartos, &id);
  if(id == -1) return;

  switch (opcao)
  {
    case 1:
      adicionarCpfCliente(dbCliente, id);
      editarCliente(dbCliente, numQuartos);
      break;
    case 2:
      adicionarEmailCliente(dbCliente, id);
      editarCliente(dbCliente, numQuartos);
      break;
    case 3:
      adicionarEnderecoCliente(dbCliente, id);
      editarCliente(dbCliente, numQuartos);
      break;
    case 4:
      adicionarNomeCliente(dbCliente, id);
      editarCliente(dbCliente, numQuartos);
      break;
    case 5:
      adicionarRgCliente(dbCliente, id);
      editarCliente(dbCliente, numQuartos);
      break;
    case 6:
      adicionarTelefoneCliente(dbCliente, id);
      editarCliente(dbCliente, numQuartos);
      break;
    default:
      printf("Opção inválida\n");
      editarCliente(dbCliente, numQuartos);
      break;
  }
}


#endif // EDITARCLINTE
