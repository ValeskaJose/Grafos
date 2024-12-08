#include <iostream>
#include "grafo_lista_adyacencia.h"
#include "grafo_matriz_adyacencia.h"
using namespace std;
int main() {
    cout << "Prueba de Grafo con Lista de Adyacencia:\n";
    GrafoListaAdyacencia grafoLista(5);
    grafoLista.agregarArista(0, 1);
    grafoLista.agregarArista(0, 2);
    grafoLista.agregarArista(1, 3);
    grafoLista.agregarArista(2, 3);
    grafoLista.mostrarGrafo();
    
    cout << "\nPrueba de Grafo con Matriz de Adyacencia:\n";
    GrafoMatrizAdyacencia grafoMatriz(5);
    grafoMatriz.agregarArista(0, 1);
    grafoMatriz.agregarArista(0, 2);
    grafoMatriz.agregarArista(1, 3);
    grafoMatriz.agregarArista(2, 3);
    grafoMatriz.mostrarGrafo();

    return 0;
}