#include <stdio.h>
#include <stdlib.h>
#include "input.h"


int main() {
    char letra;
    double tiempoRespuesta;
    puts("escriba entre A a D");
    obtenerRespuestaDeTecladoTemporizado(&letra,&tiempoRespuesta,10);
    printf("respuesta:%c Tiempo transcurrido: %.2f segundos\n",letra,tiempoRespuesta);
    return 0;
}
