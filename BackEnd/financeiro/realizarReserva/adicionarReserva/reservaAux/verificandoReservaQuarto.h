#if !defined(VERIFICANDORESERVAQUARTO)
#define VERIFICANDORESERVAQUARTO

int verificarReservaQuarto(StDbQuartos *quarto, int qtdQuarto)
{
  while (1)
  {
    Utils.SystemComand.clearTela();


    printf("Escolha um quarto Disponivel:\n\n");
    for (int x = 0; x < qtdQuarto; x++)
    {
      exibirOnlyQuarto(quarto, x);
    }

    int idQuarto;
    Quarto.geyQuartoId(quarto, qtdQuarto, &idQuarto);
    if (idQuarto == -1)
      return idQuarto;

    return idQuarto;
  }
}

#endif // VERIFICANDORESERVAQUARTO
