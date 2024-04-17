#include <stdio.h>

main ()
{
	int f, c;
	printf("Ingrese las filas y columnas que desea en la matriz: ");
	scanf("%d %d", &f, &c);
    int A [f][c];
    int i, j;
    printf ("Este programa te pide una matriz de %dx%d \n \n", f, c);
    // ciclo for para pedir datos de la matriz
	for (i=0; i<f; i++)
	{
		for (j=0; j<c; j++)
		{
			printf ("Ingresa el valor A[%d][%d]: ", i+1, j+1);
			scanf ("%d", &A[i][j]);
		}
	}
    
    // ciclo for para pedir imprimir en pantalla la matriz
	for (i=0; i<f; i++)
	{
		for (j=0; j<c; j++)
		{
			/* printf ("%d ", A[i][j]);
			puedo agregar un espacio, pero lo que necesito es que baje cada vez
			que termine la fila y eso lo controla el ciclo for con variable i */
			
			// caracter de control \t tabulador horizontal
			printf ("%d\t", A[i][j]);
		}
		printf ("\n");
	}
      
}
