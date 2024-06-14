#include <stdio.h>
#include <stdlib.h>
#include <pila.h>
#include <time.h>
#include <string.h>



/// ESTRUCTURAS
typedef struct
{
    char nombrevideojuego[];
    float horas;
    int favorito;
    int jugados;
} stBiblioteca;

typedef struct
{

    char Nombre[];
    int edad;
    stBiblioteca biblioUsuario[];
    int CantidadJuegos;

} stUsuario;

/// PROTOTIPADO



int main()
{
    printf("Hello world!\n");
    return 0;
}


/// FUNCIONES
stUsuario CrearUsuario()
{

    int validos=0;
    printf("ingrese nombre de usuario:\n");
    fflush(stdin);
    gets()



}
