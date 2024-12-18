//
// Created by Micae on 18/12/2024.
//

#include "ejercicio1.h"

#include <iostream>
#include <vector>

void ejercicio1() {
    std::vector<int> numeros;

    // Añadir elementos al vector
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    numeros.push_back(50);

    // Usar un iterador para recorrer el vector
    for (auto it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }
}
