//
// Created by HP on 12/06/2022.
//

#include "Funciones.h"
#include "Triangulo.h"
#include "Circunferencia.h"
#include "Rectangulo.h"
#include "iostream"
using namespace std;

Triangulo tr;
Circunferencia Cr;
Rectangulo Rc;

void Desplegar(){
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
            Calcular();
        case 2:
            cout << "" << endl;
            cout << "Introduzca parametros del Triangulo: " << endl;
            cin>>l1;
            cin>>l2;
            Rc.SetLados(l1,l2);
            Calcular();
        case 3:
            cout << "" << endl;
            cout << "Introduzca parametros del circulo" << endl;
            cin>>l1;
            Cr.SetRadio(l1);
            Calcular();
        default:
            Desplegar();
    }
}

void Calcular(){
    int calculo;
    cout << "" << endl;
    cout << "Menu de seleccion de calculo: " << endl;
    cout << "1- Perimetro" << endl;
    cout << "2- Area" << endl;
    fflush(stdin);
    cin>>calculo;

    switch (calculo) {
        case 1:

        case 2:

        default:
            Calcular();
    }
}