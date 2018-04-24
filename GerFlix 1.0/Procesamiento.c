#include "Serie.h"
#include "Usuario.h"
#include "General.h"
//3. Mostrar el listado de Usuarios con el nombre de la serie que ve

void mostrarListaSeriePorUsuario(eSerie listaSeries[], eUsuario listaUsuarios[], int cantSerie, int cantUsuario)
{
    int i;
    int j;

    ejecutarEnConsola(LIMPIAR_PANTALLA);
    imprimirEnPantalla("LISTADO DE SERIES POR CADA USUARIO");

    for(i=0 ; i<cantUsuario ; i++)
    {
        if(listaUsuarios[i].estado == 1)
        {
            imprimirEnPantalla("\n+--------------------+\n| SERIES DEL USUARIO |\n+--------------------+");
            mostrarUsuario(listaUsuarios[i]);

            for(j=0 ; j<cantSerie ; j++)
            {
                if(listaSeries[j].estado == 1 &&
                   listaSeries[j].idSerie == listaUsuarios[i].idSerie)
                {
                    mostrarSerie(listaSeries[j]);
                }
            }
        }
    }
}


//4. Mostrar por cada serie, el nombre de los usuarios que la ven.
void mostrarListaUsuariosPorSerie(eSerie listaSeries[], eUsuario listaUsuarios[], int cantSerie, int cantUsuario)
{
    int i;
    int j;

    ejecutarEnConsola(LIMPIAR_PANTALLA);
    imprimirEnPantalla("LISTADO DE USUARIOS POR CADA SERIE");

    for(i=0 ; i<cantSerie ; i++)
    {
        if(listaSeries[i].estado == 1)
        {
            imprimirEnPantalla("\n+---------------------------+\n| USUARIOS QUE VEN LA SERIE |\n+---------------------------+");
            mostrarSerie(listaSeries[i]);

            for(j=0 ; j<cantUsuario ; j++)
            {
                if(listaUsuarios[j].estado == 1 &&
                   listaUsuarios[j].idSerie == listaSeries[i].idSerie)
                {
                    mostrarUsuario(listaUsuarios[j]);
                }
            }
        }
    }
}
