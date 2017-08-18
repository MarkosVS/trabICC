#ifndef JMV_H_INCLUDED
#define JMV_H_INCLUDED
#endif // JMV_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define MAX 100


/* *****************************
Biblioteca para realizar operações com vetores e matrizes em C.
Criada por:
Antônio Victor Figueiredo Porto - 1368132
Jéssica Xavier de Sousa - 1381204
Marcos Vinicius dos Santos Sombra - 1381061
Alunos do curso de Bacharelado em Ciência da Computação da Universidade Estadual do Ceará.
Disciplina: Introdução à Ciência da Computação - Semestre: 2016.1
-------------------------------------------------------------------------------------------------------
Library to do operations using Arrays and Matrices in C.
Created by: Antônio Victor Figueiredo Porto, Jéssica Xavier de Sousa and Marcos Vinicius dos Santos Sombra,
students of Computer Science at Ceará State University.
Class: Computer Science 101
***************************** */


//Declaração das Structs
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



//nenhuma dessas funções retorna algum valor
//i.e, todas as funções são void



//Funções com Vetores
//Functions with Arrays


//Função para leitura de Vetor
//Function to read an Array
void readArray(vetor *v);

//Função para somar dois Vetores
//Function to sum two Arrays
void sumArray(vetor v1, vetor v2);

//Função para realizar o Produto de um Escalar por um Vetor
//Function to multiply an Array and a Scalar
void productArray(vetor v1, double esc);

//Função para realizar o Produto Escalar entre dois Vetores
//Function to do the Scalar Product between two Arrays
void scalarProductArray(vetor v1, vetor v2);



//Funções com Matrizes
//Functions with Matrices

//Função para criar e ler Matrizes
//Function to build and read Matrices
void buildMatrix(matriz *m);

//Função para imprimir Matrizes
//Function to print Matrices
void printMatrix(matriz m);

//Função para somar Matrizes
//Function to sum Matrices
void sumMatrix(matriz m1, matriz m2);

//Função para multiplicar Matrizes
//Function to multiply Matrices
void multiplyMatrix(matriz m1, matriz m2);

//Função para calcular determinante
//Function to calculate determinant

void determinante(matriz m);

//Função para calcular transposta
//Function to calculate transpose

void transpose(matriz m, matriz *t);


//Função para verificar se a matriz é simétrica
//Function to verify if the matrix is symmetric
void symmetricMatrix(matriz m, matriz t);
