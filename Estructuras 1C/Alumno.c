#include "Alumno.h"


int buscarLibre(eAlumno listadoDeAlumnos[], int tam)
{
    int indice = -1;
    int i;

    for(i=0;i<tam;i++)
    {
        if(listadoDeAlumnos[i].estado!=OCUPADO)
        {
            indice = i;
            break;
        }
    }
    return indice;

}


void hardCodearAlumnos(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int legajo[]= {101,102,105};
    float promedio[]= {6.66, 4,7.66};
    char nombre[][25]= {"Juan","Maria josefina","Maria"};
    int localidad [] = {1,1,3}
    for(i=0; i<3; i++)
    {
        listadoDeAlumnos[i].legajo = legajo[i];
        listadoDeAlumnos[i].promedio = promedio[i];
        strcpy(listadoDeAlumnos[i].nombre, nombre[i]);
        listadoDeAlumnos[i].estado = OCUPADO;
        listadoDeAlumnos[i].idLocalidad

    }


}

void mostrarListadoAlumnos(eAlumno listadoDeAlumnos[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        if(listadoDeAlumnos[i].estado==OCUPADO)
        {
            mostrarUnAlumno(listadoDeAlumnos[i]);
        }

    }
}

void cargarListadoAlumnos(eAlumno listadoDeAlumnos[], int tam)
{

    int indice;

    indice = buscarLibre(listadoDeAlumnos, tam);
    printf("Indice: %d\n", indice);
    if(indice!=-1)
    {
        //hay lugar
        listadoDeAlumnos[indice] = cargarAlumno();
    }
    else
    {
        printf("No hay espacio disponible");
    }

}

eAlumno cargarAlumno(void)
{
    eAlumno miAlumno;

    printf("Ingrese legajo: ");
    scanf("%d", &miAlumno.legajo);
    printf("Ingrese nombre: ");
    fflush(stdin);
    scanf("%[^\n]", miAlumno.nombre);
    printf("Ingrese promedio: ");
    scanf("%f", &miAlumno.promedio);

    miAlumno.estado = OCUPADO;

    return miAlumno;
}
void mostrarUnAlumno(eAlumno miAlumno)
{
    printf("%4d %25s %8.2f\n",miAlumno.legajo,miAlumno.nombre, miAlumno.promedio);
}

void sortStudentsByNameAndAverage(eAlumno listadoDeAlumnos[], int tam)
{
    int i;
    int j;
    eAlumno auxAlumno;

    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(listadoDeAlumnos[i].nombre,listadoDeAlumnos[j].nombre)>0)
            {
                auxAlumno = listadoDeAlumnos[i];
                listadoDeAlumnos[i] = listadoDeAlumnos[j];
                listadoDeAlumnos[j] = auxAlumno;
            }

            else
            {
                if(strcmp(listadoDeAlumnos[i].nombre,listadoDeAlumnos[j].nombre)==0)
                {
                    if(listadoDeAlumnos[i].promedio>listadoDeAlumnos[j].promedio)
                    {
                        auxAlumno = listadoDeAlumnos[i];
                        listadoDeAlumnos[i] = listadoDeAlumnos[j];
                        listadoDeAlumnos[j] = auxAlumno;
                    }
                }
            }
        }

    }





}

void darDeBaja (eAlumno listadoDeNombre [],int tam)
{
    int legajoBaja;
    int i;
    int flag=0;

    printf("ingrese el legajo que quiere dar de baja: ");
    scanf("%d",&legajoBaja);


    for (i=0;i<tam;i++)

    {
        if (legajoBaja== listadoDeNombre[i].legajo)

        {
            if (listadoDeNombre[i].estado==OCUPADO)
            {
                listadoDeNombre[i].estado = LIBRE;
                flag=1;
            }

        }


    }
    if (flag==0)
    {
        printf("el legajo solicitado no se encuentra");
    }
}


int buscarLegajo (eAlumno listaDeAlumnos[],int tam,int legajo)

{
 int i;
 int index = -1;

    for (i=0;i<tam;i++)

    {
         if (listaDeAlumnos[i].legajo==legajo && listaDeAlumnos[i].estado==OCUPADO)
        {
            index = i;
            break;
        }

    }


    return index;
}

void Modificar (eAlumno listadoDeAlumnos [],int tam,int legajo)
{

    int  legajoEncontrado;
    char respuesta;
    char nombreNuevo [30];





    legajoEncontrado = buscarLegajo(listadoDeAlumnos,tam,legajo);



        if (legajoEncontrado != -1)

        {
          mostrarUnAlumno(listadoDeAlumnos[legajoEncontrado]);

            printf("si esta seguro de modificar ese nombre ingrese s");
            fflush(stdin);
            scanf("%c",&respuesta);

            if (respuesta == 's')
            {
                printf("ingrese nuevo nombre: ");
                fflush(stdin);
                gets(nombreNuevo);
                strcpy(listadoDeAlumnos[legajoEncontrado].nombre,nombreNuevo);
                fflush(stdin);



            }

            else
            {
                printf("operacion cancelada");
            }




        }



    else
    {
        printf("el legajo solicitado no se encuentra");
    }
}

