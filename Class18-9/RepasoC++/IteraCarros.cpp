//
// Created by andre on 9/25/2023.
//
#include "iostream"
#include "IteraCarros.h"
using namespace std;

float total(bool key, int hour){
    float discount, price, pay;
    discount = 0.03;
    if (hour == 1 && key){
        price = 2500 + 1000;
        pay = price * 1.13;
    }else if (hour == 1 && !key){
        price = 2500;
        pay = price * 1.13;
    }else if (hour == 2 && key){
        price = 3500 + 1000;
        pay = (price - (price * discount))* 1.13;
    }else if (hour == 2 && !key){
        price = 3500;
        pay = (price - (price * discount))* 1.13;
    }else if (hour == 3 && key){
        price = 4500 + 1000;
        pay = (price - (price * discount))* 1.13;
    }else if (hour == 3 && !key){
        price = 4500;
        pay = (price - (price * discount))* 1.13;
    }
    cout << "Total a cancelar: $" << pay << endl;
    return pay;
}

bool carros(){
    int hour;
    string key;
    string response;
    while (true) {
        cout << "Bienvenido ingrese la cantiadad de horas (1-3):";
        cin >> hour;
        cout << "Agregar key maya con musica? (s/n): ";
        cin >> key;
        if (key == "s"){
            total(true, hour);
        }else{
            total(false, hour);
        }
        cout << "Desea otra venta? (s/n): ";
        cin >> response;
        if (response == "n")
            return false;
        //rompe ciclo
    }
}


//int main(){
//    carros();
//    return 0;
//}