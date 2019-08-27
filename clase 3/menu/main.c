#include <stdio.h>
#include <stdlib.h>

//prototipo

int suma(int,int);

int main()
{//llamada
   int numero1;
   int numero2;
   int total;

   printf("ingrese un numero: ");
   scanf("%d", & numero1);
   printf("ingrese otro numero: ");
   scanf("%d", & numero2);


   total = suma(numero1,numero2);

   printf("el resultado de la suma es: %d",total);

    return 0;
}

int suma (int a, int b)
{
  int  resultado;
 resultado  = a + b;

 return resultado;
}
//desarrollo
