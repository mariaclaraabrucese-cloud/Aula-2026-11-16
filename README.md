## Arquivos

1. `01_retangulos.c` — lê largura e altura de dois retângulos, calcula as áreas e compara os resultados.
2. `02_triangulos.c` — lê base e altura de dois triângulos, calcula as áreas e compara os resultados.
3. `03_vetores.c` — lê uma quantidade de números, armazena em um vetor e exibe os valores.
4. `04_analise_pessoas.c` — cadastra nomes, idades e alturas; calcula a média das alturas e o percentual de pessoas com menos de 16 anos.

## Como compilar

Com o compilador GCC, use um comando para cada arquivo:

```bash
gcc 01_retangulos.c -o retangulos
gcc 02_triangulos.c -o triangulos
gcc 03_vetores.c -o vetores
gcc 04_analise_pessoas.c -o analise_pessoas
```

Depois, execute o programa desejado. Em alguns sistemas, use `./retangulos`, `./triangulos`, `./vetores` ou `./analise_pessoas`.

## Observações

- Os programas perguntam ao usuário quantos números ou pessoas serão informados, quando necessário.
- Nos programas de vetores, o limite definido é de 100 elementos/pessoas.
- No cadastro, a altura deve ser digitada em metros, por exemplo: `1.65`.
- O percentual considera pessoas com idade estritamente menor que 16 anos.
