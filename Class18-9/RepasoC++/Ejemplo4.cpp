//
// Created by andre on 9/25/2023.
//
#include "iostream"
#include "Ejemplo4.h"
using namespace std;

float suma(){
    float totalSum, num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    totalSum = num1 + num2;
    cout << "Resultado:" << totalSum;
    return totalSum;
}
float resta(){
    float totalResta, num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    totalResta = num1 - num2;
    cout << "Resultado:" << totalResta;
    return totalResta;
}
float multi(){
    float totalMulti, num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    totalMulti = num1 * num2;
    cout << "Resultado:" << totalMulti;
    return totalMulti;
}
float divi(){
    float totalDivision, num1, num2;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    totalDivision = num1 / num2;
    cout << "Resultado:" << totalDivision;
    return totalDivision;
}

void menu(){
    int opcion;
    cout << "Bienvenido a la calculadora selecione una opcion ingresando un numero. \n 1. Suma \n 2. Resta \n 3. Multiplicacion \n 4. Division \n";
    cin >> opcion;
    switch (opcion) {
        case 1:
            suma();
            break;
        case 2:
            resta();
            break;
        case 3:
            multi();
            break;
        case 4:
            divi();
            break;
        default:
            cout << "Opcion invalida por favor seleccione un numero del 1 al 4.";
            menu();
            break;
    }
}

//int main(){
//    menu();
//    return 0;
//}