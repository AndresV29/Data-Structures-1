//
// Created by andre on 10/16/2023.
// clase 5 listas y pilas.

#include "Listas.h"

struct Nodo{
    //dato que recibe la lista
    int dato;
    Nodo *sig;
};

void insertar(Nodo *head, int valor){
    Nodo* nuevo = new Nodo;
    nuevo->dato = valor;
    nuevo->sig = head;
    head = nuevo;
}

int main(){
    Nodo* head = nullptr;

    insertar(head, 10);
    insertar(head, 20);
    insertar(head, 30);
    return 0;
}

