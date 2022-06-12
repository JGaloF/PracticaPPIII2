//
// Created by HP on 12/06/2022.
//

#ifndef TEMPLATE_TRIANGULO_H
    #define TEMPLATE_TRIANGULO_H
    #include "IFigura.h"

    class Triangulo : IFigura
    {
        public:
        //Constructor Destructor
        Triangulo();
        Triangulo(double, double, double );
        ~Triangulo();
        //Gett Sett
        void SetParam(double , double , double );
        double GetLado(int);
        //Servicio
        double CalcularPerimetro();
        double CalcularArea();
        private:
        double lado1, lado2, lado3;
    };
    inline void Triangulo::SetParam(double lado1,double lado2,double lado3) {
        this->lado1 = lado1;
        this->lado2 = lado2;
        this->lado3 = lado3;
        return;
    }

    inline double Triangulo::GetLado(int num) {
        switch (num) {
            case 1:
                return this->lado1;
            case 2:
                return this->lado2;
            case 3:
                return this->lado3;
            default:
                return 0;
        }
    }
#endif //TEMPLATE_TRIANGULO_H
