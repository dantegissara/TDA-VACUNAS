#ifndef VACUNAS_H_INCLUDED
#define VACUNAS_H_INCLUDED


struct VacunaV;

typedef struct VacunaV * Vacuna;


///Setters
void setNombreVacuna(Vacuna vacuna, char nuevoNombre[]);
void setLote(Vacuna vacuna, char nuevoLote[]);

///Getters
char * getNombreVacuna(Vacuna vacuna);
char * getLote(Vacuna vacuna);


Vacuna cargarVacuna();

void mostrarVacuna(Vacuna vacuna);




#endif // VACUNAS_H_INCLUDED
