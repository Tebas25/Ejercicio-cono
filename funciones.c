#include <stdio.h>
#include <math.h>
#include "funciones.h"

float ingresarComponente(char comp, int i){
    float componente;
    printf("Ingrese la componente %c del punto %d: ", comp, i+1);
    scanf("%f",&componente);
}

float calcularDistancia(float x1, float y1, float z1, float x2, float y2, float z2){
    float distancia=sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    return distancia;
}

float calcularVolumen(float punto[3][3]){
    float radio=calcularDistancia(punto[0][0], punto[0][1], punto[0][2], punto[1][0], punto[1][1], punto[1][2]);
    float altura=calcularDistancia(punto[0][0], punto[0][1], punto[0][2], punto[2][0], punto[2][1], punto[2][2]);
    float volumen=(3.14*pow(radio,2)*altura)/3;
    return volumen;
}

float calcularAreaSuperficial(float punto[3][3]){
    float radio = calcularDistancia(punto[0][0], punto[0][1],punto[0][2],punto[1][0],punto[1][1],punto[1][2]);
    float generatriz = calcularDistancia(punto[1][0], punto[1][1],punto[1][2],punto[2][0],punto[2][1],punto[2][2]);
    float areacono=3.14*radio*generatriz;
    float areabase=3.14*pow(radio,2);
    float areaSuperficial=areacono+areabase;
    return areaSuperficial;
}