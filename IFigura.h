//
// Created by HP on 12/06/2022.
//

#ifndef TEMPLATE_IFIGURA_H
    #define TEMPLATE_IFIGURA_H
    using namespace std;

    class IFigura
    {
        public:
            virtual double CalcularPerimetro() = 0;
            virtual double CalcularArea() = 0;
    };

#endif //TEMPLATE_IFIGURA_H
