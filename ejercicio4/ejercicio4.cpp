//
// Created by Micae on 18/12/2024.
//

#include "ejercicio4.h"

#include <iostream>
#include <valarray>

void ejercicio4() {
    // Crear un valarray de números decimales
    std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    // Mostrar la suma y media de los valores
    std::cout << "Suma: " << valores.sum() << std::endl;
    std::cout << "Media: " << valores.sum() / valores.size() << std::endl;

    // Sumar 5.0 a cada elemento del valarray
    valores += 5.0;

    // Mostrar los valores después de la operación
    std::cout << "Valores despues de sumar 5.0: ";
    for (double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;
}
