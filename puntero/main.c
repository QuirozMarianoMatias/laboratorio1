#include <stdio.h>
#include <stdlib.h>

typedef struct
{int  legajo;
 char sexo;
 float altura;
}ePersona;

ePersona * new_Persona();
void mostrarPersona(ePersona*);

int main()
{
    ePersona * puntero = new_Persona();

    if (puntero != NULL)
    {
    printf("la persona es:\n");
    printf("%d--%c--%f",puntero->legajo,puntero->sexo,puntero->altura);
    }

    free(puntero);
    puntero = NULL;



    return 0;
}

ePersona* new_Persona ()
{
   // ePersona unaPersona = {1000, 'M',1.78};
    ePersona* puntero;
  puntero = (ePersona*) malloc(sizeof(ePersona));
    //puntero = &unaPersona;
if (puntero!= NULL){
    puntero ->legajo = 1000;
    puntero ->sexo = 'M';
    puntero ->altura = 1.78;
                    }
    return puntero;
}
