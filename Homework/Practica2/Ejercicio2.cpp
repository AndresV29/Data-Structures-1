//
// Ejercicio 2 Venta tienda productos por nombre.
//

#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main() {
    //Nota importante ingresar el nombre del producto tal como aparece con el guion, si no el codigo va a decir que el producto no existe.
    float cantidad, total;
    map<string, float> productos;
    string opcion;
    float subtotal = 0;
    //nombre productos asociado a un precio
    productos["pan"] = 10.99;
    productos["docena-huevos"] = 5.49;
    productos["galon-leche"] = 4;
    productos["barra-mantequilla"] =3;
    productos["vitaminas"] = 10;

    do {
        string nomProducto;
        cout << "Ingrese el nombre del producto: ";
        cin >> nomProducto;

        if (productos.find(nomProducto) != productos.end()) {
            double precio = productos[nomProducto];

            cout << "Ingrese la cantidad: ";
            cin >> cantidad;

            subtotal += (precio * cantidad);
            cout << "Se agrego " << cantidad << " de " << nomProducto << " a la Factura. Precio: $" << fixed << setprecision(2) << (precio * cantidad) << endl;
        } else {
            cout << "El producto no fue encontrado." << endl;
        }

        cout << "Desea agregar otro producto? (s/n): ";
        cin >> opcion;
    } while (opcion == "s");

    // Calcular total con iva y generar factura
    double IVA = subtotal * 0.13;
     total = subtotal + IVA;

    cout << "Subtotal: $" << fixed << setprecision(2) << subtotal << endl << "IVA (13%): $" << fixed << setprecision(2) << IVA << endl
    << "Total: $" << fixed << setprecision(2) << total << endl << "Gracias por su compra!" << endl;

    return 0;
}


