//
// Created by HP on 12/06/2022.
//

#include "Funciones.h"
#include "Triangulo.h"
#include "Circunferencia.h"
#include "Rectangulo.h"
#include "iostream"
using namespace std;

void Desplegar(){

    Triangulo tr;
    Circunferencia cr;
    Rectangulo rc;

    int eleccion;

    cout<< "Menu de seleccion: " << endl;
    cout<< "1- Triangulo" << endl;
    cout<< "2- Rectangulo" << endl;
    cout<< "3- Circunferencia" << endl;
    fflush(stdin);
    cin>>eleccion;

    switch (eleccion) {
        double l1,l2,l3;
        case 1:
            cout << "" << endl;
            cout << "Introduzca parametros del triangulo: " << endl;
            cin>>l1;
            cin>>l2;
            cin>>l3;
            tr.SetParam(l1,l2,l3);
            Calcular(eleccion, tr, cr, rc);
            break;
        case 2:
            cout << "" << endl;
            cout << "Introduzca parametros del rectangulo: " << endl;
            cin>>l1;
            cin>>l2;
            rc.SetLados(l1, l2);
            Calcular(eleccion, tr, cr, rc);
            break;
        case 3:
            cout << "" << endl;
            cout << "Introduzca parametros del circulo" << endl;
            cin>>l1;
            cr.SetRadio(l1);
            Calcular(eleccion, tr, cr, rc);
            break;
        default:
            Desplegar();
    }
    return;
}

void Calcular(int eleccion, Triangulo tr, Circunferencia cr, Rectangulo rc){
    int calculo;
    double resultado;
    cout << "" << endl;
    cout << "Menu de seleccion de calculo: " << endl;
    cout << "1- Perimetro" << endl;
    cout << "2- Area" << endl;
    fflush(stdin);
    cin>>calculo;

    switch (calculo) {
        case 1:
            switch (eleccion) {
                case 1:
                    resultado = tr.CalcularPerimetro();
                    break;
                case 2:
                    resultado = rc.CalcularPerimetro();
                    break;
                case 3:
                    resultado = cr.CalcularPerimetro();
                    break;
                default:
                    cout << "Eleccion no valida" << endl;
            }
            cout << "El perimetro es: " << resultado << "cm" << endl;
            break;
        case 2:
            switch (eleccion) {
                case 1:
                    resultado = tr.CalcularArea();
                    break;
                case 2:
                    resultado = rc.CalcularArea();
                    break;
                case 3:
                    resultado = cr.CalcularArea();
                    break;
                default:
                    cout << "Eleccion no valida" << endl;
            }
            cout << "El Area es: " << resultado << "cm^2" << endl;
            break;
    }
    return;
}