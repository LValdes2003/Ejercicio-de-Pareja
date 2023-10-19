//
// Created by Oblitionmaster on 19/10/2023.
//
#include "iostream"
#include "nombre_edad.h"

void nom_edad(char* nombre, int edad) {
    char* nom_edad = new char[100];
    sprintf(nom_edad, "%s tiene %d años", nombre, edad);
    return nom_edad;
}
