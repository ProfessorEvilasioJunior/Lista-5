//Aluno: Mário Evandro do Nascimento Júnior

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.c"

Fila* cria_fila();

int main(){

	struct cliente c[8] = {{"Mario","319505266"},
                           {"Lucas","319503267"},
                           {"Iago","319503150"},
                           {"Gustavo","490491015"},
                     	   {"Juca","545355124"},
                     	   {"Maria","465454161"},
                     	   {"Teste3","546354161"},
                     	   {"Teste4","4354554415"}};
	Fila* fi = cria_fila();
	
	int i;
    for(i=0; i < 4; i++)
        inserir_cliente(fi, c[i]);
	
	//

	remover_cliente(fi);
	inserir_cliente(fi, c[5]);
	imprimir_fila(fi);
	libera_fila(fi);
	return 0;
}
