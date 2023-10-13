//
// Created by andre on 10/10/2023.
//

#ifndef STRUCTURES_NODODOBLE_H
#define STRUCTURES_NODO_H
#include "Persona.h"


class NodoDoble {
 Persona *dato;
 NodoDoble* siguiente;

public:
    NodoDoble();
    Persona *getDato() const;
    int getID();
    void setDato(Persona *dato);
    void setSiguiente(NodoDoble *siguiente);
    virtual ~NodoDoble();
    string toString();
};


#endif //STRUCTURES_NODODOBLE_H
