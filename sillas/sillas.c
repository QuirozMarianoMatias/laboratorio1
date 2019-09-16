#include "sillas.h"

void inicioSillas(int sillas[], int t, int valorInicial)
{
    int i;
    for(i=0; i<t; i++)
    {
        sillas[i]=valorInicial;
    }
}

/*void cargarArray (int legajo[], int t)
{
    int i;

    for(i=0;i<t;i++)
    {
        printf("ingrese el legajo del alumno: \n");
        scanf("%d",&legajo[i]);
    }

}*/

void HardCodeLegajo (int legajo[], int t)
{
  int i;
  int hardLegajo [5] = {100,110,200,190,180};

  for   (i=0;i<t;i++)
  {
      legajo[i] = hardLegajo[i];

  }


}

void HardCodeEdad (int edad[], int t)
{
  int i;
  int hardEdad [5] = {20,30,40,50,0};

  for   (i=0;i<t;i++)
  {
      edad[i] = hardEdad[i];

  }
}

int dameMaximo (int edad [], int t)

{
    int i;
    int maximo;
    for (i=0;i<t;i++)
    {
        if (i==0 || edad [i] > maximo)
        {
            maximo= i;
        }
    }

    return maximo;
}

int dameMinimo(int legajo [],int t)

{
    int i;
    int minimo;

    for (i=0;i<t;i++)
    {
        if (i==0 || legajo [i]< minimo)
        {
            minimo= i;
        }
    }

    return minimo;

}

int sillasLibres (int sillas[],int t,int laPosicion,int valorInicial)
{

int retorno =0;

if (sillas[laPosicion] == valorInicial)
{
    retorno=1;
}

return retorno;


}
int ocuparSilla(int sillas[], int t, int laPosicion, int legajo)
{
    int retorno = -1;
    int estaLibreLaSilla;
    if(laPosicion<t)
    {
        estaLibreLaSilla=sillasLibres(sillas,t,laPosicion,-1);
        if(estaLibreLaSilla==1)
        {
            sillas[laPosicion]=legajo;
            retorno=1;
        }
    }
    return retorno;
}









