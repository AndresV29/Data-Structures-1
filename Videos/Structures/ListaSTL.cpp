//
// Created by andre on 10/6/2023.
//
#include <iostream>
#include "ListaSTL.h"
#include <list>
using namespace std;

void muestraLista(list <int> g){
    list <int> :: iterator it;
    for (it = g.begin() ; it != g.end() ; ++it) {
        cout<< "\t"<< * it; // \t tabs \n salto de linea
    cout << "\n";
    }
}


int main(){
    //dos listas genericas con datos enteros
    list <int> lista1, lista2;
    for (int i = 0; i < 10; ++i) {
        //lista 1 se inserta atras y lista 2 en la primera posicion
        lista1.push_back(i * 2);
        lista1.push_front(i * 3);
    }
    //Impresion en pantalla con el metodo mostrarLista
    cout << "\n Lista 1 es: ";
    muestraLista(lista1);
    cout << "\n Lista 2 es: ";
    muestraLista(lista2);

    cout << "Lista 1 front: " << lista1.front();
    cout << "Lista 2 front: " << lista2.front();

    //Se elimina al inicio con el pop front
    cout << "Lista 1 pop front: ";
    lista1.pop_front();
    muestraLista(lista1);

    //se elimina en la parte de atras con pop back
    cout << "Lista 2 pop back: ";
    lista2.pop_back();
    muestraLista(lista2);
}