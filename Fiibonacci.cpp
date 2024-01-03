#include <stdio.h>
int aux,antes,despues,actual,cont,suma,n;
int main()
{ 
	printf("Ingrese el limite de numeros\n");
	scanf("%d", &n);
	antes=0;
	despues=1;
	cont=0;
	
	printf("%d\n%d\n",antes,despues);
	while(cont<n)
	{
		actual=antes+despues;
		printf("%d\n",actual);
		//suma=actual+despues;
		antes=despues;
		despues=actual;
		suma=actual+suma;
		cont=cont+1;
	}
		aux=suma+1;
		printf("La suma es: %d",aux);
	return 0;
}

