#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int usuario, maquina, i, j, n=5, m=3, yo, el, us, riv=0, jug, emp;//Declara variables
    srand(time(NULL));  //Funcion de Numero Random
do{//Inicia el ciclo
    us=0;//Iguala a "us" a 0
    riv=0;//Iguala a "riv" a 0
    for(i=0; i<n; i++){//Inicia un ciclo for
    	for(j=0; j<m; j++){//inicia otro ciclo for

    printf("Elige tu opci0n:\n");//Elige la opcion
    printf("1. Piedra\n");
    printf("2. Papel\n");
    printf("3. Tijera\n");
    scanf("%d", &usuario);


    maquina = rand() % 3 + 1; //Pone los limites del numero random

    printf("Tu elegiste: %d\n", usuario);//Dice la opcion elegida
    printf("La maquina eligio: %d\n", maquina);//Dice la opcion por la maquina

    if (usuario == maquina) {//Al elegir la misma opcion entra en el if
        printf("Empate\n\n");//Imprime que empataron
    } else if ((usuario == 1 && maquina == 3) || (usuario == 2 && maquina == 1) || (usuario == 3 && maquina == 2)) {//Evalua si gano el usuario y entra en el else if
        printf("¡Ganaste!\n\n");//Imprime que ganaste
        yo= yo+1;//Suma un punto a "yo"
    } else {//Si no entro en ninguno de los anteriores, entra en este else
        printf("Perdiste\n\n ");//Imprime que perdiste
        el= el+1;//Suma un punto a "el"
    }
    
		}
		if(yo>el){//Si "yo" tiene mas que "el" entra en el If
			us= us+1;//Suma un punto a "us"
		}else if(el>yo){//Si "el"tiene mas puntos que "yo"entra en el else if
			riv +=1;//suma un punto a "riv"
		}else{//Si no entro en ningulo de los anteriores, entra en este else
			emp= emp+1;//Suma un punto a "emp"
		}
		
		yo=0;//iguala "yo" a 0
		el=0;//iguala  "el" a 0
		printf("Termino la ronda N %d \n", i+1);//Imprime que termino la ronda
			if(us==3){ //Si "us" es igual a 3 entra en el if
			break;//Termina el ciclo
		}else if(riv==3){ //Si "riv" es igual a 3 entra en el if
			break;//termina el ciclo
		}
	
	}
		if(us>riv){//Si "us" es mayor a "riv" entra en el if
			printf("¡Ganaste la partida! :P\n\n");//Imprime que ganaste la partida
		}else if(riv>us){ //Si "riv" es mayor a "us" entra en el if
			printf("Perdiste la partida ;(\n\n ");//Imprime que perdiste la partida
		}
	if(us==riv){//Si "us" es igual a "riv" entra en el if 
	printf("Empate.");//Imprime empate 
	}
	printf("\ndesea volver a jugar? \n1=si 2=no: ");//Imprime volver a jugar 
	scanf("%d", & jug);//Guarda la variable
	
	if(jug==1){ //Si "jug" es igual a 1 entra en el if
		system("cls");//Limpia la pantalla
	}
}while (jug==1);//Si "jug" es igual a 1 reinicia el ciclo
 printf("FIN");//Imprime FIN.
}
