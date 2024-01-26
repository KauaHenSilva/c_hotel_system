#if !defined(MODEL)
#define MODEL

typedef enum  {SIMPLES, DUPLO, SUITE} EnTipoQuarto;
typedef enum  {LIVRE, OCUPADO, RESERVADO} EnStatusQuarto;

typedef struct  {
    int numero;
    EnTipoQuarto tipoQuarto;
    EnStatusQuarto statusQuarto;
    double valorDiaria;
} StDbQuartos ;

typedef struct  {
    int idCadrastro;
    char nome[100];
    char endereco[100];
    char email[100];
    char cpf[12];
    char telefone[15];
    char rg[15];  
} StDbClientes ;

#include <time.h>

typedef struct {
    struct tm DataInicial;
    struct tm DataFinal;
} Data;

typedef enum {PAGO, NAO_PAGO} EnStatusPagamento;


typedef struct  {
    int idReserva;
    int idQuarto;
    int idCliente;
    char nomeCliente[100];
    char cpfCliente[15];
    Data dataReserva;
    double valorPagar;
    EnStatusPagamento statusPagamento;
    EnStatusQuarto statusQuarto;
} StDbFluxoFinanceiro ;  

typedef struct {
    int *quantidadeDeQuarto;
    int *quantidadeDeCLientes;
    int *quantidadeDeReserva;
    int *idQuarto;
    int *idCliente;
    int *idReserva;
} StDbControle;


typedef struct {
  int idUser;
  int idQuarto;
  struct tm dataInicial;
  struct tm dataFinal;
} auxIdUserQuartoTime;

#endif // __MODELS
