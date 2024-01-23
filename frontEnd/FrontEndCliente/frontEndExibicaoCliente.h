#if !defined(FRONTENDEXIBICAOCLIENTE)
#define FRONTENDEXIBICAOCLIENTE



#include "../../db/model.h"

#include "../../BackEnd/cliente/Cliente.h"
#include "../../Utils/utilis.h"

void frontEndExibicaoCliente(StDbClientes *Clientes, int qtdCliente)
{
  Utils.SystemComand.clearTela();

  int opc;
  printf("Exibir de Cliente\n");
  printf("1 - Exibir todos os Clientes\n");
  printf("2 - Exibir Cliente por Cpf\n");
  printf("3 - Exibir Cliente por Id\n");
  printf("4 - Exibir Cliente por Nome\n");
  printf("0 - Voltar\n");


  Utils.InputsBasic.getNumeroInt(&opc, "Digite o numero correspodente: ");

  switch (opc)
  {
    case 0:
      return;
      break;
    case 1:
      Cliente.Exibir.exibirClienteAll(Clientes, qtdCliente);
      break;
    case 2:
      Cliente.Exibir.exibirClienteCpf(Clientes, qtdCliente);
      break;
    case 3:
      Cliente.Exibir.exibirClienteId(Clientes, qtdCliente);
      break;
    case 4:
      Cliente.Exibir.exibirClienteNome(Clientes, qtdCliente);
      break;
    default:
      printf("Alternativa invalida\n");
      frontEndExibicaoCliente(Clientes, qtdCliente);
  }
  
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
  frontEndExibicaoCliente(Clientes, qtdCliente);
}

#endif // MACRO