#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

struct lista{
	int qtd;
	struct cliente dados[MAX];

};

		//cria uma lista vazia
Lista* criar_lista(){

	Lista *lj;

	lj = (Lista*) malloc(sizeof(struct lista));
	if(lj != NULL){
		lj->qtd = 0;
	}
	return lj;
}

		//libera a lista
void libera_lista(Lista* lj){
	free(lj);
}


		//imprime toda a lista
void imprimir_lista(Lista* lj){
	if(lj == NULL){
		return;
	}
	int i;
	for(i=0; i<lj->qtd; i++){
		printf("Index: %d\n", i);
		printf("Nome: %s\n", lj->dados[i].nome);
		printf("CPF: %s\n", lj->dados[i].cpf);
		printf("---------------------------\n");
	}
	if(lj->qtd > 0){
		printf("Quantidade de Clientes: %d\n", lj->qtd);	
		return;
	}
	printf("Lista vazia!\n");
}

//imprime cliente
void imprimir_cliente(struct cliente cl){
	printf("Nome: %s\n", cl.nome);
	printf("CPF: %s\n", cl.cpf);
	printf("---------------------------\n\n\n");
}


//remove cliente pelo indice
Cliente remover_cliente(Lista* lj, int index){

	int i,k;

	struct cliente cli = lj->dados[index];
	if(index > lj->qtd){
		printf("Clietne não pertence a lista\n");
		return cli;
	}
	//imprime o cliente q sera removido
	printf("Cliente removido: \n");
	imprimir_cliente(lj->dados[index]);

	for(i=index; i<lj->qtd; i++){
		lj->dados[i] = lj->dados[i+1];
	}

	lj->qtd--;
	return cli;
}

//insere numa determinada posicao da lista
int inserir_cliente(Lista* lj, struct cliente cl, int index){
	int i,k;
	if(lj == NULL){
		return 0;
	}
	if(lj->qtd == MAX){
		return 0;
	}

	for(i=0; i<lj->qtd; i++){
		if(i == index){
			for(k=lj->qtd; k >= index; k--){
				lj->dados[k+1] = lj->dados[k];
			}
		}
	}

	lj->dados[index] = cl;
	lj->qtd++;
	return 1;
}

//busca cliente na lista
int buscar(Lista* lj, char cpf[]){
	int i;

	for(i=0; i<=lj->qtd; i++){
		// printf("%s\n", li->dados[i].cpf);
		// printf("%s\n", cpf);
		if(strcmp(lj->dados[i].cpf, cpf) == 0){

			return i;
		}
	}
	printf("Não está na lista\n");
	return -1;

}
