#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vacunas.h"
#include "ciudadano.h"
#define DOSIS 2

struct CiudadanoC{
    char nombreYApellido[30];
    int nroCiudadano; // entero ale 6 cifras
    Vacuna vacunas[DOSIS];
};

///SETTERS
void setNombre(Ciudadano ciudadano, char nuevoNombre[]){
    strcpy(ciudadano->nombreYApellido,nuevoNombre);
}
void setNro(Ciudadano ciudadano, int nuevoNumero){
    ciudadano->nroCiudadano=nuevoNumero;
}
///GETTERS
char * getNombre(Ciudadano ciudadano){
    return ciudadano->nombreYApellido;
}
int getNumero(Ciudadano ciudadano){
    return ciudadano->nroCiudadano;
}

Ciudadano cargarCiudadano(){
    char nombreYAP[30];
    int nroCiud;

    Ciudadano ciudadano = malloc(sizeof(struct CiudadanoC));

    printf("\nIngrese su nombre y apellido: ");
    fflush(stdin);
    gets(nombreYAP);

    printf("\nIngrese su nro. de ciudadano: ");
    scanf("%d",&nroCiud);

    for(int i=0;i<DOSIS;i++){
        ciudadano->vacunas[i]=cargarVacuna();
    }
    setNombre(ciudadano,nombreYAP);
    setLote(ciudadano,nroCiud);

    return ciudadano;
}
void mostrarCiudadano(Ciudadano ciudadano){
    printf("\n----CIUDADANO----");
    printf("\n\nPersona: %s",getNombre(ciudadano));
    printf("\nNumero de ciudadano: %d",getNumero(ciudadano));

    for(int i=0;i<DOSIS;i++){
        mostrarVacuna(ciudadano->vacunas[i]);
    }
}
