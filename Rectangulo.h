//
// Created by HP on 12/06/2022.
//

#ifndef TEMPLATE_RECTANGULO_H
    #define TEMPLATE_RECTANGULO_H
    #include "IFigura.h"
    class Rectangulo : IFigura
    {
        public:
        //Constructor Destructor
        Rectangulo();
        Rectangulo(double, double);
        ~Rectangulo();
        //Gett Sett
        void SetLados(double, double);
        double GetLado1();
        double GetLado2();
        //Servicio
        double CalcularPerimetro();
        double CalcularArea();
        private:
        double lado1, lado2;
    };

    inline void Rectangulo::SetLados(double l1, double l2) {
        this->lado1 = l1;
        this->lado2 = l2;
        return;
    }

    inline double Rectangulo::GetLado1() {
        return this->lado1;
    }

    inline double Rectangulo::GetLado2() {
        return this->lado2;
    }
#endif //TEMPLATE_RECTANGULO_H
