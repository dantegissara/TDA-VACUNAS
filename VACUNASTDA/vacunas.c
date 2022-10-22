#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vacunas.h"
#include "ciudadano.h"
#define DOSIS 2

struct VacunaV{
    char nombre[20];
    char lote[10]; // Codigo ALFANUMERICO aleatorio
};

///Setters

void setNombreVacuna(Vacuna vacuna, char nuevoNombre[]){
    strcpy(vacuna->nombre,nuevoNombre);
}
void setLote(Vacuna vacuna, char nuevoLote[]){
        strcpy(vacuna->lote,nuevoLote);
}
///Getters
char * getNombreVacuna(Vacuna vacuna){
    return vacuna->nombre;
}
char * getLote(Vacuna vacuna){
    return vacuna->lote;
}

Vacuna cargarVacuna(){
    char nombre[20];
    char lote[10];

    Vacuna vacuna = malloc(sizeof(struct VacunaV));

    printf("\nIngrese el nombre de la vacuna: ");
    fflush(stdin);
    gets(nombre);

    printf("\nIngrese el lote de la vacuna: ");
    fflush(stdin);
    gets(lote);

    setNombreVacuna(vacuna, nombre);
    setLote(vacuna, lote);

    return vacuna;
}

void mostrarVacuna(Vacuna vacuna){
    printf("\n\n------VACUNA------");
    printf("\nNombre: %s",getNombreVacuna(vacuna));
    printf("\nLote: %s",getLote(vacuna));
}
