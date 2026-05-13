#include <iostream>
#include <vector> // Libreria para usar vectores
using namespace std;

// Estructura del nodo
struct Nodo {
	
    int valor; // Valor almacenado en el nodo
    Nodo* izquierdo; // Puntero al hijo izquierdo
    Nodo* derecho; // Puntero al hijo derecho
    Nodo(int v) : valor(v), izquierdo(nullptr), derecho(nullptr) {} // Constructor
};

// Funcion In-Order
void inOrderAux(Nodo* nodo, vector<int>& resultado) {
    if (nodo == nullptr) { // Caso base
        return;
    }
    inOrderAux(nodo->izquierdo, resultado); // Recorrer subarbol izquierdo
    resultado.push_back(nodo->valor); // Nodo actual
    inOrderAux(nodo->derecho, resultado); // Recorrer subarbol derecho
}
vector<int> recorridoInOrder(Nodo* raiz) {
    vector<int> resultado; // Vector donde guardaremos el recorrido
    inOrderAux(raiz, resultado); // Llamamos a la funcion in-order
    return resultado;
}

// Funcion para imprimir el arbol
void imprimirArbol(Nodo* raiz, string prefijo = "", bool ultimo = true) {
    if (raiz == nullptr) { // Caso base
        return;
    }
    cout << prefijo;
    if (ultimo) { // Imprime las ramas del arbol
        cout << "\\-- ";
    } else {
        cout << "|-- ";
    }
    cout << raiz->valor << endl; // Imprimimos el valor del nodo
    bool tieneIzquierdo = (raiz->izquierdo != nullptr);
    bool tieneDerecho = (raiz->derecho != nullptr);

    if (raiz->izquierdo) { // Imprimir hijo izquierdo
        imprimirArbol(
            raiz->izquierdo,
            prefijo + (ultimo ? "    " : "|   "),
            !tieneDerecho
        );
    }
    if (raiz->derecho) { // Imprimir hijo derecho
        imprimirArbol(
            raiz->derecho,
            prefijo + (ultimo ? "    " : "|   "),
            true
        );
    }
}
int main() {
	
	// Creamos la raiz e insertamos valores
    Nodo* raiz = new Nodo(4);
    raiz->izquierdo = new Nodo(2);
    raiz->derecho = new Nodo(6);
    raiz->izquierdo->izquierdo = new Nodo(1);
    raiz->izquierdo->derecho = new Nodo(3);
    raiz->derecho->izquierdo = new Nodo(5);
    raiz->derecho->derecho = new Nodo(7);

    // Imprimir el arbol
    cout << "===================================" << endl;
    cout << "        ARBOL BINARIO" << endl;
    cout << "===================================" << endl;
    imprimirArbol(raiz);
    
    // Recorrido In-Order
    vector<int> res = recorridoInOrder(raiz);
    cout << endl;
    cout << "===================================" << endl;
    cout << "      RECORRIDO IN-ORDER" << endl;
    cout << "===================================" << endl;
    cout << "Resultado esperado: 1 2 3 4 5 6 7" << endl;
    cout << "Resultado obtenido: ";
    
    for (int val : res) { // Recorremos el vector resultado
        cout << val << " ";
    }
    cout << endl;

    // Validacion
    if (res == vector<int>{1,2,3,4,5,6,7}) {
        cout << "Resultado: CORRECTO" << endl;
    } else {
        cout << "Resultado: INCORRECTO" << endl;
    }
    return 0;
}
