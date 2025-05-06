# Projeto Xadrez em C

Este projeto implementa a simulação de movimentos das peças de xadrez em C, utilizando diferentes estruturas de repetição.

## Peças Implementadas

- **Torre**: Move-se em linha reta horizontalmente ou verticalmente (5 casas para a direita)
- **Bispo**: Move-se na diagonal (5 casas na diagonal superior direita)
- **Rainha**: Move-se em todas as direções (8 casas para a esquerda)

## Requisitos

- Compilador GCC (MinGW64)
- Sistema Operacional: Windows

## Como Compilar

1. Certifique-se de ter o MinGW64 instalado
2. Abra o terminal na pasta do projeto
3. Execute o comando:
```bash
gcc xadrez.c -o xadrez
```

## Como Executar

Após a compilação, execute o programa com:
```bash
./xadrez
```

## Estrutura do Código

- `xadrez.c`: Contém a implementação dos movimentos das peças
  - Torre: Usa estrutura `for`
  - Bispo: Usa estrutura `while`
  - Rainha: Usa estrutura `do-while`

## Autor

Lucas Antunes Ribeiro 