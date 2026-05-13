import java.util.ArrayList; // Librerias para usar listas
import java.util.Arrays;
import java.util.List;

// Clase Nodo
class NodoN {

    public int valor; // Valor que almacena el nodo
    public List<NodoN> hijos; // Lista de hijos del nodo

    // Constructor simple
    public NodoN(int valor) {
        this.valor = valor; // Guardamos el valor recibido
        this.hijos = new ArrayList<>(); // Creamos una lista vacia de hijos
    }
    // Constructor con hijos
    public NodoN(int valor, List<NodoN> hijos) {
        this.valor = valor; // Guardamos el valor
        this.hijos = hijos; // Guardamos la lista de hijos
    }
}

// Clase Principal
public class Ejercicio1 {

    // Funcion para contar nodos
    public static int contarNodos(NodoN raiz) {
        if (raiz == null) { // Clase base
            return 0;
        }
        int cantidad = 1; // Contamos el nodo actual

        for (NodoN hijo : raiz.hijos) { // Recorremos la lista de hijos del nodo

            // Llamada recursiva
            cantidad += contarNodos(hijo); // Sumamos los nodos de cada subarbol hijo
        }
        return cantidad;
    }

    //Imprimir el arbol
    public static void imprimirArbol(NodoN raiz,String prefijo,boolean ultimo) {
        if (raiz == null) { // Caso base
            return;
        }
        System.out.print(prefijo); // Imprimir prefijo

        if (ultimo) { // Imprimir las ramas del arbol
            System.out.print("\\-- "); 

        } else {
            System.out.print("|-- ");
        }
        System.out.println(raiz.valor); // Imprimir el valor de nodo

        for (int i = 0; i < raiz.hijos.size(); i++) { // Recorrer los hijos
            boolean esUltimo = (i == raiz.hijos.size() - 1);

            imprimirArbol(raiz.hijos.get(i),prefijo + (ultimo ? "    " : "|   "),esUltimo);
        }
    }
    public static void main(String[] args) {

        // Insertar nodos
        NodoN n5 = new NodoN(5);
        NodoN n6 = new NodoN(6);
        NodoN n2 = new NodoN(2, Arrays.asList(n5, n6));
        NodoN n3 = new NodoN(3);
        NodoN n4 = new NodoN(4);

        // Insertar raiz
        NodoN raiz = new NodoN(1, Arrays.asList(n2, n3, n4));

        System.out.println("===================================");
        System.out.println("          ARBOL N-ARIO");
        System.out.println("===================================");
        imprimirArbol(raiz, "", true);
        int totalNodos = contarNodos(raiz);
        System.out.println();

        System.out.println("===================================");
        System.out.println("         RESULTADO   ");
        System.out.println("===================================");
        System.out.println("Nodos esperados : 6");
        System.out.println("Nodos calculados: " + totalNodos);

        // Validacion
        if (totalNodos == 6) {
            System.out.println("Resultado: CORRECTO");
        } else {
            System.out.println("Resultaddo: INCORRECTO");
        }
    }
}