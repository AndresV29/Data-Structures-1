#include <iostream>
using namespace std;

 double calcularebaja(double salario, double impuesto){
    double salarioRebajado, porcentaje;
    //variable porcentaje se refiere al calculo del x porciento del salario ingresado
    porcentaje = salario * impuesto;
    salarioRebajado = salario - porcentaje;
    cout << "Al salario: " <<salario<< "\n se le hizo una rebaja de:" << porcentaje << "\n Salario neto: " << salarioRebajado;
     return salarioRebajado;
}

void salarioexhonerado(long salario){
     //Se llama en caso de tener un salario menor a 800,000 colones.
   cout << "Segun el salrio ingresado: "<< salario << ",este no debe pagar impuestos";
}
long impuesto(){
     //Recibe salario y asigna el impuesto segun el valor
    long salario;
    cout << "Bienvenido al sistema de Impuestos \n Por favor ingrese el salario en Colones: ";
    cin >> salario;
    if (salario < 800000){
        salarioexhonerado(salario);
    }else if( salario > 800000 && salario < 1000000){
        //Impuesto del 3.5%
        calcularebaja(salario, 0.035);
    }else if (salario >= 1000000 && salario < 1450000){
        calcularebaja(salario, 0.085);
    } else{
        calcularebaja(salario, 0.1);
    }

    return salario;
}
int main() {
    impuesto();
    return 0;
}