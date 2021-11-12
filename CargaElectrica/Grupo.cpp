//
// Created by crims on 11/11/2021.
//

#include <string>
#include "Grupo.h"

Grupo::Grupo() {

    nombre = " ";
    pka = 0;
    carga = 0;
}

Grupo::Grupo (string nombreGrupo, float pkGrupo, int cargaGrupo){

    nombre = nombreGrupo;
    pka = pkGrupo;
    carga = cargaGrupo;
}


int Grupo::getCarga() {
    return carga;
}

float Grupo::getPka() {
    return pka;
}


