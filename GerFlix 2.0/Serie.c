#include "Serie.h"
#include "General.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;

*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado = 0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}

void mostrarSerie(eSerie serie)
{
    printf("\n%-10s - Genero: %-10s - Cant. temporadas: %d", serie.nombre, serie.genero, serie.cantidadTemporadas);
}

void mostrarListaSeries(eSerie listaSeries[], int cant)
{
    int i;
    char titulo[LARGO_TITULO] = {"LISTADO DE SERIES"};

    generarTitulo(titulo);
    imprimirEnPantalla(titulo);

    for(i=0 ; i<cant ; i++)
    {
        if(listaSeries[i].estado == 1)
        {
            mostrarSerie(listaSeries[i]);
        }
    }
}
