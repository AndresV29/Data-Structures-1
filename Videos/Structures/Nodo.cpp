//
// Created by andre on 10/10/2023.
//

#include "Nodo.h"

Nodo::Nodo() {
    dato = new Persona;
}

Persona *Nodo::getDato() const {
    return dato;
}

void Nodo::setDato(Persona *dato) {
    Nodo::dato = dato;
}

void Nodo::setSiguiente(Nodo *siguiente) {
    Nodo::siguiente = siguiente;
}
