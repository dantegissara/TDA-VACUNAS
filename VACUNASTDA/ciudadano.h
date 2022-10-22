#ifndef CIUDADANO_H_INCLUDED
#define CIUDADANO_H_INCLUDED

struct CiudadanoC;

typedef struct CiudadanoC * Ciudadano;

Ciudadano cargarCiudadano();
void mostrarCiudadano(Ciudadano c);
int buscarVacuna(Ciudadano c, char nombreVac[20]);

///SETTERS
void setNombre(Ciudadano ciudadano, char nuevoNombre[]);
void setNro(Ciudadano ciudadano, int nuevoNumero);

///getters
char * getNombre(Ciudadano ciudadano);
int getNumero(Ciudadano ciudadano);

#endif // CIUDADANO_H_INCLUDED
