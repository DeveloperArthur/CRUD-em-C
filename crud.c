//CRUD em C
/*Descrição do trabalho:
Crie um sistema de cadastro para a Uninove no qual seja possível 
inserir, consultar, alterar e deletar (CRUD) alunos cadastrados. 
O usuário cadastra o aluno informando o ra, nome e curso. 
Na consulta o usuário deve ter a possibilidade de consultar 
todos ou pesquisa por um alunos específico. 
Para modificar ou deletar o usuário deve apenas informar o RA.

OBS: O dados devem ser salvos em uma lista encadeada, 
utilizando registros(structs) e alocação dinâmica.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//struct aluno com os atributos
typedef struct Aluno{
	//atributos
	char nome[20], curso;
	int ra;
}t_aluno;

//declaração dos métodos
void inserir(void);
void consultar(void);
void alterar(void);
void deletar(void);

int main(){
	//variaveis locais
	int op;
	
	//menu
	printf("Menu principal\n\n");
	printf("1 - Inserir\n");
	printf("2 - Consultar\n");
	printf("3 - Alterar\n");
	printf("4 - Inserir\n");
	printf("5 - Sair\n");
	printf("\nOpcao> ");
	scanf("%i", &op);
	
	switch(op){
		case 1:
			inserir();
			break;
		case 2:
			consultar();
			break;
		case 3:
			alterar();
			break;
		case 4:
			deletar();
			break;
		case 5:
			printf("Fim do programa\n\n");
			system("pause");
			break;
		default:
			system("cls");
			printf("ERRO: OPCAO INVALIDA\n\n");
			//chama a funcao main novamente
			main();
	}
}

//métodos 
void inserir(void){
	system("cls");
	
	//apagar os prints e escrever o método
	printf("Inserindo elementos\n");
	printf("testando menu");
	//apagar os prints e escrever o método
}

void consultar(void){
	system("cls");
	
	//apagar os prints e escrever o método
	printf("consultando elementos\n");
	printf("testando menu");
	//apagar os prints e escrever o método
}

void alterar(void){
	system("cls");
	
	//apagar os prints e escrever o método
	printf("alterando elementos\n");
	printf("testando menu");
	//apagar os prints e escrever o método
}

void deletar(void){
	system("cls");
	
	//apagar os prints e escrever o método
	printf("deletando elementos\n");
	printf("testando menu");
	//apagar os prints e escrever o método
}

