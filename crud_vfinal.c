//CRUD em C usando struct, ponteiro e aloca��o dinamica
/*Descri��o do trabalho:
Crie um sistema de cadastro para a Uninove no qual seja poss�vel 
inserir, consultar, alterar e deletar (CRUD) alunos cadastrados. 
O usu�rio cadastra o aluno informando o ra, nome e curso. 
Na consulta o usu�rio deve ter a possibilidade de consultar 
todos ou pesquisa por um alunos espec�fico. 
Para alterar ou deletar o usu�rio deve apenas informar o RA.
OBS: O dados devem ser salvos em uma lista encadeada, 
utilizando registros(structs) e aloca��o din�mica.*/

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

//declara��o dos m�todos
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
		system("cls");
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
				return 0;
			default:
				system("cls");
				printf("ERRO: OPCAO INVALIDA\n\n");
				system("pause");
				system("cls");
				//volta pro menu
		}
	}//fim do loop infinito
}

//m�todos 
void inserir(void){
	system("cls");
	//alocando memoria para a variavel que sera inserida
	p = (t_aluno *) malloc(sizeof(t_aluno));
	
	//ra, nome e curso
	printf("Digite seu RA: ");
	scanf("%d", &p->ra);
	printf("Digite seu nome: ");
	fflush(stdin);
	gets(p->nome);
	printf("Digite seu curso: ");
	fflush(stdin);
	gets(p->curso);
	
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
	system("cls");
	int n=0;
	printf("digite o RA buscado ou 0 para listar todos: ");
	scanf("%i",&n);
	
		while(p->anterior!=NULL){
			if(n==0){
			//lista todos cadastrados
				do{
					printf(" RA: %i\n Nome: %s\n Curso:%s\n",p->ra,p->nome,p->curso);		
					if (p->anterior==NULL){		
					break;
					}
				p = p->anterior;
				}while(1);
			system("pause");
			return;
			}
			if(p->ra == n){
			//lista ra desejado
				printf(" RA: %i\n Nome: %s\n Curso:%s\n",p->ra,p->nome,p->curso);
				system("pause");
				return;
			}
		
		p = p->anterior;
	}
	
	//Se nao entrar no if significa que nao foi encontrado o RA
	printf("\n\n\nERRO 404: RA nao existe no sistema\n");
	system("pause");
	//voltando para o menu principal
	return;
	
}

void alterar(void){
	system("cls");
	//RA que o usuario quer alterar
	int n=0,o=0;
	printf("Digite o RA que deseja alterar: ");
	scanf("%i", &n);
	while(p->anterior!=NULL){
		
		if(p->ra == n){
			printf("Digite 1 para alterar o nome ou 2 para alter o curso :");
			scanf("%i",&o);
			if(o==1){
			printf("\n\nDigite um novo nome:");
			fflush(stdin);
			gets(p->nome);
			system("pause");
			//voltando para o menu principal
			return;
			}
			if(o==2){
			printf("\n\nDigite um novo curso:");
			fflush(stdin);
			gets(p->curso);
			system("pause");
			//voltando para o menu principal
			return;
			}
		}
		
		p = p->anterior;
	}
	
	//Se nao entrar no if significa que nao foi encontrado o RA
	printf("\n\n\nERRO 404: RA nao existe no sistema\n");
	system("pause");
	//voltando para o menu principal
	return;
	
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
			//voltando para o menu principal
			return;
		}
		
		p = p->anterior;
	}
	
	//Se nao entrar no if significa que nao foi encontrado o RA
	printf("\n\n\nERRO 404: RA nao existe no sistema\n");
	system("pause");
	//voltando para o menu principal
	return;
}
