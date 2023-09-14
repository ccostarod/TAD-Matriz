/*
Aluno: Rodrigo Otávio Cantanhede Costa
matriz.h: Arquivo de implementação denominado "matriz.c".
Estrutura de Dados I - Professor Anselmo.
*/
#include "matriz.h"
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

Matriz *createMatriz(int lin, int col){
    if (lin > 0 && col > 0){
        Matriz *matrizNova = (Matriz*)malloc(sizeof(Matriz)); 
        if (matrizNova != NULL){
            matrizNova->lin = lin;
            matrizNova->col = col;
            matrizNova->vetor = (int *)malloc(sizeof(int)*lin*col);
            if (matrizNova->vetor != NULL){
                return matrizNova;
            }
            free(matrizNova);
        } 
    }
    return NULL;
}

int destroyMatriz(Matriz *m){
    if (m != NULL){
        //Para destruir basta utilizar o free, do ultimo a ser alocado até o primeiro, nesse caso, "vetor" foi alocado depois de de "m", por isso o free foi dado nele primeiro.
        free(m->vetor); 
        free(m);
        return TRUE;
    }
    return FALSE;
}

int setElemMatriz(Matriz *m, int i, int j, int elemento){
    if (m != NULL){
        if(i >= 0 && i < m->lin && j >= 0 && j < m->col){
            int indice = i*m->col + j;
            m->vetor[indice] = elemento;
            return TRUE;
        }
    }
    return FALSE;
}

int getElemMatriz(Matriz *m, int i, int j){
    if (m != NULL){
        if (i >= 0 && i < m->lin && j >= 0 && j < m->col){
            int indice = i*m->col + j;
            return m->vetor[indice];
        }
    }
    return FALSE;
}

Matriz *multiplicarMat(Matriz *a, Matriz *b){
    if (a != NULL && b != NULL){
        if(a->col == b->lin){
            Matriz *resultadoMulti = createMatriz(a->lin,b->col);
            for (int i = 0; i < a->lin; i++){
                for(int j = 0; j < b->col; j++){
                    int valor = 0;
                    for (int k = 0; k < a->col; k++) {
                        // Multiplicação dos elementos de a e b e soma ao valor acumulado
                        valor += a->vetor[i * a->col + k] * b->vetor[k * b->col + j];
                    }
                    // Armazena o valor calculado na matriz resultadoMulti
                    resultadoMulti->vetor[i * resultadoMulti->col + j] = valor;
                }
            }
            return resultadoMulti;
        }
    }
    return NULL;
}

Matriz *matrizTransposta(Matriz *m){
    if (m != NULL){
        if(m->lin > 0 && m->col > 0){
            Matriz *transposta = createMatriz(m->col, m->lin);
            for (int i = 0; i < m->lin; i++){
                for (int j = 0; j < m->col; j++){
                    transposta->vetor[j * transposta->col + i] = m->vetor[i * m->col + j];
                }
            }
            return transposta;
        }
    }
    return NULL;
}



