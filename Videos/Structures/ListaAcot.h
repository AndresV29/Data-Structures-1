//
// Created by andre on 10/3/2023.
//
#include "iostream"
#ifndef STRUCTURES_LISTAACOT_H
#define STRUCTURES_LISTAACOT_H
using namespace std;

template <class tipo>
class ListaAcot {
    tipo *vectorDatos;
    int cantidad;
    const int size = 100;
private:
public:
    ListaAcot(int cantidad = 0);
    ~ListaAcot();
    int getCantidad() const;
    void setCantidad(int cantidad);
    const int getSize() const;
    bool insertaDatos(tipo dato);
    void corrimientoVector(int posicion);
    string eliminaDatos(tipo dato);
    string toStringArreglo();
};

template<class tipo>
ListaAcot<tipo>::~ListaAcot(){
    for (int i = 0; i < getCantidad(); ++i) {// 2  n  n
        delete vectorDatos[i];//1n
    }
    delete []vectorDatos;//1
    setCantidad(0);//1
    //T(n) = 4 + 3n
}
template<class tipo>
ListaAcot<tipo>::ListaAcot(int cantidad): cantidad(cantidad){
    vectorDatos = new tipo [getSize()];
    for (int i = 0; i < getSize(); ++i) {
         vectorDatos[i] = 0;
    }
}
template<class tipo>
int ListaAcot<tipo>::getCantidad() const {
    return cantidad;
}
template<class tipo>
bool ListaAcot<tipo>::insertaDatos(tipo dato) {
    if (getCantidad()< (getSize()-1)){
        vectorDatos[getCantidad()] = dato;
        setCantidad(getCantidad()+1);
        return true;
    }
    return false;
}
template<class tipo>
void ListaAcot<tipo>::corrimientoVector(int posicion) {
    for (int i = 0; i < getCantidad(); ++i) {
        vectorDatos[i] = vectorDatos[i + 1];
    }
    vectorDatos[getCantidad()-1] = 0;
}

#endif //STRUCTURES_LISTAACOT_H
