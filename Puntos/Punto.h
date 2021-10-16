//
// Created by Oscar Eduardo Ortega Penagos on 14/10/2021.
//

#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H
#include <iostream>

using namespace std;

class Punto2D{
public:
    float x, y;
    void SetPosicion(double a, double b);
    void Trasladar (float temp1, float temp2);
    void RotarRespectoAlOrigen (float temp1);
    void Escalar (float temp1, float temp2);
    float GetX();
    float GetY();

private:
    float a, b, c;

};

#endif //PUNTO_PUNTO_H
