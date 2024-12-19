//
// Created by Micae on 18/12/2024.
//

#include "ejercicio6.h"

#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>

void ejercicio6() {
    std::string s = "12345";

    try {
        // Convertir la cadena en entero usando boost::lexical_cast
        int i = boost::lexical_cast<int>(s);
        std::cout << "Número: " << i << std::endl;
    } catch (boost::bad_lexical_cast &e) {
        // Manejar excepciones
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
