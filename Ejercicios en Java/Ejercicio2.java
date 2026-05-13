// Clase Nodo
class Nodo {

    int valor; // Valor almacenado en el nodo
    Nodo izquierdo; // Referencia al hijo izquierdo
    Nodo derecho; // Referencia al hijo derecho

    Nodo(int valor) { // Constructor
        this.valor = valor; // Guardamos el valor recibido
    }
}

// Clase Principal
public class Ejercicio2 {

    public static Nodo insertar(Nodo raiz, int valor) { // Funcion para insertar en el BST
        if (raiz == null) { // Caso base
            return new Nodo(valor);
        }
        if (valor < raiz.valor) { // Si el valor es menor, va hacia la izquierda
            raiz.izquierdo = insertar(raiz.izquierdo, valor);
        }
        else { // Si el valor es mayor o igual, va hacia la derecha
            raiz.derecho = insertar(raiz.derecho, valor);
        }
        return raiz;
    }

    // Imprimir el arbol
    public static void imprimirArbol(Nodo raiz,String prefijo,boolean ultimo) {
        if (raiz == null) { // Caso base
            return;
        }
        System.out.print(prefijo); // Imprimir el prefijo
        if (ultimo) { // Imprimir ramas
            System.out.print("\\-- ");
        } else {
            System.out.print("|-- ");
        }
        System.out.println(raiz.valor); // Imprimimos el valor del nodo
        boolean tieneIzquierdo = (raiz.izquierdo != null);
        boolean tieneDerecho = (raiz.derecho != null);

        if (raiz.izquierdo != null) { // Imprimir hijo izquierdo
            imprimirArbol(raiz.izquierdo,prefijo + (ultimo ? "    " : "|   "),!tieneDerecho);
        }
        if (raiz.derecho != null) { // Imprimir hijo derecho
            imprimirArbol(raiz.derecho,prefijo + (ultimo ? "    " : "|   "),true);
        }
    }
    public static void main(String[] args) {

        //Crear raiz e inserar nodos
        Nodo raiz = new Nodo(10);
        insertar(raiz, 5);
        insertar(raiz, 15);
        insertar(raiz, 3);

        System.out.println("===================================");
        System.out.println("           ARBOL BST");
        System.out.println("===================================");
        imprimirArbol(raiz, "", true);
        System.out.println();

        // Validacion
        System.out.println("===================================");
        System.out.println("          RESULTADO");
        System.out.println("===================================");
        System.out.println("Raiz (Esperado 10): " + raiz.valor);
        String izq = (raiz.izquierdo != null) ? String.valueOf(raiz.izquierdo.valor) : "null";
        System.out.println("Hijo Izquierdo (Esperado 5): " + izq);
        String der = (raiz.derecho != null) ? String.valueOf(raiz.derecho.valor) : "null";
        System.out.println("Hijo Derecho (Esperado 15): " + der);
        String izqIzq = (raiz.izquierdo != null && raiz.izquierdo.izquierdo != null) ? String.valueOf(raiz.izquierdo.izquierdo.valor) : "null";
        System.out.println("Hijo Izquierdo del 5 (Esperado 3): " + izqIzq);
        if (raiz.valor == 10 && raiz.izquierdo != null && raiz.izquierdo.valor == 5
                && raiz.derecho != null
                && raiz.derecho.valor == 15
                && raiz.izquierdo.izquierdo != null
                && raiz.izquierdo.izquierdo.valor == 3) {

            System.out.println("Resultado: CORRECTO");
        } else {
            System.out.println("Resultado: INCORRECTO");
        }
    }
}