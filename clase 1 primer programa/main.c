#include <stdio.h>
#include <stdlib.h>

int main()//mostrar
//abrir el proyecto
// %d int, %f float, %c char


{
   /* int unNumero; //declare una variable
    float otroNumero;
    float suma; // ahi que pensar que tipo de dato quiero guardar

    printf("ingrese un numero: ");
    scanf("%d", & unNumero);
    printf("ingrese un numero decimal: ");
    scanf("%f", & otroNumero);

    printf("el numero son : %d y %f", unNumero, otroNumero); // (%d) la mascara siempre va dento de las comillas
    suma = unNumero + otroNumero;

    printf("y su suma es: %f" , suma);
    return 0;*/
    char letra;
    printf("ingrese una letra: ");
    scanf("%c",&letra);

    printf("la letra es: %c", letra);// nunca poner un (&)

    return 0;

}




// scanf parecido al promt o al getelementbyid (tipo, dir memoria) 4 bytes (%d y %f), 1 byte (%c)
// aritmetico +,-,*,/
// logicos !, && , ||
//relaciones ==,>,<,>=,<=,!=
