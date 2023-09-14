/*
Aluno: Rodrigo Otávio Cantanhede Costa
matriz.h: Arquivo de especificação denominado "matriz.h".
Estrutura de Dados I - Professor Anselmo.
*/
#ifndef MATRIZ_H
#define MATRIZ_H

typedef struct matriz{
    int *vetor;
    int lin;
    int col;
} Matriz;

Matriz *createMatriz(int lin, int col);
int destroyMatriz(Matriz *m);
int setElemMatriz(Matriz *m, int i, int j, int elemento);
int getElemMatriz(Matriz *m, int i, int j);
Matriz *multiplicarMat(Matriz *a, Matriz *b);
Matriz *matrizTransposta(Matriz *m);

#endif
