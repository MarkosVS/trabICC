#include "jmv.h"
#include <stdio.h>
#include <stdlib.h>
int main(){
	vetor v1;
	vetor v2;
	matriz m1;
	matriz m2;
	matriz t1;
	matriz t2;
	char opc[5], opcv[5], opcm[5];
	int opcao = 0, opcaov = 0, opcaom = 0, num;
	double  esc;
	printf("\n------------------------------------------------------\n");
	printf("Bem-vindo a Biocalculator\n");
	do{
		printf("\n------------------------MENU--------------------------\n");
		printf("Escolha uma das opcoes:\n \n");
		printf("1. Operacoes com vetores \n");
        printf("2. Operacoes com matrizes \n");
        printf("3. Sair do programa \n");
        printf("------------------------------------------------------\n");
        scanf("%s", opc);
        opcao = atoi(opc);
        switch(opcao){
        	case 1:
        		do{
        			printf("\n------------------------VETORES-----------------------\n");
        			printf("Escolha uma das opcoes:\n \n" );
					printf("1. Ler dois vetores \n");
			        printf("2. Somar dois vetores \n");
			        printf("3. Multiplicar um dos vetores por um escalar \n");
			        printf("4. Produto escalar entre dois vetores \n");
			        printf("5. Voltar para o menu anterior \n");
					printf("------------------------------------------------------\n");
					scanf("%s", opcv);
        			opcaov = atoi(opcv);
        			switch(opcaov){
        				case 1:
        					readArray(&v1);
        					readArray(&v2);
        					break;
        				case 2:
        					if(v1.n != v2.n)
        						printf("\nERRO! Os vetores nao possuem a mesma dimensao\n");
        					else
        						sumArray(v1, v2);
        					break;
        				case 3:
                                printf("\nQual vetor voce deseja multiplicar: ");
                                scanf("%d", &num);
                                if( num != 1 && num != 2){
                                	printf("Digite uma opcao valida\n");
                                	break;
								}
                                printf("\nDigite o escalar: ");
                                scanf("%lf", &esc);
                                if(num == 1)
                                    productArray(v1, esc);
                                else if(num == 2)
                                	productArray(v2, esc);
        					break;
        				case 4:
        					if(v1.n != v2.n)
        						printf("ERRO! Os vetores nao possuem a mesma dimensao\n");
        					else
        						scalarProductArray(v1, v2);
        					break;
        				case 5:
        					printf("\nRetornando ao menu principal...\n");
        					break;
        				default:
        					printf("\nOpcao Invalida\n");
        					break;
					}
				}while(opcaov != 5);
        		break;
        	case 2:
        		do{
        			printf("\n----------------------MATRIZES------------------------\n");
        			printf("Escolha uma das opcoes:\n \n");
        			printf("1. Ler matrizes \n");
       				printf("2. Somar duas matrizes \n");
        			printf("3. Multiplicar duas matrizes \n");
        			printf("4. Calcular a transposta de uma matriz \n");
        			printf("5. Calcular o determinante de uma matriz \n");
        			printf("6. Verificar se uma matriz e simetrica \n");
        			printf("7. Voltar ao menu principal \n");
        			printf("------------------------------------------------------\n");
        			scanf("%s",opcm);
        			opcaom=atoi(opcm);
    				switch(opcaom){
    					case 1:
    						printf("\nDigite a Matriz 1:\n \n");
    						buildMatrix(&m1);
    						printf("\nDigite a Matriz 2:\n \n");
							buildMatrix(&m2);
							printf("\nMatriz 1:\n ");
    						printMatrix(m1);
    						printf("\nMatriz 2:\n ");
    						printMatrix(m2);
    						break;
    					case 2:
    						if(m1.lin != m2.lin || m1.col != m2.col)
        						printf("\nERRO! As matrizes nao possuem a mesma dimensao\n");
        					else
        						sumMatrix(m1, m2);
    						break;
    					case 3:
    						if(m2.lin != m1.col)
    							printf("\nERRO! Nao e possivel realizar a multiplicacao\n");
        					else
        						multiplyMatrix(m1, m2);
						    break;
    					case 4:
    						printf("\nDigite a matriz que deseja utilizar: ");
    						scanf("%d", &num);
    						if(num!=1 && num!=2){
    							printf("\nOpcao Invalida\n");
    							break;
							}else if(num==1)
								transpose(m1, &t1);
							else
    							transpose(m2, &t2);
    						break;
    					case 5:
    						printf("\nDigite a matriz que deseja utilizar: ");
    						scanf("%d", &num);
    						if(num!=1 && num!=2){
    							printf("\nOpcao Invalida\n");
    							break;
							}else if(num==1){
								if(m1.lin == m1.col)
									determinante(m1);
								else{
									printf("\nERRO! Nao e possivel calcular o determinante\n");
									break;
								}
							}else{
								if(m2.lin == m2.col)
									determinante(m2);
								else{
									printf("\nERRO! Nao e possivel calcular o determinante\n");
									break;
								}
							}
    						break;
    					case 6:
    						printf("\nQual matriz voce deseja saber se e simetrica: ");
                                scanf("%d", &num);
                                if( num != 1 && num != 2){
                                	printf("\nDigite uma opcao valida\n");
                                	break;
								}else if(num == 1){
                                    transpose(m1,&t1);
                                    symmetricMatrix(m1,t1);
                                }else{
                                    transpose(m2,&t2);
                                    symmetricMatrix(m2,t2);
                                }
                                		break;
                        		case 7:
        					printf("\nRetornando ao menu principal...\n");
                                		break;
                        		default:
        					printf("\nOpcao Invalida\n");
                                		break;
    			}
    		}while(opcaom !=7);
        		break;
        	case 3:
        		printf("\nPrograma Encerrado\n");
        		break;
        	default:
        		printf("\nOpcao Invalida\n");
        		break;
		}

	}while(opcao != 3);
}
