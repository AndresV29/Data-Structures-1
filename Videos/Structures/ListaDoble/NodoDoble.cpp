//
// Created by andre on 10/13/2023.
//
#include <iostream>
#include "NodoDoble.h"
using namespace std;
NodoDoble::NodoDoble() {
    this->dato=0;
    this->siguiente= nullptr;
    this->anterior= nullptr;

}

void NodoDoble::setDato(int dato) {
    this->dato=dato;
}

void NodoDoble::setAnterior(NodoDoble* siguiente) {
    this->siguiente=siguiente;
}

int NodoDoble::getDato() {
    return dato;
}

NodoDoble *NodoDoble::getSiguiente() {
    return siguiente;
}

NodoDoble *NodoDoble::getAnterior() {
    return anterior;
}

