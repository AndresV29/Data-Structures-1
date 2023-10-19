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

void buscar(Nodo* head, int d){
    Nodo* tmp = head;
    while (tmp != nullptr){
        if (tmp->dato == d){
            cout << "Dato solicitado " << d << " fue encontrado" << endl;
            break;
        }else if(tmp->dato){
            tmp = tmp->sig;
        } else{
            cout << "El dato solicitado " << d << " NO fue encontrado." << endl;
            break;
        }
    }
//    if (tmp == nullptr) {
//        cout << "El dato solicitado " << d << "NO fue encontrado." << endl;
//    }
}

void eliminar(Nodo* head, int d){
    Nodo* temp = head;
    Nodo* ant = nullptr;
    while (temp != nullptr){
        if (temp->dato == d){
            if (ant == nullptr){
                //primera pos de la lista
            head = temp->sig;
            }else{
                //pos es medio o final de lista
                ant->sig = temp -> sig;
            }
            //eliminar dato de la lista
            delete temp;
            //salir del metodo buscar
            return;
        }
    }
    //avanzar en la lista
    // ant toma primera pos
    ant = temp;
    //temp toma la segunda
    temp = temp->sig;
}

//int main(){
//    Nodo* head = nullptr;
//    //lamar insercion
//    head = insertar(head, 10);
//    head = insertar(head, 20);
//    head = insertar(head, 30);
//
//    //llamar mostrar
//    //mostrar(head);
//
//    //llamar buscar
//    //buscar(head, 20);
//
//    //llamar eliminar
//    eliminar(head, 20);
//
//    mostrar(head);
//
//    return 0;
//}
