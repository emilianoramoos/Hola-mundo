#include<stdio.h>

struct cuad 
{
	int alt ; 
	int bas ; 
};


int main (){
	char car = '*' , car_2 = '-', car_3 = '+' ;
	int fil = 0 ; 
	int col = 0 ; 
	struct cuad cuad1;
	cuad1.bas = 8 ;    
	cuad1.alt = 20 ;    
	for(fil = 1 ; fil <= cuad1.bas ; fil = fil +1)
	{
	
		for(col = 1 ; col <= cuad1.alt ; col = col +1 )
		{
			if(fil == 1 || fil == cuad1.bas  ){
				if(fil == 1 && col ==1 || fil ==1 && col== cuad1.alt || fil == cuad1.bas && col ==1 || fil == cuad1.bas && col == cuad1.alt )
				{
					printf("%c", car_3);
				}else {
					printf("%c", car_2);
				}	
		}else{
			if( col == 1|| col == cuad1.alt )
			{
				printf("%c",car);
			}else{
				printf(" ");
			}
				
		}
	
		} printf("\n");
		
	}
	return 0; 
}
	

