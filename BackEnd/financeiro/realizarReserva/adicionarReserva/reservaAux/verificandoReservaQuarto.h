#if !defined(VERIFICANDORESERVAQUARTO)
#define VERIFICANDORESERVAQUARTO

int verificarReservaQuarto(StDbQuartos *quarto, StDbControle *controle)
{
  while (1)
  {
    Utils.SystemComand.clearTela();


    printf("Escolha um quarto Disponivel:\n\n");
    for (int x = 0; x < *(controle->quantidadeDeQuarto); x++)
    {
      printf("Quarto [%d]:\n", x);
      exibirOnlyQuarto(quarto, x);
    }

    int idQuarto;
    Quarto.geyQuartoId(quarto, *(controle->quantidadeDeQuarto), &idQuarto);
    if (idQuarto == -1)
      return idQuarto;

    if (!quarto[idQuarto].statusQuarto == LIVRE)
    {
      printf("O Quarto nao esta Disponivel!");
      continue;
    }

    return idQuarto;
  }
}

#endif // VERIFICANDORESERVAQUARTO