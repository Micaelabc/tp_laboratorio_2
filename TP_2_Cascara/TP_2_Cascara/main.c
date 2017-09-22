#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    EPersona arrayDePersonas[20];

    int i;
    int espacioLibre;
    int dniBuscado;
    int resultado;
      int contadorMe;
                int contador;
                int contadorMa;

    for(i=0;i<20;i++)
    {
        arrayDePersonas[i].estado=-1;
    }
    char seguir='s';
    int opcion=0;



    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                espacioLibre=obtenerEspacioLibre(arrayDePersonas);
                if(espacioLibre==-1)
                {
                    printf("Ya no hay mas espacios disponibles.");
                }
                else
                {
                    AgregarPersona(arrayDePersonas, espacioLibre);
                }

                break;
            case 2:
                printf("Ingrese el dni del usuario a borrar: ");
                scanf("%d", & dniBuscado);
                resultado= BorrarPersona(arrayDePersonas, dniBuscado);

                if(resultado==1)
                {
                    printf("El usuario ha sido borrado correctamente.\n\n");
                }
                else
                {
                    printf("No se ha encontrado el usuario que busca.\n\n");
                }
                break;
            case 3:

                ordenarLista(arrayDePersonas, 20);
                break;
            case 4:


            contadorMe=0;
            contador=0;
            contadorMa=0;

            for(i=0; i<20; i++)
            {
                if(arrayDePersonas[i].estado==1)
                {
                    if(arrayDePersonas[i].edad < 18)
                    {
                        contadorMe++;
                    }
                    else if(arrayDePersonas[i].edad < 36)
                    {
                        contador++;
                    }
                    else
                    {
                        contadorMa++;
                    }
                }

            }
            funcionGrafico (contadorMe, contador, contador);

                break;
            case 5:
                 printf("Desea continuar?:  ");
                fflush(stdin);
                scanf("%c", &seguir);
                system("pause");
                system("cls");
                break;
    }

    }
return 0;

    }

