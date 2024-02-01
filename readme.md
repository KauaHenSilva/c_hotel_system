# Sistema de Gerenciamento de Hotel (Projeto Finalizado)

Este é um projeto desenvolvido como parte da 3ª avaliação da disciplina de Algoritmos e Programação II, ministrada pelo Professor Alan Rafael Ferreira dos Santos na Universidade Federal do Piauí - Campus Senador Helvídio Nunes de Barros, no curso de Bacharelado em Sistemas de Informação.

## Objetivo do Projeto

O objetivo deste projeto é criar um sistema de gerenciamento para um hotel de pequeno porte. O sistema deve ser implementado em linguagem C e atender aos requisitos essenciais estabelecidos, proporcionando o controle eficiente de reservas, clientes e pagamentos.

## Requisitos Essenciais

- Utilização de arquivos em formato ".txt" ou ".bin" para armazenar informações cruciais do hotel.
- Implementação de um arquivo para o cadastro de quartos disponíveis e ocupados, com detalhes como número do quarto, tipo (simples, duplo, suíte), status (livre, ocupado e reservado), e valor da diária para ambos os tipos.
- Implementação de um arquivo para o cadastro de clientes, armazenando informações como nome, CPF, RG, telefone, endereço e e-mail.
- Implementação de um terceiro arquivo para controlar o fluxo financeiro, registrando reservas, número do quarto, CPF do cliente, data e hora (entrada e saída), valor total da reserva e status do pagamento (pendente ou pago).
- Evitar operações entre os arquivos que possam produzir dados incorretos ou inconsistentes.


## Funções Básicas

### Controle de Quartos

- **Cadastrar quarto** (Feito)
- **Consultar quarto** (Feito)
- **Editar quarto** (Feito)
- **Excluir quarto** (Feito)

- **FrontEndQuarto** (Feito)
- **DbQuarto** (Feito) 

### Controle de Clientes

- **Cadastrar cliente** (Feito)
- **Consultar cliente** (Feito)
- **Editar cliente** (Feito)
- **Excluir cliente** (Feito)

- **FrontEndCliente** (Feito)
- **DbCliente** (Feito)


### Gestão Financeira

- **Realizar reserva** (Feito)
- **Excluir reserva** (Feito)
- **Realizar check-in** (Feito)
- **Realizar pagamento** (Feito)
- **Consultar reservas** (Feito)
- **Valores recebidos** (Feito)

- **FrontEndFinaça** (Feito)
- **DbFinanca** (Feito)

## Comportamento das Funções

- **Realizar reserva:** Permite a reserva de quartos, verificando disponibilidade e registrando dados como nome do cliente, número do quarto, datas, status de pagamento e valor total da reserva.
- **Consultar reserva:** Permite listar reservas de um determinado cliente por meio de um código de reserva ou pelo nome do cliente.
- **Excluir Reserva:** Permite a exclusão de uma reserva já realizada.
- **Realizar check-in:** Possibilita o cadastro de dados adicionais nos arquivos dos quartos e das reservas, alterando o status do quarto para ocupado e registrando data e hora de entrada do cliente.
- **Realizar pagamento:** Apresenta o valor a ser pago pelo cliente, atualizando o status do quarto e registrando o valor pago no arquivo de controle financeiro.
- **Valores recebidos:** Permite a consulta de todos os valores recebidos durante um intervalo de tempo definido pelo usuário.

