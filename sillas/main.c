#include <stdlib.h>
#include "sillas.h"
#define MAX 5


// hacer un ARRAY DE SILLA, LEGAJO Y EDAD, PEDIR EL MAXIMO Y MINIMO, CUANTAS SILLAS HAY OCUPADAS, LIBRES, CLIENTE MAS VIEJO CON LEGAJO POSICON DE SILLA Y EDAD
    // cantidad 5 edad = 20,30,40,50,0
    // cantidad legajos = 100,110,200,190,180

int main()
{
    int sillas [MAX];
    int legajo [MAX];
    int edad [MAX];
    char nombre [15][MAX];
    int valorInicial = 1;
    int minimo;
    int maximo;
    int laPosicion;

    printf("ingrese la silla que desea ocupar:");
    scanf("%d",&laPosicion);

   // cargarArray legajo,MAX;
    HardCodeLegajo(legajo,MAX);
    HardCodeEdad (edad,MAX);
    inicioSillas(sillas, MAX,valorInicial);
    sillasLibres (sillas,MAX,laPosicion,valorInicial);


    //la edad maxima es : edad[dameMaximo(edad,MAX)];



   maximo = dameMaximo (edad,MAX);
   minimo = dameMinimo (edad,MAX);



   printf("%d\n",minimo);

   printf("%d",maximo);









    return 0;
}
