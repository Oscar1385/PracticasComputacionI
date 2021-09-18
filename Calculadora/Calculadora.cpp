
/* Calculadora Basica
 * Autor: Oscar Eduardo Ortega Penagos
 * oeortega23@comunidad.unam.mx
 * 15 Sep, 2021
 */

#include <iostream>

using namespace std;

int main() {

    /*Crearemos nuestras variables*/
    int numero1{0}, numero2{0};
    int resultado;
    string op;

    cout << "Introduzca el primer numero" << endl;
    cin >> numero1;

    cout << "introduzca simbolo" << endl;
    cin >> op;

    cout << "Introduzca el segundo numero" << endl;
    cin >> numero2;


    if (op == "+")(resultado = numero1 + numero2);
    if (op == "-")(resultado = numero1 - numero2);
    if (op == "*")(resultado = numero1 * numero2);
    if (op == "/")(resultado = numero1 / numero2);
    if (op == "%")(resultado = numero1 % numero2);


    cout << "El resultado es: " << resultado << endl;


    return 0;
}
