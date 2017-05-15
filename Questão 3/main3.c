//Aluno: Mário Evandro do Nascimento Júnior

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.c"

Pilha* cria_pilha();

int main(){

	struct cliente c[8] = {{"Mario","319505266"},
                           {"Lucas","319503267"},
                           {"Iago","319503150"},
                           {"Gustavo","490491015"},
                     	   {"Juca","545355124"},
                     	   {"Maria","465454161"},
                     	   {"Teste3","546354161"},
                     	   {"Teste4","4354554415"}};
	Pilha* pi = cria_pilha();
	
	int i;
    for(i=0; i < 4; i++)
        inserir_cliente(pi, c[i]);	
	
	
	
	remover_cliente(pi);
	remover_cliente(pi);
	inserir_cliente(pi, c[6]);
	printf("\n\n\n");
	imprimir_pilha(pi);
	libera_pilha(pi);
	return 0;
}
