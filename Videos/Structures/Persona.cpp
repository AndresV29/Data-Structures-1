//
// Created by andre on 10/10/2023.
//

#include "Persona.h"


Persona::Persona(int id, const string &nombre) {

}

int Persona::getId() const {
    return id;
}

void Persona::setId(int id) {
    Persona::id = id;
}

const string &Persona::getNombre() const {
    return nombre;
}

void Persona::setNombre(const string &nombre) {
    Persona::nombre = nombre;
}

string Persona::toString() {
    stringstream ss;
    ss << "Id: " << getId() << " Nombre: " << getNombre();
    return ss.str();
}
