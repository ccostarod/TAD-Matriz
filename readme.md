# TAD Matriz - Rodrigo Costa.

Trabalho de Implementação 01 - TAD Matriz.
Realizado no `Visual Studio Code`

O trabalho contem as seguintes funcionalidades:

1. `Matriz *createMatriz(int lin, int col)`: Esta função cria uma nova matriz com o número especificado de linhas e colunas. Retorna um ponteiro para a matriz criada se a alocação de memória for bem-sucedida, caso contrário, retorna NULL.

2. `int destroyMatriz(Matriz *m)`: Esta função destroi uma matriz previamente alocada, liberando a memória alocada para a matriz e seu vetor de elementos. Retorna TRUE (1) se a matriz foi destruída com sucesso e FALSE (0) se a matriz fornecida for NULL.

3. `int setElemMatriz(Matriz *m, int i, int j, int elemento)`: Esta função define o valor de um elemento em uma matriz na posição especificada (i, j). Retorna TRUE (1) se a operação for bem-sucedida e FALSE (0) se a matriz for NULL ou as coordenadas estiverem fora dos limites da matriz.

4. `int getElemMatriz(Matriz *m, int i, int j)`: Esta função obtém o valor de um elemento em uma matriz na posição especificada (i, j). Retorna o valor do elemento se a operação for bem-sucedida e FALSE (0) se a matriz for NULL ou as coordenadas estiverem fora dos limites da matriz.

5. `Matriz *multiplicarMat(Matriz *a, Matriz *b)`: Esta função multiplica duas matrizes `a` e `b` e retorna o resultado como uma nova matriz. Verifica se as dimensões das matrizes são compatíveis para multiplicação. Se a multiplicação for possível, retorna um ponteiro para a matriz resultante; caso contrário, retorna NULL.

6. `Matriz *matrizTransposta(Matriz *m)`: Esta função calcula a matriz transposta de uma matriz `m` e a retorna como uma nova matriz. A matriz transposta possui as linhas e colunas invertidas em relação à matriz original. Retorna a matriz transposta se a operação for bem-sucedida e NULL se a matriz original for inválida.

Essas funções permitem a criação, manipulação e operações básicas em matrizes representadas por meio da estrutura `Matriz`.


# Instruções para Executar o Programa "apl" no `PowerShell`

Este é um guia simples sobre como executar o programa "apl" no seu sistema. Certifique-se de que você tenha o arquivo executável "apl" disponível antes de seguir estas instruções.

## Passo 1: Acessar o PowerShell

Abra o PowerShell do seu computado. Você pode encontrar o terminal no menu de aplicativos ou usando o atalho de teclado apropriado, dependendo do sistema que você está usando.

## Passo 2: Navegar até o Diretório do Programa

Use o comando `cd` para navegar até o diretório onde o arquivo executável "apl" está localizado. Nesse caso, ele está na pasta output. Nesse caso, como o arquivo "apl" executavel está em um diretório chamado "output", você pode navegar até ele da seguinte maneira (substitua "caminho/meu_programa/output" pelo caminho real):

comando:
cd caminho/meu_programa/output

## Passo 3: Finalmente, execute o programa "apl" usando o comando ./apl. Certifique-se de incluir o caminho completo se estiver em um diretório diferente:

comando:
./apl