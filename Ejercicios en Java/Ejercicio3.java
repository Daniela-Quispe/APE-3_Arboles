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
public class Ejercicio3 {

    public static int calcularAltura(Nodo raiz) { // Funcion para calcular la altura
        if (raiz == null) { // Clase base
            return 0;
        }
        int alturaIzquierda = calcularAltura(raiz.izquierdo); // Calcular altura izquierda
        int alturaDerecha = calcularAltura(raiz.derecho); // Calcular altura derecha
        return 1 + Math.max(alturaIzquierda,alturaDerecha);
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
        Nodo raiz = new Nodo(1);
        raiz.derecho = new Nodo(2);
        raiz.derecho.izquierdo = new Nodo(3);
        System.out.println("===================================");
        System.out.println("         ARBOL BINARIO");
        System.out.println("===================================");
        imprimirArbol(raiz, "", true);
        System.out.println();

        // Calculae altura
        int altura = calcularAltura(raiz);

        System.out.println("===================================");
        System.out.println("           RESULTADO");
        System.out.println("===================================");
        System.out.println("(CASO 1) Altura esperada : 3");
        System.out.println("(CASO 1) Altura calculada: " + altura);

        System.out.println("(CASO 2) Altura de arbol nulo (esperado 0): " + calcularAltura(null));

        // Vlidacion
        if (altura == 3) {
            System.out.println("Resultado: CORRECTO");
        } else {
            System.out.println("Resultado: INCORRECTO");
        }
    }
}
