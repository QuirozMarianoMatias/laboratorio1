#include <stdio.h>
#include <stdlib.h>

int main()
{

int monto;
int porcentaje;
float resultado;
char tipoop;
float aumento;
float descuento;

printf("ingrese monto: ");
scanf("%d", &monto);

printf("ingrese porcentaje: ");
scanf("%d",&porcentaje);

printf("ingrese si quiere hacer un incremento o un decremento: ");
fflush(stdin);
scanf("%c",&tipoop);

if (tipoop == ('i'))
{
  aumento = monto * porcentaje / 100;
  resultado  = monto + aumento;
}

else if (tipoop == ('d'))
{
  descuento = monto * porcentaje / 100;
  resultado = monto - descuento;
}
else
{
    printf("usted no ingreso si quiere hacer un incremento o decremento");
    resultado = 0;
}

printf("el precio final es = %f " , resultado);
    return 0;
}
