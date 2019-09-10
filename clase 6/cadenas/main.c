#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 15

int main()
{

   char Nombre [MAX];
   char apellido [MAX];
   char apellidoynombre [40];
   char auxString[1000];
   int i;
   int len;

   printf("ingrese su nombre");
   fflush(stdin);
   gets(auxString);
   while (strlen(auxString)>14)
   {
       printf("reingrese su nombre");
   fflush(stdin);
   gets(auxString);
   }
   strcat(Nombre,auxString);

   printf("ingrese su nombre");
   fflush(stdin);
   gets(apellido);

    strcat(apellidoynombre,apellido);
    strcat(apellidoynombre,", ");
    strcat(apellidoynombre,Nombre);

    strlwr(apellidoynombre);



   printf("%s",apellidoynombre);




















    return 0;
}

/*char palabra[10]=
    char otrapalabra[10]="chau";
    int largo;
    int comp;




    printf("ingrese una palabra: ");
    fflush(stdin);// siempre poner el fflush antes de un scanf "%s".
    //scanf("%s", palabra);
    scanf("%[^\n]",palabra); //que lea hasta un enter
    //gets(palabra);
    printf("%s", palabra);
   // comp = strcmp(palabra,otrapalabra);// esto compara si las palabras son las mismas
   // comp = stricmp(palabra,otrapalabra);// para que no discrimine entre mayusculas y minuscula
  //  printf("\n compara: %d",comp);

    //strcat(palabra,otrapalabra);//esto concatena las cadenas

    //strupr(palabra); //me convierte las palabras en mayusculas
    //strlwr(palabra);//me convierte las palabras en minuscula

    //largo = strlen(palabra);// es para contar la cantidad de caracteres

    //printf("\nel largo es %d",largo);
    //strcpy(palabra,otrapalabra);
    //strcpy(palabra,"hola"); // sirve para copiar una variable a otra


tarea
char nombre [15]
char apellido [15]
char apellidonombre*/
