#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 3
#define LEN 20
int main()
{   int legajo[T];
    char nombre[T] [LEN];
    int i;
    int j;
    int auxInt;
    char auxString[LEN];

    for (i=0; i<T; i++)
    {
        printf("ingrese legajo: ");
        scanf("%d",&legajo[i]);

        printf("ingrese nombre: ");
        fflush(stdin);
        gets(nombre[i]);
    }


    for(i=0; i<T-1;i++)
    {
        for(j=i+1;j<T-1;j++)
        {
            if(legajo[i]>legajo[j])
            {
                auxInt = legajo[i];
                legajo[i] = legajo [j];
                legajo[j] = auxInt;

                strcpy (auxString,nombre[i]);
                strcpy (nombre[i],nombre[j]);
                strcpy (nombre[j],auxString);

            }
        }
    }
printf("\n");
    for (i=0;i<T;i++)
    {
        printf("%d\t%s\n", legajo[i],nombre[i]);

    }
    return 0;
}


