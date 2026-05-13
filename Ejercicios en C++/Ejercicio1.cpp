#include <iostream>
#include <vector> // Libreria para usar vectores
using namespace std;

// Estructura del nodo
struct NodoN {
	
    int valor; // Valor almacenado en el nodo
    vector<NodoN*> hijos; // Vector que almacena los punteros a los hijos del nodo
    NodoN(int v) : valor(v) {} // Constructor del nodo, recibe un entero y lo asigna al valor del nodo
};

// Funcion recursiva para contar todos los nodos del arbol
int contarNodos(NodoN* raiz) {
    if (raiz == nullptr) { // Caso base
        return 0;
    }
    int total = 1; // Contador inicial
    for (NodoN* hijo : raiz->hijos) { // Recorremos todos los hijos del nodo actual
        total += contarNodos(hijo); // Sumamos la cantidad de nodos de cada subarbol hijo
    }
    return total;
}
// Funcion para imprimir el arbol
void imprimirArbol(NodoN* raiz, string prefijo = "", bool ultimo = true) {

    if (raiz == nullptr) { // Caso base
        return;
    }
    cout << prefijo; 
    if (ultimo) { // Imprime las ramas del arbol
        cout << "|-- ";
    } else {
        cout << "|--";
    }
    cout << raiz->valor << endl;   // Imprimimos el valor del nodo

    for (int i = 0; i < raiz->hijos.size(); i++) { // Recorremos los hijos
        bool esUltimo = (i == raiz->hijos.size() - 1);
        imprimirArbol(
            raiz->hijos[i],
            prefijo + (ultimo ? "    " : "|   "),

            esUltimo
        );
    }
}
int main() {

    // Creamos los nodos
    NodoN* n5 = new NodoN(5);
    NodoN* n6 = new NodoN(6);
    NodoN* n2 = new NodoN(2);
    n2->hijos.push_back(n5);
    n2->hijos.push_back(n6);
    NodoN* n3 = new NodoN(3);
    NodoN* n4 = new NodoN(4);
    NodoN* raiz = new NodoN(1);

    // Agregamos los nodos como hijos de la raiz
    raiz->hijos.push_back(n2);
    raiz->hijos.push_back(n3);
    raiz->hijos.push_back(n4);

    // Pruebas
    cout << "===================================" << endl;
    cout << "           ARBOL N-ARIO" << endl;
    cout << "===================================" << endl;

    imprimirArbol(raiz);

    int totalNodos = contarNodos(raiz);

    cout << endl;

    cout << "===================================" << endl;
    cout << "        RESULTADO DE LA PRUEBA" << endl;
    cout << "===================================" << endl;

    cout << "Nodos esperados : 6" << endl;
    cout << "Nodos calculados: " << totalNodos << endl;

    // VerificaciOn 
    if (totalNodos == 6) {
        cout << "Resultado: CORRECTO" << endl;
    } else {
        cout << "Resultado: INCORRECTO" << endl;
    }
    return 0;
}
