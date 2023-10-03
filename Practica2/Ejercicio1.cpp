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
bool menu() {
    int opcion;
    float total, subtotal, descuento;
    //se inicializa en 0 para evitar el siguiente numero en la factura (1.08836e+21)
    float cantLimCa = 0;
    float cantLimFresa = 0;
    float cantLimUva = 0;
    float cantLimHierba = 0;

    while (true) {
        //solicitamos producto.
        cout << "Venta Limonada Los limones:" << endl << "1. Limonada Casera ($" << limCaseraP << ")" << endl
             << "2. Limonada con Fresa ($" << limFresaP << ")" << endl << "3. Limonada con Uva ($" << limUvaP << ")"
             << endl << "4. Limonada con Hierbabuena ($" << limHierbaP << ")" << endl << "5. Facturar" << endl << "Seleccione una opcion: ";
        std::cin >> opcion;

        if (opcion == 1) {
            cantLimCa++;
        } else if (opcion == 2) {
            cantLimFresa++;
        } else if (opcion == 3) {
            cantLimUva++;
        } else if (opcion == 4) {
            cantLimHierba++;
        }else if (opcion == 5){
            //facturar
            subtotal = (cantLimCa* limCaseraP) + (cantLimFresa * limFresaP) + (cantLimHierba * limHierbaP) + (cantLimUva * limUvaP) ;
            if (cantLimCa+ cantLimFresa + cantLimHierba + cantLimUva > 1) {
            // 0.1 * x
            descuento = descuentoCant * subtotal;
        }
        // Descuento adicional efectivo
        char efectivo;
        cout << "Desea cancelar con efectivo? (s/n): ";
        cin >> efectivo;

        if (efectivo == 's' || efectivo == 'S') {
            descuento += efectivoDescuento * subtotal;
        }
        // Calcular el total con descuento incluido
         total = subtotal - descuento;

        // Factura
        cout << "Factura:" << endl;
        if (cantLimCa > 0) {
            cout << "Limonada Casera: " << cantLimCa << " x $" <<
                       limCaseraP << " = $" << (cantLimCa * limCaseraP) << endl;
        }
        if (cantLimFresa > 0) {
            cout << "Limonada con Fresa: " << cantLimFresa << " x $"
                      << limFresaP << " = $" << (cantLimFresa * limFresaP) << endl;
        }
        if (cantLimHierba > 0) {
            cout << "Limonada con Hierbabuena: " << cantLimHierba << " x $"
                      << limHierbaP << " = $" << (limHierbaP * cantLimHierba) << endl;
        }
        if (cantLimUva > 0) {
                cout << "Limonada con Uva: " << cantLimUva << " x $"
                     << limUvaP << " = $" << (cantLimUva * limUvaP) << endl;
            }
        cout << "Subtotal: $" << total <<endl  << "Descuento: $" << descuento << endl<< "Total: $" << total << endl;
        break;
    } else {
        cout << "La opcion seleccionada no existe.";
    }

    }//ciclo
}

//int main(){
//    menu();
//    return 0;
//}