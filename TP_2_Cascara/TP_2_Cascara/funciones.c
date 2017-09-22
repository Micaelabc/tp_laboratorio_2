#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones.h"

int obtenerEspacioLibre(EPersona lista[])
{
    int i;
    /*int tam=0;

    while (lista[tam]!='\0')
    {
      tam++;
    }*/


    for(i=0;i<20;i++)
    {
        if(lista[i].estado==-1)
        {
            return i;
        }
    }
    return -1;
}

void AgregarPersona(EPersona lista[], int valor)
{
    char auxNombre[50];
    int auxEdad;
    int auxDni;

    printf("\nIngrese su nombre: ");
    scanf("%s", & auxNombre);

    printf("\nIngrese su edad: ");
    scanf("%d", & auxEdad);

    printf("\nIngrese su dni: ");
    scanf("%d", & auxDni);

    lista[valor].dni=auxDni;
    lista[valor].edad=auxEdad;
    strcpy(lista[valor].nombre, auxNombre);
    lista[valor].estado=1;
}

int BorrarPersona(EPersona lista[], int valor)
{
    int i;

    for(i=0; i<20; i++)
    {
        if(lista[i].dni==valor)
        {
            lista[i].dni=0;
            lista[i].edad=0;
            strcpy(lista[i].nombre, "\0");
            lista[i].estado=-1;

            return 1;
        }
    }

    return -1;
}

void ordenarLista(EPersona lista[], int valor)
{
    int i;
    int j;
    EPersona auxPersona;

    for(i=0; i<valor-1; i++)
    {
        for(j=i+1; j<valor; j++)
        {
            if(strcmp(lista[i].nombre, lista[j].nombre)>0)
            {
                auxPersona = lista[i];
                lista[i] = lista[j];
                lista[j] = auxPersona;
            }
        }

    }

    printf("\nNombre\tEdad\tDNI\n");

    for(i=0; i<valor; i++)
    {
        if(lista[i].estado==1)
        {
            printf("%s\t%d\t%d\n", lista[i].nombre, lista[i].edad, lista[i].dni);
        }
    }


}

void funcionGrafico (int menores18, int contador19a35, int mayores35)
{


    int i;
    int j;
    int m = 0;
    int f [3] = {menores18, contador19a35, mayores35};

    for(i=0; i<3; i++)
    {
        if(f[i] > m )
        {
            m = f [i];
        }

    }

    for(i=m; i>0; i--)
    {
        printf("%d",i);

        for(j=0; j<3; j++)
        {
            if(f[j] >= i)
            {
                printf("\t*");
            }
            else
            {
                printf("\t ");
            }

        }

        printf("\n");
    }
    printf("\t<18\t19-35\t>35\n");

}



void inicializarEstados(EPersona lista[], int numLista)
{
    int i;

    for(i=0; i<numLista; i++)
    {
        lista[i].estado = 0;
    }
}
