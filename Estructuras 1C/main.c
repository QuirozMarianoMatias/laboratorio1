#include <stdio.h>
#include <stdlib.h>
#include "Alumno.h"
#define A 5


int main()
{
    eAlumno listaDeAlumnos[A];
    eLocalidad [3]= {{1,"avellaneda",1800}{2,"varela",1770}{3,"capital",1250}};
    int i;
    int opcion;
    int legajo;

    for(i=0; i<A; i++)
    {
        listaDeAlumnos[i].estado=LIBRE;
    }

    hardCodearAlumnos(listaDeAlumnos,A);

    do
    {
        printf("1.Cargar\n2.Mostrar\n3.Ordenar\n4.Dar De Baja\n5.Modificar Nombre\n7.Salir");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
        case 1:
            cargarListadoAlumnos(listaDeAlumnos,A);

            break;
        case 2:
             mostrarListadoAlumnos(listaDeAlumnos, A);
             break;
        case 3:
             sortStudentsByNameAndAverage(listaDeAlumnos,A);
             break;

        case 4:
            darDeBaja(listaDeAlumnos,A);
            break;

        case 5:
            printf("\ningrese el legajo que quiere modificar: ");
            scanf("%d",&legajo);
            Modificar(listaDeAlumnos,A,legajo);

            break;
        }


    }while(opcion!=7);








    return 0;
}


