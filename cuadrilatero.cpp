#include <stdio.h>
 
  struct cuadrilatero{

     int base;

     float altura;

   };
 
int main(){
   struct cuadrilatero cuadrilatero1;

   struct cuadrilatero cuadrilatero2;

   cuadrilatero1.base = 10;

   cuadrilatero1.altura = 15.123465;

   cuadrilatero2.base = 15467;

   cuadrilatero2.altura = 2346.27537;

   printf("Base del cuadrilatero1: %d \n", cuadrilatero1.base);

   printf("Altura del cuadrilatero1: %.4f \n", cuadrilatero1.altura);

   printf("Base del cuadrilatero2: %d \n", cuadrilatero2.base);

   printf("Altura del cuadrilatero2: %.4f \n", cuadrilatero2.altura);
 
  return 0;

 }
