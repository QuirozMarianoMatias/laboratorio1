#include <stdio.h>
#include <string.h>

#define LIBRE 0
#define OCUPADO 1

typedef struct
{

    int dia;
    int mes;
    int anio;
} eFecha;

typedef struct
{
    int idLocalidad;
    char localidad[30];
    int codigoPostal;
} eLocalidad;
typedef struct
{
    int legajo;
    char nombre[29];
    float promedio;
    int idLocalidad;
    int estado;
} eAlumno;

eAlumno cargarAlumno(void);
void mostrarUnAlumno(eAlumno,eLocalidad0.);
int buscarLibre(eAlumno*, int);
void cargarListadoAlumnos(eAlumno[], int);
void mostrarListadoAlumnos(eAlumno listadoDeAlumnos[],eAlumno listadoLocalidad[], int tam);
void hardCodearAlumnos(eAlumno[], int);
void sortStudentsByNameAndAverage(eAlumno[], int);
int buscarLocalidad(eAlumno listaDeAlumnos [],eLocalidad listaDeLocalidades [], int cant, int id);
int eliminarAlumno(eAlumno[], int);
int modificarAlumno(eAlumno[], int, int);

int buscarAlumnoPorLegajo(eAlumno[], int, int);

