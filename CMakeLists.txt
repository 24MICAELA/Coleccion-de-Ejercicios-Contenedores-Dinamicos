cmake_minimum_required(VERSION 3.29)
project(Contenedores_Dinamicos)

set(CMAKE_CXX_STANDARD 14)

include_directories(ejercicio1)
include_directories(ejercicio2)
include_directories(ejercicio3)
include_directories(ejercicio4)
include_directories(ejercicio5)
include_directories(ejercicio6)

add_executable(Contenedores_Dinamicos
    ejercicio1/ejercicio1.cpp
    ejercicio1/ejercicio1.h
    ejercicio2/ejercicio2.cpp
    ejercicio2/ejercicio2.h
    ejercicio3/ejercicio3.cpp
    ejercicio3/ejercicio3.h
    ejercicio4/ejercicio4.cpp
    ejercicio4/ejercicio4.h
    ejercicio5/ejercicio5.cpp
    ejercicio5/ejercicio5.h
    ejercicio6/ejercicio6.cpp
    ejercicio6/ejercicio6.h
    main.cpp)
