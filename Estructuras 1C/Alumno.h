#include <stdio.h>
#include <string.h>

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int id;
    char localidad[30];
    int codigoPostal;



}eLocalidad;
typedef struct
{
    int legajo;
    char nombre[29];
    float promedio;
    int estado;
    int idLocalidad;
} eAlumno;

eAlumno cargarAlumno(void);
void mostrarUnAlumno(eAlumno);
int buscarLibre(eAlumno*, int);
void cargarListadoAlumnos(eAlumno[], int);
void mostrarListadoAlumnos(eAlumno[], int);
void hardCodearAlumnos(eAlumno[], int);
void sortStudentsByNameAndAverage(eAlumno[], int);
void darDeBaja (eAlumno listadoDeNombre [],int tam);
void Modificar (eAlumno listadoDeNombre [],int tam,int legajo);
int buscarLegajo (eAlumno listaDeAlumnos[],int tam,int legajo);

