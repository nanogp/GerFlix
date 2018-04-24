#include <stdio.h>
#include <stdlib.h>
#include "General.h"
#include "Serie.h"
#include "Usuario.h"
#include "Procesamiento.h"

    /*

    1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.



    */



int main()
{

    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];
    inicializarSeriesEstado(listaDeSeries, TAMSERIE);

    inicializarSeriesHardCode(listaDeSeries);
    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);

    mostrarListaSeries(listaDeSeries, TAMSERIE);
    ejecutarEnConsola(HACER_PAUSA);

    ejecutarEnConsola(LIMPIAR_PANTALLA);
    mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);
    ejecutarEnConsola(HACER_PAUSA);

    ejecutarEnConsola(LIMPIAR_PANTALLA);
    mostrarListaSeriePorUsuario(listaDeSeries,listaDeUsuarios, TAMSERIE, TAMUSUARIO);
    ejecutarEnConsola(HACER_PAUSA);

    ejecutarEnConsola(LIMPIAR_PANTALLA);
    mostrarListaUsuariosPorSerie(listaDeSeries, listaDeUsuarios, TAMSERIE, TAMUSUARIO);
    ejecutarEnConsola(HACER_PAUSA);

    return 0;
}
