//
// Created by andre on 10/13/2023.
//
#include "ListaDoble.h"
#include <iostream>
ListaDoble::ListaDoble() {
    this->start = new NodoDoble;
    this->cola = new NodoDoble;
    start->setSiguiente(cola);
    cola->setSiguiente(start);

}

bool ListaDoble::vacia() {
    return (start->getSiguiente() == cola);
}

int ListaDoble::valorInicio() {
    NodoDoble *temp = start->getSiguiente();
    if (temp == nullptr) {
        return 0;
    }
}

int ListaDoble::valorFinal() {
    //
    NodoDoble *temp = cola->getSiguiente(); //3
    if (temp == nullptr) { //1
        return -1;//1
    }
    return temp->getDato();//4
}

void ListaDoble::agregar(NodoDoble * referencia, int valor) {
    //Proceso generico
    NodoDoble *nuevo = new NodoDoble();
    nuevo->setDato(valor);
    nuevo->setSiguiente(referencia);
    nuevo->setAnterior(referencia->getAnterior());
    referencia->getAnterior()->setSiguiente(nuevo);
    referencia->setAnterior(nuevo);
}

void ListaDoble::agregaInicio(int valor) {
    agregar(start->getSiguiente(), valor);
}

void ListaDoble::agregaFinal(int valor) {
    agregar(cola, valor);
}

void ListaDoble::borrar(NodoDoble * referencia) {
    NodoDoble *ant = referencia->getAnterior();
    NodoDoble *sig = referencia->getSiguiente();
    ant->setSiguiente(sig);
    sig->setAnterior(ant);
    delete referencia;
}

void ListaDoble::borraInicio() {
    borrar(start->getSiguiente());
}

void ListaDoble::borraFinal() {
    borrar(cola->getSiguiente());
}

void ListaDoble::buscarElemento(int valor) {
    NodoDoble *temp =  start->getSiguiente();
    int contador = -1;
    if (temp == nullptr){
        cout << "Lista vacia"<< endl;
    }else{
        while(temp != cola){
            contador++;
            if (temp->getDato() == valor){
                cout << "Valor encontrado en la posicion" << contador << endl;
                return;
            }
            temp = temp->getSiguiente();
        }
        cout << "No se encontro el valor" << endl;
    }
}

string ListaDoble::toString() {
    return std::string();
}

int ListaDoble::contador() {
    return 0;
}
