//Aluno: Mário Evandro do Nascimento Júnior

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.c"

Lista* criar_lista();
Lista* remove_inicio(Lista* li);
Lista* remover_com_index(Lista* li, int index);
int inserir_com_index(Lista* li, struct cliente cl, int index);

int main(){
	
	struct cliente c[8] = {{"Mario","319505266"},
                           {"Lucas","319503267"},
                           {"Iago","319503150"},
                           {"Gustavo","490491015"},
                     	   {"Juca","545355124"},
                     	   {"Maria","465454161"},
                     	   {"Teste3","546354161"},
                     	   {"Teste4","4354554415"}};


	Lista* lj = criar_lista();
	
	int i;
    for(i=0; i <= 4; i++)
        inserir_cliente(lj, c[i], i);
	
	//inserir_cliente(li, c[5], 3);

	//printf("Busca: %d\n\n", buscar(li, "1546354"));
	
	remover_cliente(lj, 3);
	imprimir_lista(lj);
	libera_lista(lj);
	return 0;
}
