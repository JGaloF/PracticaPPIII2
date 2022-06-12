//
// Created by HP on 12/06/2022.
//

#include "Triangulo.h"
#include "cmath"

Triangulo::Triangulo() {};
Triangulo::~Triangulo() {};

Triangulo::Triangulo(double lado1, double lado2, double lado3) {
    this->lado1 = lado1;
    this->lado2 = lado2;
    this->lado3 = lado3;
}

double Triangulo::CalcularPerimetro() {
    return this->lado1 + this->lado2 + this->lado3;
}

double Triangulo::CalcularArea() {
    return (this->lado1 * this->lado2 * sin(this->lado3))/2;
}