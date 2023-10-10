//
// Created by andre on 10/10/2023.
//

#ifndef STRUCTURES_NODO_H
#define STRUCTURES_NODO_H
#include "Persona.h"


class Nodo {
 Persona *dato;
 Nodo* siguiente;

public:
    Nodo();
    Persona *getDato() const;
    int getID();
    void setDato(Persona *dato);
    void setSiguiente(Nodo *siguiente);
    virtual ~Nodo();
    string toString();
};


#endif //STRUCTURES_NODO_H
