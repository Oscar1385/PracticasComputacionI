//
// Created by crims on 11/11/2021.
//

#ifndef CARGAELECTRICA_GRUPO_H
#define CARGAELECTRICA_GRUPO_H

#include <string>

using namespace std;

class Grupo{

public:
    Grupo (string, float, int);
    Grupo();

    int getCarga();
    float getPka();


private:
    string nombre;
    float pka;
    int carga;


};






#endif //CARGAELECTRICA_GRUPO_H
