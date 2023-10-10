//
// Created by andre on 10/10/2023.
//

#ifndef STRUCTURES_PERSONA_H
#define STRUCTURES_PERSONA_H
#include <sstream>
#include <iostream>

using namespace std;

class Persona {
private:
    int id;
    string nombre;
public:
    Persona(int id = 0, const string &nombre = "");
    int getId() const;
    void setId(int id);
    const string &getNombre() const;
    void setNombre(const string &nombre);
    string toString();
};


#endif //STRUCTURES_PERSONA_H
