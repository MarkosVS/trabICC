#ifndef JMV_H_INCLUDED
#define JMV_H_INCLUDED
#endif // JMV_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define MAX 100


/* *****************************
Biblioteca para realizar opera��es com vetores e matrizes em C.
Criada por:
Ant�nio Victor Figueiredo Porto - 1368132
J�ssica Xavier de Sousa - 1381204
Marcos Vinicius dos Santos Sombra - 1381061
Alunos do curso de Bacharelado em Ci�ncia da Computa��o da Universidade Estadual do Cear�.
Disciplina: Introdu��o � Ci�ncia da Computa��o - Semestre: 2016.1
-------------------------------------------------------------------------------------------------------
Library to do operations using Arrays and Matrices in C.
Created by: Ant�nio Victor Figueiredo Porto, J�ssica Xavier de Sousa and Marcos Vinicius dos Santos Sombra,
students of Computer Science at Cear� State University.
Class: Computer Science 101
***************************** */


//Declara��o das Structs
//Structs declaration

//struct vetor
typedef struct{
	int n;
	double vetim[MAX];
}vetor;

//struct matriz
typedef struct{
	int lin;
	int col;
	double mateos[MAX][MAX];
}matriz;



//nenhuma dessas fun��es retorna algum valor
//i.e, todas as fun��es s�o void



//Fun��es com Vetores
//Functions with Arrays


//Fun��o para leitura de Vetor
//Function to read an Array
void readArray(vetor *v);

//Fun��o para somar dois Vetores
//Function to sum two Arrays
void sumArray(vetor v1, vetor v2);

//Fun��o para realizar o Produto de um Escalar por um Vetor
//Function to multiply an Array and a Scalar
void productArray(vetor v1, double esc);

//Fun��o para realizar o Produto Escalar entre dois Vetores
//Function to do the Scalar Product between two Arrays
void scalarProductArray(vetor v1, vetor v2);



//Fun��es com Matrizes
//Functions with Matrices

//Fun��o para criar e ler Matrizes
//Function to build and read Matrices
void buildMatrix(matriz *m);

//Fun��o para imprimir Matrizes
//Function to print Matrices
void printMatrix(matriz m);

//Fun��o para somar Matrizes
//Function to sum Matrices
void sumMatrix(matriz m1, matriz m2);

//Fun��o para multiplicar Matrizes
//Function to multiply Matrices
void multiplyMatrix(matriz m1, matriz m2);

//Fun��o para calcular determinante
//Function to calculate determinant

void determinante(matriz m);

//Fun��o para calcular transposta
//Function to calculate transpose

void transpose(matriz m, matriz *t);


//Fun��o para verificar se a matriz � sim�trica
//Function to verify if the matrix is symmetric
void symmetricMatrix(matriz m, matriz t);
