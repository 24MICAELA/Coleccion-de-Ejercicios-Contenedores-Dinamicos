//
// Created by Micae on 18/12/2024.
//

#include <locale>
#include <iostream>

#include "ejercicio1/ejercicio1.h"
#include "ejercicio2/ejercicio2.h"
#include "ejercicio3/ejercicio3.h"
#include "ejercicio4/ejercicio4.h"
#include "ejercicio5/ejercicio5.h"
#include "ejercicio6/ejercicio6.h"

int main() {
    std::cout << "Ejercicio 1: Vector e Iteradores" << std::endl;
    ejercicio1();
    std::cout << "\nEjercicio 2: Contenedores Estandar y Secuencias" << std::endl;
    ejercicio2();
    std::cout << "\nEjercicio 3: Algoritmos" << std::endl;
    ejercicio3();
    std::cout << "\nEjercicio 4: Calculo numerico" << std::endl;
    ejercicio4();
    std::cout << "\nEjercicio 5: C++ Moderno" << std::endl;
    ejercicio5();
    std::cout << "\nEjercicio 6: Introducción a Boost" << std::endl;
    ejercicio6();

    return 0;
}