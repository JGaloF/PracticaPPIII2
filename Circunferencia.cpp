//
// Created by HP on 12/06/2022.
//

#include "Circunferencia.h"
using namespace std;

Circunferencia::Circunferencia() {};

Circunferencia::Circunferencia(double r) {
    this->radio = r;
};

Circunferencia::~Circunferencia() {};

double Circunferencia::CalcularPerimetro() {
    return (this->radio) * 2 * 3.14;
}

double  Circunferencia::CalcularArea() {
    return (this->radio) * (this->radio) * 3.14;
}