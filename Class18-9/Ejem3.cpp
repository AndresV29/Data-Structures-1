//
// Created by andre on 9/18/2023.
//
#include "iostream"
#include "Ejem3.h"

int main(){
    int number;
    std::cout << "Ingrese un numero del 1 al 12: \n";
    std::cin >> number;

    if (number == 2){
        std::cout << "Mes: Febrero \n dias: 28/29";
        }else {
        switch (number) {
            case 1:
                std::cout << "Mes: Enero \n dias: 31";
                break;
            case 3:
                std::cout << "Mes: Marzo \n dias: 31";
                break;
            case 4:
                std::cout << "Mes: Abril \n dias: 30";
                break;
            case 5:
                std::cout << "Mes: Mayo \n dias: 31";
                break;
            case 6:
                std::cout << "Mes: Junio \n dias: 30";
                break;
            case 7:
                std::cout << "Mes: Julio \n dias: 31";
                break;
            case 8:
                std::cout << "Mes: Agosto \n dias: 31";
                break;
            case 9:
                std::cout << "Mes: Septiembre \n dias: 30";
                break;
            case 10:
                std::cout << "Mes: Octubre \n dias: 31";
                break;
            case 11:
                std::cout << "Mes: Noviembre \n dias: 30";
                break;
            case 12:
                std::cout << "Mes: Diciembre \n dias: 31";
                break;
        }
    }
    return 0;
}