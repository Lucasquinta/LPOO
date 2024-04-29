#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int usuario, maquina, i, j, n=5, m=3, yo, el, us, riv, emp;
    srand(time(NULL));  
    
    for(i=0; i<n; i++){
    	for(j=0; j<m; j++){

    printf("Elige tu opci0n:\n");
    printf("1. Piedra\n");
    printf("2. Papel\n");
    printf("3. Tijera\n");
    scanf("%d", &usuario);


    maquina = rand() % 3 + 1;

    printf("Tu elegiste: %d\n", usuario);
    printf("La maquina eligio: %d\n", maquina);

    if (usuario == maquina) {
        printf("Empate\n\n");
    } else if ((usuario == 1 && maquina == 3) || (usuario == 2 && maquina == 1) || (usuario == 3 && maquina == 2)) {
        printf("¡Ganaste!\n\n");
        yo= yo+1;
    } else {
        printf("Perdiste\n\n ");
        el= el+1;
    }
    
		}
		if(yo>el){
			us= us+1;
		}else if(el>yo){
			riv= riv+1;
		}else{
			emp= emp+1;
		}
		
		yo=0;
		el=0;
		printf("Termino la ronda N %d \n", i+1);
		if(us==3){
			printf("¡Ganaste la partida! :P\n\n");
			break;
		}else if(riv==3){
			printf("Perdiste la partida ;(\n\n ");
			break;
		}
	}
	
}
