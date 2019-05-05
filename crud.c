//CRUD em C
/*Descri��o do trabalho:
Crie um sistema de cadastro para a Uninove no qual seja poss�vel 
inserir, consultar, alterar e deletar (CRUD) alunos cadastrados. 
O usu�rio cadastra o aluno informando o ra, nome e curso. 
Na consulta o usu�rio deve ter a possibilidade de consultar 
todos ou pesquisa por um alunos espec�fico. 
Para modificar ou deletar o usu�rio deve apenas informar o RA.

OBS: O dados devem ser salvos em uma lista encadeada, 
utilizando registros(structs) e aloca��o din�mica.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//struct aluno com os atributos
typedef struct Aluno{
	//atributos
	char nome[20], curso;
	int ra;
}t_aluno;

//declara��o dos m�todos
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

//m�todos 
void inserir(void){
	system("cls");
	
	//apagar os prints e escrever o m�todo
	printf("Inserindo elementos\n");
	printf("testando menu");
	//apagar os prints e escrever o m�todo
}

void consultar(void){
	system("cls");
	
	//apagar os prints e escrever o m�todo
	printf("consultando elementos\n");
	printf("testando menu");
	//apagar os prints e escrever o m�todo
}

void alterar(void){
	system("cls");
	
	//apagar os prints e escrever o m�todo
	printf("alterando elementos\n");
	printf("testando menu");
	//apagar os prints e escrever o m�todo
}

void deletar(void){
	system("cls");
	
	//apagar os prints e escrever o m�todo
	printf("deletando elementos\n");
	printf("testando menu");
	//apagar os prints e escrever o m�todo
}

