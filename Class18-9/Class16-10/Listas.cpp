//
// Created by andre on 10/16/2023.
// clase 5 listas y pilas.
#include <iostream>
#include "Listas.h"
#include <iostream>

using namespace std;

struct Nodo{
    //dato que recibe la lista
    int dato;
    Nodo *sig;
};

Nodo * insertar(Nodo *head, int valor){
    Nodo* nuevo = new Nodo;
    nuevo->dato = valor;
    nuevo->sig = head;
    head = nuevo;
    return head;
}
void mostrar(Nodo* head){
    Nodo* tmp = head;

    while(tmp != nullptr){

        cout<< "Lista simple:" << tmp->dato <<"->";
        tmp = tmp->sig;
    }
    //agregar formato a la salida.
    cout << endl;
}

int main(){
    Nodo* head = nullptr;
    //lamar insercion
    head = insertar(head, 10);
    head = insertar(head, 20);
    head = insertar(head, 30);

    //llamar mostrar
    mostrar(head);
    return 0;
}


