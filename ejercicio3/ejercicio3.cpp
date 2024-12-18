//
// Created by Micae on 18/12/2024.
//

#include "ejercicio3.h"

#include <iostream>
#include <vector>
#include <algorithm>

void ejercicio3() {
    // Vector de enteros
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};

    // Ordenar el vector
    std::sort(numeros.begin(), numeros.end());

    // Mostrar el vector ordenado
    std::cout << "Vector ordenado:" << std::endl;
    for (int num : numeros) {
        std::cout << num << std::endl;
    }

    // Encontrar el valor máximo
    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Numero maximo: " << maxNum << std::endl;
}
