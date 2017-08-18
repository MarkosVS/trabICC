#include "jmv.h"
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


//Funções com Vetores
//Functions with Arrays


//Função para leitura de Vetor
//Function to read an Array
void readArray(vetor *v){
	//variavel de controle do for
	int i;
	//imprime uma mensagem na tela
	printf("\nDigite o numero de elementos do Vetor: ");
	//lê a qtd de elementos do vetor
	scanf("%d", &v->n);
	//inicio do for
    for(i=0; i<v->n; i++){
    	//pede pro usuário digitar o valor
        printf("\nDigite o valor de v[%d]: ", i+1);
        //lê o valor do elemento do vetor
        scanf("%lf", &v->vetim[i]);
    }
}

//Função para somar dois Vetores
//Function to sum two Arrays
void sumArray(vetor v1, vetor v2){
	//variavel de controle do for
	int i;
	//cria um vetor soma
	double soma[v1.n];
	//inicio do for
	for(i = 0; i<v1.n; i++)
		//calcula a soma e armazena no vetor
		soma[i] = v1.vetim[i] + v2.vetim[i];
	//imprime uma mensagem antes do inicio do vetor
	printf("\nVetor resultante: ");
	//inicio do for para imprimir
	for(i = 0; i<v1.n; i++)
		//imprime o vetor soma
		printf("%.1lf ", soma[i]);
    printf("\n");
}

//Função para realizar o Produto de um Escalar por um Vetor
//Function to multiply an Array and a Scalar
void productArray(vetor v1, double esc){
   //variavel de controle do for
	int i;
	//cria um vetor pra produto
   double prod[v1.n];
   //inicio do for
   for(i=0;i<v1.n;i++)
   	//calcula o produto e armazena no vetor
      prod[i] = v1.vetim[i] * esc;
   //imprime uma mensagem antes do inicio do vetor
   printf("\nVetor resultante: ");
   //inicio do for para imprimir
	for(i = 0; i<v1.n; i++)
		//imprime o vetor produto
		printf("%.1lf ", prod[i]);
    printf("\n");
}

//Função para realizar o Produto Escalar entre dois Vetores
//Function to do the Scalar Product between two Arrays
void scalarProductArray(vetor v1, vetor v2){
	//variavel de controle do for
	int i;
	//cria um vetor pra produto
	double prodVet[v1.n];
	//cria uma variavel para armazenar a soma dos produtos
	double soma=0;
	//inicio do for
	for(i = 0; i<v1.n; i++){
		//realiza as multiplicações em cada indice do vetor
		prodVet[i] = v1.vetim[i] * v2.vetim[i];
		//soma os produtos
		soma += prodVet[i];
	}
	//imprime o resultado
	printf("\nProduto entre os vetores: %.1lf\n", soma);
}



//Funções com Matrizes
//Functions with Matrices

//Função para criar e ler Matrizes
//Function to build and read Matrices
void buildMatrix(matriz *m){
	//pede pro usuário informar o numero de linhas da matriz
	printf("Digite o numero de linhas da Matriz: ");
	//lê o numero de linhas da matriz
	scanf("%d", &m->lin);
	//pede pro usuario informar o numero de colunas da matriz
	printf("\nDigite o numero de colunas da Matriz: ");
	//lê o número de colunas da matriz
	scanf("%d", &m->col);
	//variaveis de controles do for
	int i, j;
	//inicio do for i
	for(i = 0; i<m->lin; i++){
		//inicio do for j
		for(j = 0; j<m->col; j++){
			//pede pro usuario digitar o elemento [i][j] da matriz
        	printf("\nDigite o valor do elemento [%d][%d]: ", i+1, j+1);
        	// lê o elemento [i][j] da matriz
        	scanf("%lf", &m->mateos[i][j]);
		}
	}

}

//Função para imprimir Matrizes
//Function to print Matrices
void printMatrix(matriz m){
	//variaveis de controles do for
	int i,j;
   //printa uma linha de hifens
   printf("\n------------------------------------------------------\n");
	//inicio do for i
	for(i=0;i<m.lin;i++){
		//inicio do for j
      for(j=0;j<m.col;j++)
      	//printa o elemento [i][j] da matriz
      	printf("%.1lf  ", m.mateos[i][j]);
      //printa uma quebra de linha
      printf("\n");
    }
    //printa uma linha de hifens
    printf("------------------------------------------------------\n");
}

//Função para somar Matrizes
//Function to sum Matrices
void sumMatrix(matriz m1, matriz m2){
	//variaveis de controle do for
	int i,j;
	//cria uma matriz para a soma
	double soma[m1.lin][m1.col];
	//inicio do for i
	for(i=0;i<m1.lin;i++){
		//inicio do for j
		for(j=0;j<m1.col;j++)
			//armazena o valor da soma na matriz de soma
			soma[i][j]=m1.mateos[i][j]+m2.mateos[i][j];
	}
	//printa uma linha de hifens
	printf("\n------------------------------------------------------\n");
	//inicio do for i
	for(i=0;i<m1.lin;i++){
		//inicio do for j
   	for(j=0;j<m1.col;j++)
      	//printa o elemento [i][j] da matriz soma
      	printf("%.1lf  ", soma[i][j]);
      //printa uma quebra de linha
      printf("\n");
    }
}

