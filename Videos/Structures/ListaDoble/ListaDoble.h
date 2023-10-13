//
// Created by andre on 10/13/2023.
//

#ifndef STRUCTURES_LISTADOBLE_H
#define STRUCTURES_LISTADOBLE_H

#include <string>
#include "NodoDoble.h"

using namespace std;

class ListaDoble {
public:
    ListaDoble();
    bool vacia();
    int valorInicio();
    int valorFinal();
    void agregar(NodoDoble*, int);
    void agregaInicio(int valor);
    void agregaFinal(int valor);
    void borrar(NodoDoble *);
    void borraInicio();
    void borraFinal();
    void buscarElemento(int valor);
    string toString();
    int contador();
private:
    NodoDoble *start;
    NodoDoble *cola;

};


#endif //STRUCTURES_LISTADOBLE_H
