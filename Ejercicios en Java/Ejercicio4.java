import java.util.ArrayList; // Librerias para usar listas
import java.util.List;

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
public class Ejercicio4 {

    public static void inOrderAux(Nodo nodo,List<Integer> resultado) { // Funcion In-Order
        if (nodo == null) { // Clase base
            return;
        }
        inOrderAux(nodo.izquierdo, resultado); // Recorrer subarbol izquierdo
        resultado.add(nodo.valor);
        inOrderAux(nodo.derecho, resultado); // Recorrer subarbol derecho
    }
    public static List<Integer> recorridoInOrder(Nodo raiz) {
        List<Integer> resultado = new ArrayList<>(); // Lista donde guardaremos el recorrido
        inOrderAux(raiz, resultado); // Llamamos a la funcion in-order
        return resultado;
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

        // Crear raiz e insertar nodos
        Nodo raiz = new Nodo(4);
        raiz.izquierdo = new Nodo(2);
        raiz.derecho = new Nodo(6);
        raiz.izquierdo.izquierdo = new Nodo(1);
        raiz.izquierdo.derecho = new Nodo(3);
        raiz.derecho.izquierdo = new Nodo(5);
        raiz.derecho.derecho = new Nodo(7);

        System.out.println("===================================");
        System.out.println("         ARBOL BINARIO");
        System.out.println("===================================");
        imprimirArbol(raiz, "", true);
        System.out.println();

        // Recorrido In-Order
        List<Integer> resultado = recorridoInOrder(raiz);
        System.out.println("===================================");
        System.out.println("       RECORRIDO IN-ORDER");
        System.out.println("===================================");
        System.out.println("Resultado esperado: " + "[1, 2, 3, 4, 5, 6, 7]");
        System.out.println("Resultado obtenido: " + resultado);

        // Validacion
        List<Integer> esperado = List.of(1, 2, 3, 4, 5, 6, 7);
        if (resultado.equals(esperado)) {
            System.out.println("Resultado: CORRECTO");
        } else {
            System.out.println("Resultado: INCORRECTO");
        }
    }
}