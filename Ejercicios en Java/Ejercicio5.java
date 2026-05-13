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
public class Ejercicio5 {

    // Funcion para invertir el arbol
    public static Nodo invertir(Nodo raiz) {
        if (raiz == null) { // Caso base
            return null;
        }

        // Intercambio de hijos
        Nodo temporal = raiz.izquierdo; // Guardamos temporalmente el hijo izquierdo
        raiz.izquierdo = raiz.derecho; // El hijo izquierdo ahora sera el derecho
        raiz.derecho = temporal; // El hijo derecho ahora sera el izquierdo

        invertir(raiz.izquierdo); // Invertimos el subarbol izquierdo
        invertir(raiz.derecho); // Invertimos el subarbol derecho
        return raiz;
    }

    // Imprimir arbol
    public static void imprimirArbol(Nodo raiz,String prefijo,boolean ultimo) {
        if (raiz == null) { // Caso base
            return;
        }
        System.out.print(prefijo); // Imprimir prefijo
        if (ultimo) { // Imprimir ramas
            System.out.print("\\-- ");
        } else {
            System.out.print("|-- ");
        }
        System.out.println(raiz.valor); // Imprimir valor del nodo
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

        // Insertar raiz y nodos
        Nodo raiz = new Nodo(1);
        raiz.izquierdo = new Nodo(2);
        raiz.derecho = new Nodo(3);
       
        System.out.println("===================================");
        System.out.println("        ARBOL ORIGINAL");
        System.out.println("===================================");
        imprimirArbol(raiz, "", true);
        System.out.println();
        System.out.println("Antes de invertir:");
        System.out.println("Hijo Izq: " + raiz.izquierdo.valor + " | Hijo Der: " + raiz.derecho.valor);

        // Invertir arbol
        invertir(raiz);
        System.out.println();
        System.out.println("===================================");
        System.out.println("        ARBOL INVERTIDO");
        System.out.println("===================================");
        imprimirArbol(raiz, "", true);
        System.out.println();

        // Validacion
        System.out.println("Después de invertir " + "(Esperado: Izq 3 | Der 2)");
        String izq = (raiz.izquierdo != null) ? String.valueOf(raiz.izquierdo.valor) : "null";
        String der = (raiz.derecho != null) ? String.valueOf(raiz.derecho.valor) : "null";
        System.out.println("Hijo Izq: " + izq + " | Hijo Der: " + der);

        if (raiz.izquierdo != null && raiz.derecho != null && raiz.izquierdo.valor == 3 && raiz.derecho.valor == 2) {
            System.out.println("Resultado: CORRECTO");
        } else {
            System.out.println("Resultado: INCORRECTO");
        }
    }
}