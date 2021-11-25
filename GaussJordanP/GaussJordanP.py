# Autor: Oscar Eduardo Ortega Penagos

import numpy as np
import sys

#Pedimos el numero de variables
n = int(input('Ingrese el numero de ecuaciones: '))

a = np.zeros((n, n + 1))
x = np.zeros(n)

# Pedimos los coeficientes necesarios
print('Enter Augmented Matrix Coefficients:')
for i in range(n):
    for j in range(n + 1):
        a[i][j] = float(input('a[' + str(i) + '][' + str(j) + ']='))

# Aplicamos la eliminacion gaussiana
for i in range(n):
    if a[i][i] == 0.0:
        sys.exit('Divide by zero detected!')

    for j in range(n):
        if i != j:
            ratio = a[j][i] / a[i][i]

            for k in range(n + 1):
                a[j][k] = a[j][k] - ratio * a[i][k]

# Obtenemos solucion

for i in range(n):
    x[i] = a[i][n] / a[i][i]

# Mostramos la solucion en la pantalla
print('\nRequired solution is: ')
for i in range(n):
    print('X%d = %0.2f' % (i, x[i]), end='\t')






