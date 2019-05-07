//CRUD em C usando struct, ponteiro e alocação dinamica
/*Descrição do trabalho:
Crie um sistema de cadastro para a Uninove no qual seja possível 
inserir, consultar, alterar e deletar (CRUD) alunos cadastrados. 
O usuário cadastra o aluno informando o ra, nome e curso. 
Na consulta o usuário deve ter a possibilidade de consultar 
todos ou pesquisa por um alunos específico. 
Para alterar ou deletar o usuário deve apenas informar o RA.

OBS: O dados devem ser salvos em uma lista encadeada, 
utilizando registros(structs) e alocação dinâmica.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//struct aluno com os atributos
typedef struct Aluno{
	//atributos
	struct Aluno *anterior;
	char nome[20], curso[50];
	int ra;
}t_aluno;

//declaração dos métodos
void inserir(void);
void consultar(void);
void alterar(void);
void deletar(void);

//variaveis globais do tipo struct aluno
t_aluno *p = NULL;
t_aluno *anterior = NULL;

int main(){
	//loop infinito
	for(;;){
		//variaveis locais
		int op;
		//menu
		printf("Menu principal\n\n");
		printf("1 - Inserir\n");
		printf("2 - Consultar\n");
		printf("3 - Alterar\n");
		printf("4 - Deletar\n");
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
				system("cls");
				printf("Fim do programa\n\n");
				break;
			default:
				system("cls");
				printf("ERRO: OPCAO INVALIDA\n\n");
				//chama a funcao main novamente
				return 0;
		}
	}//fim do loop infinito
}

//métodos 
void inserir(void){
	system("cls");
	//alocando memoria para a variavel que sera inserida
	p = (t_aluno *) malloc(sizeof(t_aluno));
	
	//ra, nome e curso
	printf("Digite seu RA: ");
	scanf("%d", &p->ra);
	printf("Digite seu nome: ");
	scanf("%s", &p->nome);
	printf("Digite seu curso: ");
	scanf("%s", &p->curso);
	
	//ligando as structs
	p->anterior = anterior;
	anterior = p;
	
	printf("\n\n\nAluno cadastrado com sucesso\n");
	system("pause");
	system("cls");
	//limpando a tela e voltando para o menu principal
	return;
}

void consultar(void){
	
}

void alterar(void){
	
}

void deletar(void){
	system("cls");
	//RA que o usuario quer deletar
	int n=0;
	printf("Digite o RA que deseja deletar: ");
	scanf("%i", &n);
	
	while(p->anterior!=NULL){
		if(p->ra == n){
			//deleta a struct da memoria
			free(p);
			printf("\n\n\nAluno deletado com sucesso\n");
			system("pause");
			system("cls");
			//limpando a tela e voltando para o menu principal
			return;
		}
		
		p = p->anterior;
	}
	
	//Se nao entrar no if significa que nao foi encontrado o RA
	printf("\n\n\nERRO 404: RA nao existe no sistema\n");
	system("pause");
	//limpando a tela e voltando para o menu principal
	system("cls");
	return;
}

