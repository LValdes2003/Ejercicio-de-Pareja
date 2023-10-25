cmake_minimum_required(VERSION 3.26)
project(untitled2)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled2 main.cpp
        "Ambito de las variables.cpp"
        "Sintaxis de declaracion dentro de una funcion.cpp"
        "Declaración de variables globales (fuera de las funciones).cpp"
        "Declaracion dentro de un bloque.cpp"
        "Tipos de datos.cpp")
