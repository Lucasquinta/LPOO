/*Quintanilla, Lucas Nahuel   5to 2da*/
#include <stdio.h>
main()
{
	int caser;
	printf("Ingrese que punto desea ejecutar: \n (1/2/3/4/5): ");
	scanf("%d", & caser);
	switch(caser){
		
		case 1:{
			float tipo, tamanio, precio, kg;
			printf("Ingrese cuantos kilos desea cotizar: ");
			scanf("%f", & kg); 
			
			printf("Ingrese que tipo de uva desea cotizar \n tipo A=1 / tipo B=2 : ");
			scanf("%f", & tipo);
			
			printf("Ingrese que tamanio de uva desea cotizar \n tamanio 1 / tamaño 2 : ");
			scanf("%f", & tamanio);
			
			if(tipo == 1){
				if(tamanio == 1){
					precio= kg * 200;
					printf("El precio por kilogramo son 200 y el total es de %f", precio);
				}
				else if(tamanio == 2){
					precio= kg * 300;
					printf("El precio por kilogramo son 300 y el total es de %f", precio);
				}
			}
			else if(tipo == 2){
				if(tamanio == 1){
					precio= kg * 300;
					printf("El precio por kilogramo son 300 y el total es de %f", precio);
				}
				else if(tamanio == 2){
					precio= kg * 500;
					printf("El precio por kilogramo son 500 y el total es de %f", precio);
				}
				
			}
			break;
		}
	case 2:{
		float bas, pot, acum=1;
		int i, ent1, ent2;
		printf("Ingrese un numero de base entero y positivo: ");
		scanf("%f", & bas); 
		ent1=bas;
		if(ent1!=bas){
			printf("El numero ingresado no es valido ya que no es entero.");
			break;
		}
		if (bas<=0){
			printf("El numero ingresado no es valido ya que es negativo.");
			break;
		}
		
		printf("Ingrese un numero de potencia entero y positivo: ");
		scanf("%f", & pot); 
		ent2=pot;
		if(ent2!=pot){
			printf("El numero ingresado no es valido ya que no es entero.");
			break;
		}
		if (pot<=0){
			printf("El numero ingresado no es valido ya que es negativo.");
			break;
		}
		
		for(i=0; i<pot; i++){
			acum=acum*bas;
		}
		printf("El resultado es %f", acum);
		break;
	}
	case 3:{
		float R, PI=3.14, L, A, V;
		printf("Ingrese el radio de la circunferencia: ");
		scanf("%f", & R);
		L= 2*PI*R;
		A= PI*(R*R);
		V= (4/3)*PI*((R*R)*R);
		printf("La longitud de la circunferencia es de %f \n", L);
		printf("El area de la circunferencia es de %f \n", A);
		printf("El volumen de las esfera es de %f", V);
		break;
	}
	}
}
