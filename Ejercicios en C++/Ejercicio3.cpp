#include <iostream>
#include <algorithm> // Libreria para usar std::max
using namespace std;

// Estructura del nodo
struct Nodo {
	
    int valor; // Valor almacenado en el nodo
    Nodo* izquierdo; // Puntero al hijo izquierdo
    Nodo* derecho; // Puntero al hijo derecho
    Nodo(int v) : valor(v), izquierdo(nullptr), derecho(nullptr) {} // Constructor
};

// Funcion para calcular la altura
int calcularAltura(Nodo* raiz) {
    if (raiz == nullptr) { // Caso base
        return 0;
    }
    int alturaIzquierda = calcularAltura(raiz->izquierdo); // Calcular la altura izquierda
    int alturaDerecha = calcularAltura(raiz->derecho); // Calcular la altura derecha
    return 1 + max(alturaIzquierda, alturaDerecha);
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
    Nodo* raiz = new Nodo(1);
    raiz->derecho = new Nodo(2);
    raiz->derecho->izquierdo = new Nodo(3);
    
    cout << "===================================" << endl;
    cout << "        ARBOL BINARIO" << endl;
    cout << "===================================" << endl;
    imprimirArbol(raiz);
    
    // Calcular la altura
    int altura = calcularAltura(raiz);
    cout << endl;
    cout << "===================================" << endl;
    cout << "      RESULTADO DE ALTURA" << endl;
    cout << "===================================" << endl;
    cout << "(CASO 1) Altura esperada : 3" << endl;
    cout << "(CASO 1) Altura calculada: " << altura << endl;

    // Validacion arbol nulo
    cout << "(CASO 2) Altura de arbol nulo (esperado 0): "
         << calcularAltura(nullptr) << endl;

    // Verificacion
    if (altura == 3) {
        cout << "Resultado: CORRECTO" << endl;
    } else {
        cout << "Resultado: INCORRECTO" << endl;
    }
    return 0;
}
