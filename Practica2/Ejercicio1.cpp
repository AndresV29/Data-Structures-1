//
// Created by andre on 9/29/2023.
//
#include "iostream"
#include "Ejercicio1.h"

using namespace std;

const float limCaseraP = 1000;
const float limFresaP = 1300;
const float limUvaP = 1500;
const float limHierbaP = 1200;
const float descuentoCant = 0.1;
const float efectivoDescuento = 0.05;
bool menu(){
    int cantLimCa, cantLimFresa, cantLimUva, cantLimHierba;
    int opcion;
    float total, subtotal;
    while (true){
        cout << "Venta Limonada Los limones:" <<endl << "1. Limonada Casera ($" << limCaseraP << ")" <<endl << "2. Limonada con Fresa ($" << limFresaP << ")" <<endl << "3. Limonada con Uva ($" << LimUvaP << ")" <<endl << "4. Limonada con Hierbabuena ($" << LimHierbaP << ")" <<endl<< "5. Facturar";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cantLimCa++;
                break;
            case 2:
                cantLimFresa++;
                break;
            case 3:
                cantLimUva++;
                break;
            case 4:
                cantLimHierba++;
                break;
            case 5:
               total = (cantLimCa * limCaseraP) + (cantLimFresa * limFresaP) + (cantLimUva * limUvaP) + (cantLimHierba + limHierbaP);
                break;
        }

    }
}


int main(){
    menu();
    return 0;
}