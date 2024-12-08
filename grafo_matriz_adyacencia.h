// grafo_matriz_adyacencia.h

#ifndef GRAFO_MATRIZ_ADYACENCIA_H
#define GRAFO_MATRIZ_ADYACENCIA_H

#include <iostream>

class GrafoMatrizAdyacencia {
public:
    int numNodos;
    bool** matrizAdj;

    GrafoMatrizAdyacencia(int nodos) {
        numNodos = nodos;
        matrizAdj = new bool*[numNodos];
        for (int i = 0; i < numNodos; i++) {
            matrizAdj[i] = new bool[numNodos];
            for (int j = 0; j < numNodos; j++) {
                matrizAdj[i][j] = false;  
            }
        }
    }

    void agregarArista(int origen, int destino) {
        matrizAdj[origen][destino] = true;  
    }

    void mostrarGrafo() {
        for (int i = 0; i < numNodos; i++) {
            for (int j = 0; j < numNodos; j++) {
                if (matrizAdj[i][j]) {
                    std::cout << i << " -> " << j << std::endl;
                }
            }
        }
    }

    ~GrafoMatrizAdyacencia() {
        for (int i = 0; i < numNodos; i++) {
            delete[] matrizAdj[i];
        }
        delete[] matrizAdj;
    }
};

#endif // GRAFO_MATRIZ_ADYACENCIA_H