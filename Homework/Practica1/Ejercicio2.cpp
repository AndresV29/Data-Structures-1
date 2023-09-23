#include <iostream>
using namespace std;
float calculaenvio(float distancia, float preciokm){
    float total;
    total = distancia * preciokm;
    cout << "El costo total del envio: $" << total << endl;
    return total;
}

float calculapaquete(){
    float weight, dist, total;
    cout << "Bienvenido a la calculadora del costo de Envio \n Por favor ingrese el peso del paquete en kilogramos: ";
    cin >>weight;
    cout << "Por favor ingrese la distancia en kilometros:  ";
    cin >> dist;
    if(weight < 0){
        cout << "El valor ingresado no es valido, favor ingresar un valor mayor que 0";
        calculapaquete();
    }else if (weight<=5){
        total = calculaenvio(dist, 1);
    }else if (weight > 5 && weight <= 10){
        calculaenvio(dist, 2);
    }else if (weight > 10){
        calculaenvio(dist, 3);
    }
    return 0;
}

int main() {
    calculapaquete();

    return 0;
}