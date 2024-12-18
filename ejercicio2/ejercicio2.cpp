//
// Created by Micae on 18/12/2024.
//

#include "ejercicio2.h"

#include <iostream>
#include <list>
#include <stack>

void ejercicio2() {
    // Crear lista de números decimales
    std::list<float> lista = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

    // Crear pila usando list como contenedor subyacente
    std::stack<float, std::list<float>> pila(lista);

    // Mostrar y vaciar la pila
    while (!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }
}
