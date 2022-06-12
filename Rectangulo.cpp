//
// Created by HP on 12/06/2022.
//

#include "Rectangulo.h"

Rectangulo::Rectangulo() {};
Rectangulo::~Rectangulo() {};

Rectangulo::Rectangulo(double l1, double l2) {
    this->lado1 = l1;
    this->lado2 = l2;
}

double Rectangulo::CalcularPerimetro() {
    return 2*(this->lado1 + this->lado2);
}

double Rectangulo::CalcularArea() {
    return (this->lado2 * this->lado1);
}