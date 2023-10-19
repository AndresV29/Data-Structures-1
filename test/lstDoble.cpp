//
// Created by andre on 10/16/2023.
//
#include <iostream>
#include "lstDoble.h"
using namespace std;

struct Node {
    Node* prev;
    Node* next;
    int data;
};

Node * createNode(int v){
    Node* tmp = new Node;
    tmp->data = v;
    tmp->next = nullptr;
    tmp->prev = nullptr;
    return tmp;
}
