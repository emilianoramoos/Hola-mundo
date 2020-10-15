#include <stdio.h>

int main(){
	char caracter='e';
	int valor_ascii = (int) caracter;
	printf("el valor del caracter %c es %d", caracter,valor_ascii);
	
	int valor1 = 36, valor2 = 47;
	int suma = valor1 + valor2;
	int resta = valor1 - valor2;
	int multiplicacion =valor1 * valor2;
	int division_entera = valor1 / valor2;
	float division_flotante = (float) valor1 / valor2;
	printf("la suma de %d y %d es %d\n",valor1, valor2, suma);
   printf("la resta de %d y %d es %d\n",valor1, valor2, resta);
	printf("la multiplicacion de %d y %d es %d\n",valor1, valor2, multiplicacion);
	printf("la division entera de %d y %d es %d\n",valor1, valor2, division_entera);
	printf("la division flotante de %d y %d es %.2f\n",valor1, valor2, division_flotante);
	
	return 0;
}

