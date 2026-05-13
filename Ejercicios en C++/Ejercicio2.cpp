#include <iostream>
using namespace std;

// Estructura del nodo
struct Nodo {

    int valor; // Valor almacenado en el nodo
    Nodo* izquierdo; // Puntero al hijo izquierdo
    Nodo* derecho; // Puntero al hijo derecho
    Nodo(int v) : valor(v), izquierdo(nullptr), derecho(nullptr) {} // Constructor
};

// Funcion para insertar en el BST
Nodo* insertar(Nodo* raiz, int valor) {
    if (raiz == nullptr) { // Caso base
        return new Nodo(valor);
    }
    if (valor < raiz->valor) { // Si el valor es menor va hacia la izquierda
        raiz->izquierdo = insertar(raiz->izquierdo, valor); // Llamada recursiva al subarbol izquierdo
    }
    else if (valor > raiz->valor) { // Si el valor es mayor va hacia la derecha
        raiz->derecho = insertar(raiz->derecho, valor); // Llamada recursiva al subarbol derecho
    }
    return raiz;
}

// Funcion para imprimir el arbol
void imprimirArbol(Nodo* raiz, string prefijo = "", bool ultimo = true) {
    if (raiz == nullptr) { // Caso base
        return;
    }
    cout << prefijo;
    if (ultimo) { // Imprime las ramas del arbol
        cout << "|-- ";
    } else {
        cout << "|-- ";
    }
    cout << raiz->valor << endl;
    bool tieneIzquierdo = (raiz->izquierdo != nullptr);
    bool tieneDerecho = (raiz->derecho != nullptr);

    if (raiz->izquierdo) { // Imprimimos hijo izquierdo
        imprimirArbol(
            raiz->izquierdo,
            prefijo + (ultimo ? "    " : "|   "),
            !tieneDerecho
        );
    }
    if (raiz->derecho) { // Imprimimos hijo derecho

        imprimirArbol(
            raiz->derecho,
            prefijo + (ultimo ? "    " : "|   "),
            true
        );
    }
}
int main() {
	
	// Creamos la raiz e insertamos valores
    Nodo* raiz = new Nodo(10);
    insertar(raiz, 5);
    insertar(raiz, 15);
    insertar(raiz, 3);
    
    // Pruebas
    cout << "===================================" << endl;
    cout << "      ARBOL BINARIO BST" << endl;
    cout << "===================================" << endl;
    imprimirArbol(raiz);
    cout << endl;
    cout << "===================================" << endl;
    cout << "         VALIDACION BST" << endl;
    cout << "===================================" << endl;
    cout << "Raiz (Esperado 10): " << raiz->valor << endl;
    if (raiz->izquierdo)
        cout << "Hijo Izquierdo (Esperado 5): "
             << raiz->izquierdo->valor << endl;
    else
        cout << "Hijo Izquierdo: null" << endl;

    if (raiz->derecho)
        cout << "Hijo Derecho (Esperado 15): "
             << raiz->derecho->valor << endl;
    else
        cout << "Hijo Derecho: null" << endl;

    if (raiz->izquierdo && raiz->izquierdo->izquierdo)
        cout << "Hijo Izquierdo del 5 (Esperado 3): "
             << raiz->izquierdo->izquierdo->valor << endl;
    else
        cout << "Hijo Izquierdo del 5: null" << endl;

    return 0;
}
