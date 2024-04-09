#include <stdio.h>
main()
{
	int punto;
	printf("Que punto quiere realizar? \n(1/2/3/4/5): ");
	scanf("%d", & punto);
	switch(punto){
		case 1:
	float n_alum, precio, p_alum;
	printf("ingrese la cantidad de alumnos que viajan.");
	scanf("%f", & n_alum);
	if(n_alum>=100){
		precio= n_alum * 500;
		p_alum=500;
	}
	else if(n_alum>=50 && n_alum<=99){
		precio= n_alum * 400;
		p_alum=400;
	}
	else if(n_alum>=30 && n_alum<=49){
		precio= n_alum * 300;
		p_alum=300;
	}
	else if(n_alum<30){
		precio= 6000;
		p_alum= precio/n_alum;
	}
	printf("El valor total del micro es de %f y por alumno tienen que pagar %f cada uno", precio, p_alum);
	break;
	
	case 2:
		float sueldo, ventas[3], com, total;
		int i, acumc=0, acum=0;
		printf("ingrese su sueldo base: ");
		scanf("%f", & sueldo);
		for(i=0; i<3; i++){
			printf("ingrese el valor de la venta numero %d: ", i+1);
			scanf("%f", & ventas[i]);
			com= ventas[i]*0.1;
			acumc=acumc + com;
			acum=acum+ ventas[i];
		}
		total= sueldo+acum+acumc;
		printf("El sueldo total es de %f", total);
		break;
		
	case 3:
		float parcial, acum2, exf, trf,prom, final;
		int j;
		for(j=0; j<3; j++){
			printf("ingresa la nota del parcial N %d: ", j+1);
			scanf("%f", & parcial);
			acum2= acum2+ parcial;
		}
		prom=acum2/3;
		printf("Ingrese la nota del examen final: ");
		scanf("%f", & exf);
		printf("Ingrese la nota del trabajo final: ");
		scanf("%f", & trf);
		final= (prom*0.55) + (exf*0.30) + (trf*0.15);
		printf("La nota final es de %f", final);
		break;
	case 4:
		int n1,i,par,n, n2, cont=0;
		
		printf("ingrese un numero de valor minimo: ");
		scanf("%d", & n1);
		printf("ingrese un numero de valor maximo: ");
		scanf("%d", & n2);
		n=n2;
		for(i=0; i<n; i++){
			cont= cont+1;
			par= cont%2;
			if(cont>n1 && par==0){
				printf("\n%d", cont);
			}
		}
		break;
	case 5:
		
		printf("se cruzan en el kilometro 110.");
		break;
	}
}
