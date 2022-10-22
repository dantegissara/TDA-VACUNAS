#include <stdio.h>
#include <stdlib.h>
#include "vacunas.h"
#include "ciudadano.h"
int main()
{
    Ciudadano c1 = cargarCiudadano();
    mostrarCiudadano(c1);
    return 0;
}
