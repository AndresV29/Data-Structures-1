cmake_minimum_required(VERSION 3.26)
project(Structures)

set(CMAKE_CXX_STANDARD 17)

add_executable(Structures main.cpp
        ListaAcot.cpp
        ListaAcot.h
        Menu.cpp
        Menu.h
        ListaSTL.cpp
        ListaSTL.h
        Persona.cpp
        Persona.h
        Nodo.cpp
        Nodo.h
        ListaDoble/ListaDoble.cpp
        ListaDoble/ListaDoble.h
        ListaDoble/NodoDoble.cpp
        ListaDoble/NodoDoble.h
        LinkDobInt/DoubleLst.cpp
        LinkDobInt/DoubleLst.h
        LinkDobInt/Node.cpp
        LinkDobInt/Node.h
)
