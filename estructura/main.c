#include <stdio.h>
#include <stdlib.h>

typedef struct{//solo modificar la estructura, el main queda igual
char nombre[50];
int nota;
int legajo;
int estaVacio;// 0 para no y 1 para si esta vacio


}eAlumnos;// se le pone es adelante para definir que es una estructura

void inicializarAlumnos (eAlumnos listaDeAlumno [],int cantidad);
void cargarAlumnos (eAlumnos listaDeAlumnos [],int cantidad);

int main()
{
    int num;
    eAlumnos listaDeAlumno[5];
    eAlumnos alumno;
    eAlumnos alumno2;
    eAlumnos nuevoAlumno;

inicializarAlumnos(listaDeAlumno,5);
cargarAlumnos(listaDeAlumno,5);


    /*printf("ingrese su nota: ");
    scanf("%d",&alumno.nota);
    printf("%d",alumno.nota);

    printf("ingrese su nombre: ");
    scanf("%s",&alumno.nombre);
    printf("%s",alumno.nombre);

    printf("ingrese su legajo: \n");
    scanf("%d",&alumno.legajo);
    printf("%d\n",alumno.legajo);


    alumno2 = alumno;

    printf("%d %s %d" ,alumno2.legajo,alumno2.nombre,alumno2.nota);


alumno2.nota=100;

    printf("%d",alumno.nota);
    printf("%d",alumno.nota);*/



    nuevoAlumno.nota=10;
    nuevoAlumno.estaVacio=0;
    nuevoAlumno.legajo=200;

    //int indice;
    //indice= dameIndiceLibre (listaDeAlumno,5);
listaDeAlumno [3]= nuevoAlumno;



}

  void inicializarAlumnos (eAlumnos listaDeAlumno [],int cantidad)
{

    int i;

     for (i=0;i<cantidad;i++)

    {
        listaDeAlumno[i].estaVacio= 1;
    }
}
   void cargarAlumnos (eAlumnos listaDeAlumnos [],int cantidad)

{
   int i;
   int flag =0;

    for (i=0;i<cantidad;i++)
    {
        if (listaDeAlumnos[i].estaVacio ==  0)
        {
            flag = 1;
            cargarAlumnos(listaDeAlumnos,i);

        }
        if (flag==0)
        {
            printf("el array no esta vacio\n");
        }
    }
}




/*legajo [] = {1,3,5,9,88}
nombreAux[][50]={"juan" ,"pedro","maria","julieta","pepe"}
notasAux[]= {10,2,9,4,6}
sacar indice para ver si ahi alumnos
1-mostrar
2-cargar
3-buscar
4-cargar

para borrar se utiliza el [?]
*/
