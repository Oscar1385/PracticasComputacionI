
/*
 * Autor: Oscar Eduardo Ortega Penagos
 * oeortega23@gmail.com
 * oeortega23@comunidad.unam.mx
 * 1 de Oct del 2021
 */

#include <iostream>
#include <array>

// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);


int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solución para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);

    return 0; // Indicamos que salimos del programa con éxito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{
    int variables = miMatriz.size();
    cout << "Solucion: " << endl;
    for (int i = 0; i < variables; ++i) {
        cout << "x" << i << "=" << miMatriz[i] [variables] << endl;
    }
}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz & miMatriz)
{
    double max, pivote, aux;
    int indice;

    int matrix = miMatriz.size();
    for (int i = 0; i < matrix; ++i) {
        max= abs(miMatriz[i][i]);
        indice = i;
        for (int j = 0; j < matrix; ++j) {
            if (max < abs(miMatriz[j][i]))
            {
               max = abs(miMatriz[j][i]);
               indice = i;
            }
        }
        if (i !=indice){
            for (int k = 0; k < matrix + 1; ++k) {
                aux = miMatriz[i][k];
                miMatriz[i][k] = miMatriz[indice][k];
                miMatriz[indice][k] = aux;
            }
        }
        if (miMatriz[i][i] == 0){
            cout << "No tiene solucion: " << endl;
        }
        else{
            for (int k = 0; k < matrix; ++k) {
                if (k != i){
                    pivote = -miMatriz[k][i];
                    for (int l = 0; l < matrix + 1; ++l) {
                        miMatriz[k][l] = miMatriz[k][l] + pivote * miMatriz[i][l] / miMatriz[i][i];
                    }
                }
                else {
                   pivote = miMatriz[i][i];
                    for (int l = 0; l < matrix + 1; ++l) {
                        miMatriz[k][l] = miMatriz[k][l] / pivote;
                    }
                }
            }
        }
    }
}