//Função para multiplicar Matrizes
//Function to multiply Matrices
void multiplyMatrix(matriz m1, matriz m2){
    //variaveis de controle do for
    int i,j, k;
    //cria uma matriz para o produto
    double prod[m1.lin][m2.col];
    //inicio do for i
    for(i=0; i<m1.lin; i++){
    	//inicio do for j
    	for(j=0; j<m2.col; j++){
    		//inicializa o valor de [i][j] como 0
    		prod[i][j] = 0;
    		//inicio do for k
    		for(k = 0; k<m2.lin; k++)
    			//o elemento [i][j] da matriz produto recebe ele mesmo mais o produto das linhas pelas colunas
    			prod[i][j] +=  (m1.mateos[i][k] * m2.mateos[k][j]);
		}
	}
	//printa uma linha de hifens
	printf("\n------------------------------------------------------\n");
	//inicio do for i
	for(i=0;i<m1.lin;i++){
		//inicio do for j
   	for(j=0;j<m2.col;j++)
   		//imprime o elemento [i][j] da matriz produto
      	printf("%.1lf  ", prod[i][j]);
      //imprime uma quebra de linha
      printf("\n");
    }
}

//Função para calcular determinante
//Function to calculate determinant

void determinante(matriz m){
	//caso o numero de linhas e colunas seja 1, imprime o único elemento
	if(m.lin==1)
		printf("\nDeterminante da matriz [%d][%d]: %.1f", m.lin,m.col, m.mateos[0][0]);
	//caso o numero de linhas e colunas seja 2, imprime o determinante
	else if(m.lin==2)
		printf("\nDeterminante da matriz [%d][%d]: %.1f", m.lin,m.col, m.mateos[0][0]*m.mateos[1][1]-(m.mateos[0][1]*m.mateos[1][0]));
	//caso o numero de linhas e colunas seja 3, imprime o determinante
	else if(m.lin==3){
		double determinante;
		determinante=(m.mateos[2][0]*m.mateos[0][1]*m.mateos[1][2]+m.mateos[0][0]*m.mateos[1][1]*m.mateos[2][2]+m.mateos[1][0]*m.mateos[2][1]*m.mateos[0][2]-m.mateos[2][2]*m.mateos[0][1]*m.mateos[1][0]-m.mateos[0][2]*m.mateos[1][1]*m.mateos[2][0]-m.mateos[1][2]*m.mateos[2][1]*m.mateos[0][0]);
		printf("\nDeterminante da matriz [%d][%d]: %.1lf", m.lin, m.col,determinante);
	}else{
		printf("\nNao e possivel calcular o determinante da matriz\n");
	}
}

//Função para calcular transposta
//Function to calculate transpose

void transpose(matriz m, matriz *t){
	//variaveis de controle do for
	int i,j;
	//inicializa o numero de linhas e colunas da matriz transposta
	t->lin=m.col;
	t->col=m.lin;
	//inicio do for i
	for(i=0;i<m.col;i++){
		//inicio do for j
		for(j=0;j<m.lin;j++)
			//inicializa o elemento [i][j] da transposta como sendo igual ao elemento [j][i] da matriz original
			t->mateos[i][j]=m.mateos[j][i];
		}
	//printa uma linha de hifens
	printf("\n------------------------------------------------------\n");
	//inicio do for i
	for(i=0;i<m.col;i++){
		//inicio do for j
   	for(j=0;j<m.lin;j++)
      	//imprime o elemento [i][j] da transposta
      	printf("%.1lf  ", t->mateos[i][j]);
      //imprime uma quebra de linha
   	printf("\n");
    }
}


//Função para verificar se a matriz é simétrica
//Function to verify if the matrix is symmetric
void symmetricMatrix(matriz m, matriz t){
	//variaveis de controle do for e uma variavel auxiliar inicializa como 0
	int i, j, aux=0;
	//testa se a matriz é quadrada
	if(m.lin != m.col){
   	//caso não seja, a matriz não é simetrica
   	printf("\nMatriz nao e simetrica\n");
   }else{
   	//caso seja quadrada:
   	//inicio do for i
		for(i = 0; i<m.lin; i++){
			//inicio do for j
			for(j = 0; j<m.col; j++){
				//se o elemento [i][j] da matriz for igual ao elemento [i][j] da sua transposta
				if(m.mateos[i][j]==t.mateos[i][j])
      			//caso seja, soma 1 na variavel auxiliar
      			aux++;
			}
		}
		//testa se a variavel auxiliar é igual ao produto de linhas x colunas da matriz
		if(aux==(m.lin*m.lin)){
			//imprime que é simétrica
			printf("\nA Matriz e simetrica\n");
		}else{
			//imprime que não é simétrica
			printf("\nA Matriz nao e simetrica\n");
		}
	}
}

