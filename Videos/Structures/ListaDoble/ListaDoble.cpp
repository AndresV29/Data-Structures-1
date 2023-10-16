//
// Created by andre on 10/13/2023.
//
#include "ListaDoble.h"
#include <iostream>
#include <sstream>

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



int ListaDoble::contador() {
    NodoDoble *temp = start->getSiguiente(); // 3
    int contador = 0;//2
    if (temp != cola) {//1
        while (temp != nullptr) { //1n
            contador++; //n
            temp = temp->getSiguiente(); //n
        }
    }
    return contador;
}
string ListaDoble::toString() {
    stringstream ss;
    NodoDoble *tmp = start->getSiguiente();
    if (tmp == cola){
        ss << "Vacio" << endl;
    }else {
        ss << "null";
        ss << "<-->";
        do {
            ss<< tmp->getDato();
            ss << "<-->";
            tmp = tmp->getSiguiente();
        } while (tmp != cola);
            ss << "NULL" << endl;
    }
    return ss.str();
}

/*int main(){
 * ListaDoble *puntLD = new ListaDoble;
 *
 * puntLD->agregaFinal(14);
 * puntLD->agregaFinal(20);
 * puntLD->agregaFinal(25);
 * puntLD->agregaFinal(40);
 * puntLD->agregaFinal(11);
 *
 * cout<< puntLD->toString;
 * puntLD->BorraFinal();
 * cout<< puntLD->toString;
 *
 * puntLD->buscarElemento(40);
 *
    return 0;
}*/