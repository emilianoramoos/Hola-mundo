#include<stdio.h>
#include<stdlib.h>

int Fun_fibonacci(int num){
	if(num==0||num==1){
		return 1;
	}else{
		return Fun_fibonacci(num-1)+Fun_fibonacci(num-2);
	}
}

int main(){
	int v=0;
	do{
		printf("Ingrese un numero para calcular la funcion\n");
		scanf("%d",&v);
	}while(v>40||v<1);
printf("\nEl Valor: %d\t Valor de la funcion:%d",v,Fun_fibonacci(v));

return 0;
}
