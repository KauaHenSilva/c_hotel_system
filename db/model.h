#if !defined(MODEL)
#define MODEL

typedef enum  {SIMPLES, DUPLO, SUITE} EnTipoQuarto;
typedef enum  {LIVRE, OCUPADO, RESERVADO} EnStatusQuarto;

typedef struct  {
    int numero;
    EnTipoQuarto tipoQuarto;
    EnStatusQuarto statusQuarto;
    double valorDiaria; // valorDiaria = pegarValorQuarto(tipoQuarto);
} stDbQuarto ;

typedef struct  {
    int idCadrastro;
    char nome[50];
    char cpf[15];
    char rg[15];  
    char telefone[15];
    char endereco[50];
    char email[50];
} StDbClintes ;

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

#endif // __MODELS
