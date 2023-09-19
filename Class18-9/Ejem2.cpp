//
// Created by andre on 9/18/2023.
//
#include "iostream"
#include "Ejem2.h"

int main(){
    //Ejercicio 2 proyeccion de prestamos
    double amount, annInterest, payment;
    int years;
    std::cout<<"Ingrese monto total del prestamo: ";
    std::cin >> amount;
    std::cout<<"Ingrese interes anual: ";
    std::cin >> annInterest;
    std::cout<<"Ingrese la cantidad de years: ";
    std::cin >> years;
    payment = amount + (amount * (annInterest/100) * years);
    std::cout<<"El pago por mes es de:" << payment;
    return 0;
}