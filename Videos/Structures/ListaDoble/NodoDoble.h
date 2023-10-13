//
// Created by andre on 10/13/2023.
//

#ifndef STRUCTURES_NODODOBLE_H
#define STRUCTURES_NODODOBLE_H


class NodoDoble {
    int dato;
    NodoDoble* siguiente;
    NodoDoble* anterior;
public:
    NodoDoble();
    void setDato(int );
    void setSiguiente(NodoDoble* );
    void setAnterior(NodoDoble* );
    int getDato();
    NodoDoble* getSiguiente();
    NodoDoble* getAnterior();

};


#endif //STRUCTURES_NODODOBLE_H
