#include <iostream>
#include "Maestro.hpp"

// Implementación de los métodos de la clase Maestro

Maestro::Maestro() {
    // Constructor por defecto
}

Maestro::Maestro(std::string nombre, int edad, std::string departamento) {
    // Constructor con parámetros
    this->nombre = nombre;
    this->edad = edad;
    this->departamento = departamento;
}

std::string Maestro::getDepartamento() {
    return departamento;
}

void Maestro::muestraDatos() {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Edad: " << edad << std::endl;
    std::cout << "Departamento: " << departamento << std::endl;
}