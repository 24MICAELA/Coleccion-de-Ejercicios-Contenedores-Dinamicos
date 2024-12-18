//
// Created by Micae on 18/12/2024.
//

#include "ejercicio5.h"

#include <iostream>
#include <vector>
#include <memory>
#include <algorithm> // Para std::for_each

void ejercicio5() {
    // Expresión lambda para calcular el cuadrado de un número
    auto cuadrado = [](int num) { return num * num; };
    std::cout << "Cuadrado de 5: " << cuadrado(5) << std::endl;

    // Usar for_each con una lambda para recorrer el vector
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    std::for_each(numeros.begin(), numeros.end(), [](int num) {
        std::cout << num << std::endl;
    });

    // Usar punteros inteligentes (shared_ptr) para gestionar la memoria
    auto ptr = std::make_shared<int>(10);
    std::cout << "Valor apuntado por ptr: " << *ptr << std::endl;
}
