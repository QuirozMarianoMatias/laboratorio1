#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dinero;
    char tipo;
    int max;
    int i;
    int flag = 0;
    int contpes=0;
    int acumpes=0;
    float promedio;
    float porcentaje;

    for (i = 0;i <=4; i++)
    {
        printf("ingrese el monto de dinero: ");
        scanf("%d", &dinero);

        printf("ingrese el tipo de moneda: ");
        fflush(stdin);
        scanf("%c", &tipo);
        while (!(tipo == 'd' || tipo == 'p' || tipo == 'l' || tipo == 'b' ))
        {
        printf("error reingrese el tipo de moneda: ");
        fflush(stdin);
        scanf("%c", &tipo);
        }

        if(tipo == 'd')
        {
          if(max < dinero || flag==0)
            {max = dinero;
             flag = 1;
            }
        }
        if(tipo == 'p')
        {acumpes += dinero;
         contpes++;

        }


    }
    if( flag == 1){
    printf("el maximo valor ingresado en dorales es: %d",max);
    }
    else
    {printf("usted no ingreso ningun dolar");

    }
    if (contpes >0)
    {
        promedio =(float) acumpes/contpes;// debo convertir uno de los datos en float casteo explicito
        printf("\nel promedio de los pesos ingresados es: %f",promedio);
        porcentaje = (float) contpes / 5 * 100;
        printf("\nel porcentaje de pesos ingresados es : %f",porcentaje);

    }
    else
    {
        printf("usted no ingreso pesos");
    }

    return 0;
}

 /* realizar un programa que pida 5 ingresos de dinero
 1- P 505
 2- L 50
 3- D -500
 4- B 88
 5- P 100*/
