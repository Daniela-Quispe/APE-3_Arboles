#include <iostream>
using namespace std;

// Estructura del nodo
struct Nodo {

    int valor; // Valor almacenado en el nodo
    Nodo* izquierdo; // Puntero al hijo izquierdo
    Nodo* derecho; // Puntero al hijo derecho
    Nodo(int v) : valor(v), izquierdo(nullptr), derecho(nullptr) {} // Constructor
};

// Funcion para invertir el arbol
Nodo* invertir(Nodo* raiz) {
    if (raiz == nullptr) { // Caso base
        return nullptr;
    }

    // Intercambio de hijos, guardamos temporalmente el hijo izquierdo
    Nodo* temporal = raiz->izquierdo;
    raiz->izquierdo = raiz->derecho; // El izquierdo ahora sera el derecho
    raiz->derecho = temporal; // El derecho ahora sera el izquierdo

    // Llamadas recursivas
    invertir(raiz->izquierdo); // Invertimos el subarbol izquierdo
    invertir(raiz->derecho); // Invertimos el subarbol derecho
    return raiz;
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
    cout << raiz->valor << endl; // Imprimimos el valor
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
    Nodo* raiz = new Nodo(1);
    raiz->izquierdo = new Nodo(2);
    raiz->derecho = new Nodo(3);
    
    cout << "===================================" << endl;
    cout << "        ARBOL ORIGINAL" << endl;
    cout << "===================================" << endl;
    imprimirArbol(raiz);

    // Mostrar hijos antes de invertir
    cout << endl;
    cout << "Antes de invertir:" << endl;
    cout << "Hijo Izq: " << raiz->izquierdo->valor
         << " | Hijo Der: " << raiz->derecho->valor << endl;
    invertir(raiz);
    
    cout << endl;
    cout << "===================================" << endl;
    cout << "        ARBOL INVERTIDO" << endl;
    cout << "===================================" << endl;
    imprimirArbol(raiz);

    // Validacion
    cout << endl;
    cout << "Despues de invertir (Esperado: Izq 3 | Der 2)" << endl;
    if (raiz->izquierdo)
        cout << "Hijo Izq: " << raiz->izquierdo->valor;
    else
        cout << "Hijo Izq: null";
    cout << " | ";
    if (raiz->derecho)
        cout << "Hijo Der: " << raiz->derecho->valor << endl;
    else
        cout << "Hijo Der: null" << endl;

    // Verificacion
    if (raiz->izquierdo && raiz->derecho &&
        raiz->izquierdo->valor == 3 &&
        raiz->derecho->valor == 2) {
        cout << "Resultado: CORRECTO" << endl;

    } else {
        cout << "Resultado: INCORRECTO" << endl;
    }
    return 0;
}
