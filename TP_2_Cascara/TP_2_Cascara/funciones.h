#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni);

void AgregarPersona(EPersona lista[], int valor);
/** \brief Cargara los datos de la persona
 * \param guarda los datos cargados */

int BorrarPersona(EPersona lista[], int valor);
/** \brief  borrara los datos de una estructura de las  personas ingresadas.
 * \param sera la estructura que se encargara de borrar a las personas.
 */


void funcionGrafico (int menores18, int contador19a35, int mayores35);
/** \brief Esta funcion me mostrara un grafico con barras que se hara en base a las edades que ingresen los usuarios.
 * \return
 */

/*void inicializarEstados(ePersona lista[], int numLista);*/

void contadorEdad (EPersona lista [], int i, int contador []);

int obtenerMax (int contador [], int g);

void ordenarLista(EPersona lista[], int valor);

#endif // FUNCIONES_H_INCLUDED
