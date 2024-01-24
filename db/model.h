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

typedef enum {PAGO, NAO_PAGO} EnStatusPagamento;
typedef struct  {
    int idCadrastroUser;
    char dataDeEntradaUser[100];
    char dataDeSaidaUser[100];
    char reserva[100];
    int numeroDoQuarto;
    char cpfUser[15];
    double valorTotal;
    EnStatusPagamento statusPagamento;
} StDbFluxoFinanceiro ;  

typedef struct {
    int *quantidadeDeQuarto;
    int *quantidadeDeCLientes;
} StDbControle;

#endif // __MODELS
