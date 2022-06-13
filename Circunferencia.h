//
// Created by HP on 12/06/2022.
//

#ifndef TEMPLATE_CIRCUNFERENCIA_H
    #define TEMPLATE_CIRCUNFERENCIA_H

    #include "IFigura.h"

    using namespace std;

    class Circunferencia : IFigura
    {
        public:
        //Constructor y destructor
        Circunferencia();
        Circunferencia(double);
        ~Circunferencia();
        //Set Get
        void SetRadio(double);
        float GetRadio();
        //Servicio
        double CalcularPerimetro();
        double CalcularArea();
        private:
        double radio;

    };

    inline void Circunferencia::SetRadio(double r) {
        this->radio = r;
        return;
    }

    inline float Circunferencia::GetRadio() {
        return this->radio;
    }

#endif //TEMPLATE_CIRCUNFERENCIA_H
