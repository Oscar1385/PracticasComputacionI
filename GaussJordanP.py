{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "name": "GaussJordanP.py",
      "provenance": [],
      "authorship_tag": "ABX9TyM+y4zdqnSbzqAU+YAIldZX",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/Oscar1385/PracticasComputacionI/blob/main/GaussJordanP.py\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "A96SZ1YFzi8R"
      },
      "source": [
        "\n",
        "import numpy as np\n",
        "import sys\n",
        "\n",
        "#Pedimos el numero de variables\n",
        "n = int(input('Ingrese el numero de ecuaciones: '))\n",
        "\n",
        "a = np.zeros((n, n + 1))\n",
        "x = np.zeros(n)\n",
        "\n",
        "# Pedimos los coeficientes necesarios\n",
        "print('Enter Augmented Matrix Coefficients:')\n",
        "for i in range(n):\n",
        "    for j in range(n + 1):\n",
        "        a[i][j] = float(input('a[' + str(i) + '][' + str(j) + ']='))\n",
        "\n",
        "# Aplicamos la eliminacion gaussiana\n",
        "for i in range(n):\n",
        "    if a[i][i] == 0.0:\n",
        "        sys.exit('Divide by zero detected!')\n",
        "\n",
        "    for j in range(n):\n",
        "        if i != j:\n",
        "            ratio = a[j][i] / a[i][i]\n",
        "\n",
        "            for k in range(n + 1):\n",
        "                a[j][k] = a[j][k] - ratio * a[i][k]\n",
        "\n",
        "# Obtenemos solucion\n",
        "\n",
        "for i in range(n):\n",
        "    x[i] = a[i][n] / a[i][i]\n",
        "\n",
        "# Mostramos la solucion en la pantalla\n",
        "print('\\nRequired solution is: ')\n",
        "for i in range(n):\n",
        "    print('X%d = %0.2f' % (i, x[i]), end='\\t')\n",
        "\n",
        "\n",
        "\n",
        "\n",
        "\n",
        "\n",
        "\n",
        "\n",
        "\n",
        "\n",
        "\n",
        "\n"
      ],
      "execution_count": null,
      "outputs": []
    }
  ]
}