#if !defined(MENUCLIENTE)
#define MENUCLIENTE

#include <stdio.h>

#include "../../db/model.h"
#include "../../BackEnd/Cliente/Cliente.h"

#include "../../Utils/utilis.h"

#include "./frontEndExibicaoCliente.h"

void frontEndCliente(StDbClientes **dbClientes, int *qtdClientes)
{
  printf("Menu Cliente!\n");
  printf("1 - Cadastrar Cliente\n");
  printf("2 - Listar Clientes\n");
  printf("3 - Editar Cliente\n");
  printf("4 - Excluir Cliente\n");
  printf("0 - Voltar\n");

  int opc;
  Utils.InputsBasic.getNumeroInt(&opc, "Digite a opção: ");

  switch (opc)
  {
    case 0:
      return;
      break;
    case 1:
      Cliente.adicionarCliente(dbClientes, qtdClientes);
      break;
    case 2:
      frontEndExibicaoCliente(*dbClientes, *qtdClientes);
      break;
    case 3:
      Cliente.editarCliente(*dbClientes, *qtdClientes);
      break;
    case 4:
      Cliente.removerCliente(dbClientes, qtdClientes);
      break;
    default:
      printf("Alternativa invalida\n");
      break;
  }
  frontEndCliente(dbClientes, qtdClientes);
}

#endif // MENUCLIENTE
