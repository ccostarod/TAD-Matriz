/*
Aluno: Rodrigo Otávio Cantanhede Costa
matriz.h: Arquivo de programa denominado "apl.c".
Estrutura de Dados I - Professor Anselmo.
*/
#include "matriz.h"
#include <stdio.h>

void printMatriz(Matriz *m);

int main() {
    int opcao, lin, col, elemento;
    Matriz *matrizA = NULL, *matrizB = NULL, *MultiAB = NULL, *transpostaDeA = NULL, *transpostaDeB = NULL;
    do {
        printf("===== Menu =====\n");
        printf("1. Criar a matriz A\n");
        printf("2. Criar a matriz B\n");
        printf("3. Ler e inserir os dados da matriz A\n");
        printf("4. Ler e inserir os dados da matriz B\n");
        printf("5. Calcular a multiplicacao de A por B e imprimir o resultado\n");
        printf("6. Calcular a transposta de A e imprimir o resultado\n");
        printf("7. Calcular a transposta de B e imprimir o resultado\n");
        printf("8. Destruir a matriz A\n");
        printf("9. Destruir a matriz B\n");
        printf("10. Imprimir a matriz A\n");
        printf("11. Imprimir a matriz B\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (matrizA == NULL){
                    printf("Digite quantas linhas a matriz A deve ter: ");
                    scanf("%d", &lin);
                    printf("Digite quantas colunas a matriz A deve ter: ");
                    scanf("%d", &col);
                    matrizA = createMatriz(lin, col);
                    if (matrizA != NULL){
                        printf("A matriz A foi criada!\n");
                        break;
                    }
                    printf("A matriz A nao foi criada, informe valores de linhas e colunas validos!\n");
                    break;
                }
                printf("A matriz A ja foi inicializada! \n");
                break;
            case 2:
                if (matrizB == NULL){
                    printf("Digite quantas linhas a matriz B deve ter: ");
                    scanf("%d", &lin);
                    printf("Digite quantas colunas a matriz B deve ter: ");
                    scanf("%d", &col);
                    matrizB = createMatriz(lin, col);
                    if (matrizB != NULL){
                        printf("A matriz B foi criada!\n");
                        break;
                    }
                    printf("A matriz B nao foi criada, informe valores de linhas e colunas validos!\n");
                    break;
                }
                printf("A matriz B ja foi inicializada! \n");
                break;
            case 3:
                if (matrizA != NULL){
                    for (int i = 0; i < matrizA->lin; i++){
                        for (int j = 0; j < matrizA->col; j++){
                            printf("Digite o valor que deseja inserir em A[%d][%d]: ", i, j);
                            scanf("%d", &elemento);
                            setElemMatriz(matrizA, i, j, elemento);
                            
                        }
                    }
                    printf("Matriz A preenchida!\n");
                    break;
                }
                printf("A matriz A nao foi criada! Tente novamente apos cria-la\n");
                break;
            case 4:
                if (matrizB != NULL){
                    for (int i = 0; i < matrizB->lin; i++){
                        for (int j = 0; j < matrizB->col; j++){
                            printf("Digite o valor que deseja inserir em B[%d][%d]: ", i, j);
                            scanf("%d", &elemento);
                            setElemMatriz(matrizB, i, j, elemento);
                        }
                    }
                    printf("Matriz B preenchida!\n");
                    break;
                }
                
                printf("A matriz B nao foi criada! Tente novamente apos cria-la\n");
                
                break;
            case 5:
                MultiAB = multiplicarMat(matrizA, matrizB);
                if (MultiAB != NULL){
                    printf("O resultado da multiplicacao de A por B eh:\n");
                    printMatriz(MultiAB);
                    destroyMatriz(MultiAB);
                    break;
                }
                
                printf("Nao foi possivel fazer essa multiplicacao.\n");
                
                break;
            case 6:
                transpostaDeA = matrizTransposta(matrizA);
                if (transpostaDeA != NULL){
                    printMatriz(transpostaDeA);
                    destroyMatriz(transpostaDeA);
                    break;
                }
                printf("Erro na Transposta de A! Verifique se a matriz A foi criada ou preenchida\n");
                break;
            case 7:
                transpostaDeB = matrizTransposta(matrizB);
                if (transpostaDeB != NULL){
                    printMatriz(transpostaDeB);
                    destroyMatriz(transpostaDeB);
                    break;
                }
                printf("Erro na Transposta de B! Verifique se a matriz B foi criada ou preenchida\n");
                break;
            case 8:
                if (matrizA != NULL){
                    destroyMatriz(matrizA);
                    matrizA = NULL;
                    printf("Matriz A foi destruida!\n");
                    break;
                }
                printf("A matriz A nao havia sido criada ainda!\n");
                break;
            case 9:
                if (matrizB != NULL){
                    destroyMatriz(matrizB);
                    matrizB = NULL;
                    printf("Matriz B foi destruida!\n");
                    break;
                }
                printf("A matriz B nao havia sido criada ainda!\n");
                break;
            case 10:
                if (matrizA != NULL){
                    printMatriz(matrizA);
                    break;
                }
                printf("Nao foi possivel imprimir a matriz A!\n");
                break;
            case 11:
                if (matrizB != NULL){
                    printMatriz(matrizB);
                    break;
                }
                printf("Nao foi possivel imprimir a matriz B!\n");
                break;
            case 0:
                if (matrizA != NULL){
                    destroyMatriz(matrizA);
                }
                if (matrizB != NULL){
                    destroyMatriz(matrizB);
                }
                printf("Saindo do programa. Adeus!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    } 
    while (opcao != 0);

    return 0;
}

void printMatriz(Matriz *m){

    for (int i = 0; i < m->lin; i++)
    {
        for (int j = 0; j < m->col; j++)
        {
            printf("%d ", m->vetor[i*m->col + j]);
        }
        printf("\n");
    }
}