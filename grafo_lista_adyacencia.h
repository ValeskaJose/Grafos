// grafo_lista_adyacencia.h

#ifndef GRAFO_LISTA_ADYACENCIA_H
#define GRAFO_LISTA_ADYACENCIA_H

#include <iostream>

class Nodo {
public:
    int destino;
    Nodo* siguiente;

    Nodo(int dest) : destino(dest), siguiente(nullptr) {}
};

class GrafoListaAdyacencia {
public:
    int numNodos;
    Nodo** listaAdyacencia;

    GrafoListaAdyacencia(int nodos) {
        numNodos = nodos;
        listaAdyacencia = new Nodo*[numNodos];
        for (int i = 0; i < numNodos; i++) {
            listaAdyacencia[i] = nullptr;
        }
    }

    void agregarArista(int origen, int destino) {
        Nodo* nuevoNodo = new Nodo(destino);
        nuevoNodo->siguiente = listaAdyacencia[origen];
        listaAdyacencia[origen] = nuevoNodo;
    }

    void mostrarGrafo() {
        for (int i = 0; i < numNodos; i++) {
            Nodo* temp = listaAdyacencia[i];
            std::cout << "Nodo " << i << " -> ";
            while (temp) {
                std::cout << temp->destino << " ";
                temp = temp->siguiente;
            }
            std::cout << std::endl;
        }
    }

    ~GrafoListaAdyacencia() {
        for (int i = 0; i < numNodos; i++) {
            Nodo* temp = listaAdyacencia[i];
            while (temp) {
                Nodo* eliminar = temp;
                temp = temp->siguiente;
                delete eliminar;
            }
        }
        delete[] listaAdyacencia;
    }
};

#endif // GRAFO_LISTA_ADYACENCIA_H