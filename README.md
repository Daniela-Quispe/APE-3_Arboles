# IMPLEMENTACION DE ARBOLES

# 1. INTRODUCCION:

En esta práctica se trabajó con estructuras de datos tipo árbol utilizando los lenguajes de programación C++ y Java. El desarrollo de los ejercicios permitió comprender la organización jerárquica de los árboles, el uso de nodos enlazados mediante referencias o punteros y la aplicación de recursividad para resolver distintos problemas.
Los árboles son una de las estructuras de datos más importantes dentro de la informática debido a que permiten representar información de manera organizada y eficiente. Son ampliamente utilizados en sistemas de archivos, bases de datos, inteligencia artificial, compiladores y motores de búsqueda.

Durante la práctica se implementaron diferentes operaciones fundamentales sobre árboles N-arios y árboles binarios, incluyendo:
<pre>
• Conteo de nodos.
• Inserción en árboles binarios de búsqueda.
• Cálculo de altura.
• Recorridos.
• Transformación de árboles.
</pre>
Cada ejercicio fue desarrollado tanto en C++ como en Java, permitiendo comparar el manejo de memoria, objetos, punteros y referencias entre ambos lenguajes.

# 2. MARCO TEORICO:

## Árbol:
Un árbol es una estructura de datos no lineal formada por nodos conectados jerárquicamente. Cada árbol posee:
<pre>
• Un nodo principal llamado raíz.
• Nodos hijos.
• Nodos padres.
• Subárboles.
• Nodos hoja.
</pre>
La relación entre nodos permite representar información jerárquica.

## Características de los árboles:
Los árboles poseen varias características importantes:
<pre>
• Son estructuras dinámicas.
• Permiten organizar información jerárquicamente.
• Facilitan búsquedas eficientes.
• Utilizan nodos enlazados.
• Pueden recorrerse mediante algoritmos recursivos.
</pre>
Los árboles son ampliamente utilizados en sistemas informáticos debido a su capacidad para representar relaciones jerárquicas de manera eficiente.

## Aplicaciones de los árboles:
Los árboles tienen numerosas aplicaciones dentro de la informática, entre ellas:
<pre>
• Sistemas de archivos.
• Motores de búsqueda.
• Bases de datos.
• Compiladores.
• Inteligencia artificial.
• Redes computacionales.
• Árboles genealógicos.
• Sistemas de decisión.
</pre>

## Árbol N-ario:
Un árbol N-ario es una estructura donde cada nodo puede tener múltiples hijos. No existe un límite fijo de descendientes.

Ejemplo:
<pre>
         1
     /   |    \
    2    3     4
  /   \
5      6
</pre>
En este tipo de árbol:
<pre>
1. El nodo 1 es la raíz.
2. Los nodos 2, 3 y 4 son hijos de la raíz.
3. Los nodos 5 y 6 son hijos del nodo 2.
</pre>
Los árboles N-arios son útiles para representar estructuras donde un elemento puede tener múltiples dependencias.

## Árbol Binario:
Un árbol binario es una estructura donde cada nodo posee como máximo dos hijos:
<pre>
• Hijo izquierdo.
• Hijo derecho.
</pre>
Ejemplo:
<pre>
  10
 /   \
5    15
</pre>

## Árbol Binario de Búsqueda (BST):
El Árbol Binario de Búsqueda, conocido como BST (Binary Search Tree), es un tipo especial de árbol binario que organiza los valores siguiendo reglas específicas:
<pre>
1. Todos los valores menores al nodo actual se colocan a la izquierda.
2. Todos los valores mayores o iguales se colocan a la derecha.
</pre>
Ejemplo:
<pre>
     10
    /   \
   5     15
 /   \     \
3     7    20
</pre>
Los BST permiten realizar:
<pre>
1. Inserciones eficientes.
2. Búsquedas rápidas.
3. Eliminación organizada de nodos.
4. Recorridos ordenados.
</pre>

## Recursividad:
La recursividad es una técnica de programación donde una función se llama a sí misma para resolver un problema más grande dividiéndolo en subproblemas más pequeños.
La recursividad es fundamental en árboles debido a que:
<pre>
1. Cada subárbol puede tratarse como un árbol independiente.
2. Simplifica la implementación de recorridos.
3. Reduce la complejidad lógica del código.
</pre>
Toda función recursiva debe poseer:
<pre>
1. Caso base.
2. Llamada recursiva.
</pre>
Ejemplo base:
<pre>
Si el nodo es null → terminar.
Si no → procesar y llamar nuevamente.
</pre>

## Recorridos de Árboles Binarios:
Un recorrido es el proceso mediante el cual se visitan todos los nodos del árbol siguiendo un orden específico.

Los recorridos permiten:
<pre>
• Mostrar información. 
• Buscar datos. 
• Procesar estructuras jerárquicas. 
• Organizar información. 
</pre>
Existen dos tipos principales:
<pre>
• DFS (Depth First Search) 
• BFS (Breadth First Search) 
</pre>

## DFS (Depth First Search):
DFS significa “búsqueda en profundidad”. Este método recorre primero las ramas más profundas del árbol antes de regresar a otros nodos.

Los recorridos DFS son:
<pre>
• Inorden 
• Preorden 
• Postorden 
</pre>
DFS generalmente utiliza:
<pre>
• Recursividad 
• Pila implícita del sistema 
</pre>

## Recorrido Inorden:
El recorrido Inorden sigue el orden: Izquierda → Raíz → Derecha

## Recorrido Preorden:
El recorrido Preorden sigue el orden: Raíz → Izquierda → Derecha

## Recorrido Postorden:
El recorrido Postorden sigue el orden: Izquierda → Derecha → Raíz

## BFS (Breadth First Search):
BFS significa “búsqueda en anchura”. Este recorrido visita los nodos nivel por nivel.

## Altura de un árbol:
La altura de un árbol representa la cantidad máxima de niveles existentes desde la raíz hasta el nodo más profundo.

Ejemplo:
<pre>
1
  \
   2
     \
      3
</pre>
La altura del árbol es 3. El cálculo de altura normalmente se realiza utilizando recursividad.

## Árbol Espejo:
Un árbol espejo es el resultado de intercambiar todos los hijos izquierdos y derechos de cada nodo del árbol.

Ejemplo:

Árbol original:
<pre>
  1
 /  \
2    3
</pre>

Árbol invertido:
<pre>
  1
 /  \
3    2
</pre>
La transformación se realiza mediante intercambio recursivo de nodos.

## Árboles Binarios en C++:
En C++ los árboles binarios se implementan utilizando:
<pre>
• estructuras (struct) 
• punteros 
• memoria dinámica (new) 
</pre>
Ejemplo:
<pre>
Nodo* izquierdo;
Nodo* derecho;
</pre>

## Árboles Binarios en Java:
En Java los árboles binarios se implementan mediante:
<pre>
• clases 
• objetos 
• referencias 
</pre>
Ejemplo:
<pre>
Nodo izquierdo;
Nodo derecho;
</pre>

# 3. DESARROLLO DE LOS EJERCICIOS:

## EJERCICIO 1:

### Conteo de nodos en un árbol N-ario:

#### Descripción del ejercicio:
En este ejercicio se desarrolló una función capaz de contar todos los nodos existentes dentro de un árbol N-ario utilizando recursividad.
El árbol N-ario se caracteriza porque cada nodo puede tener múltiples hijos, por lo tanto, fue necesario recorrer completamente cada subárbol para contabilizar todos los nodos existentes.

El árbol utilizado en las pruebas fue el siguiente:
<pre>
           1
       /    |   \
      2     3    4
     /  \
   5    6
</pre>
#### Desarrollo:
Para resolver el problema se utilizó una función recursiva que realiza las siguientes operaciones:
<pre>
1. Verifica si el nodo actual es nulo. 
2. Cuenta el nodo actual. 
3. Recorre cada hijo del nodo. 
4. Llama nuevamente a la función para contar los nodos hijos. 
5. Retorna la suma total de nodos. 
</pre>
La recursividad permitió recorrer automáticamente todos los niveles del árbol sin necesidad de utilizar estructuras auxiliares complejas.

#### Resultado obtenido:
Nodos esperados: 6
Nodos calculados: 6

## EJERCICIO 2: 

### Inserción en Árbol Binario de Búsqueda (BST):

#### Descripción del ejercicio:
En este ejercicio se implementó la inserción de nodos dentro de un Árbol Binario de Búsqueda. El BST organiza los datos siguiendo reglas específicas:
<pre>
1. Valores menores → lado izquierdo. 
2. Valores mayores o iguales → lado derecho. 
</pre>
El árbol generado fue:
<pre>
        10
       /    \
     5       15
    /
   3
</pre>
#### Desarrollo:
La función de inserción realiza comparaciones entre el valor a insertar y el valor del nodo actual. El proceso implementado fue:
<pre>
1. Verificar si el nodo es nulo. 
2. Comparar el nuevo valor con el valor actual. 
3. Si el valor es menor: 
4. Continuar por el subárbol izquierdo. 
5. Si el valor es mayor o igual: 
6. Continuar por el subárbol derecho. 
7. Insertar el nodo cuando se encuentre una posición vacía. 
</pre>
La implementación se realizó mediante recursividad para simplificar el recorrido del árbol.

#### Resultado obtenido:
Raíz: 10
Hijo izquierdo: 5
Hijo derecho: 15
Hijo izquierdo del 5: 3

## EJERCICIO 3: 

### Cálculo de altura del árbol:

#### Descripción del ejercicio:
El objetivo de este ejercicio fue calcular la altura máxima de un árbol binario.
La altura representa el número máximo de niveles existentes desde la raíz hasta el nodo más profundo.

Árbol utilizado:
<pre>
1
 \
  2
 /
3
</pre>
#### Desarrollo:
La función implementada realiza:
<pre>
1. Verificación de nodo nulo. 
2. Cálculo de altura izquierda. 
3. Cálculo de altura derecha. 
4. Comparación de ambas alturas. 
5. Retorno de la mayor altura más uno. 
</pre>
La lógica recursiva permitió recorrer completamente el árbol hasta encontrar el nivel más profundo.

#### Resultado obtenido:
Altura esperada: 3
Altura calculada: 3

## EJERCICIO 4:

### Recorrido In-Order:

#### Descripción del ejercicio:
En este ejercicio se implementó el recorrido In-Order sobre un árbol binario.

Árbol utilizado:
<pre>
         4
      /     \
     2       6
    /  \    /  \
  1     3  5    7
</pre>
El recorrido In-Order sigue el siguiente orden:
Izquierda → Raíz → Derecha

#### Desarrollo:
La función recursiva desarrollada realiza:
<pre>
1. Recorrer el subárbol izquierdo. 
2. Guardar el valor del nodo actual. 
3. Recorrer el subárbol derecho. 
</pre>
Cada valor visitado se almacenó dentro de una lista dinámica para mostrar el recorrido completo. En un BST este recorrido devuelve los valores ordenados de menor a mayor.

#### Resultado obtenido:
[1, 2, 3, 4, 5, 6, 7]

## EJERCICIO 5:

### Transformación de árbol espejo:

#### Descripción del ejercicio:
En este ejercicio se implementó la transformación de un árbol binario en su árbol espejo.

Árbol original:
<pre>
      1
    /   \
   2     3
</pre>
Árbol invertido:
<pre>
      1
    /   \
   3     2
</pre>
#### Desarrollo:
La función desarrollada realiza:
<pre>
1. Intercambio del hijo izquierdo y derecho. 
2. Aplicación recursiva sobre el subárbol izquierdo. 
3. Aplicación recursiva sobre el subárbol derecho. 
</pre>
La recursividad permitió realizar la inversión en todos los niveles del árbol automáticamente.

#### Resultado obtenido:
Izquierdo: 3
Derecho: 2

# 4. IMPLEMENTACION DE LOS EJERCICIOS EN C++:

## EJERCICIO 1:

### Conteo de nodos en árbol N-ario:

En C++ se utilizó una estructura struct llamada NodoN para representar cada nodo del árbol. Cada nodo almacenaba:
<pre>
1. Un valor entero. 
2. Un vector dinámico de hijos mediante vector<-NodoN*->. 
</pre>
<pre>
struct NodoN {
    int valor;
    vector<-NodoN*-> hijos;
};
</pre>
#### Función para contar nodos:
<pre>
int contarNodos(NodoN* raiz) {

    if (raiz == nullptr) {     // Caso base
        return 0;
    }
    int cantidad = 1;     // Contar nodo actual
    for (NodoN* hijo : raiz->hijos) {     // Recorrer hijos
        cantidad += contarNodos(hijo);
    }
    return cantidad;
}
</pre>
La función contarNodos() se implementó utilizando recursividad.

La lógica consistió en:
<pre>
1. Verificar si el nodo era nulo. 
2. Contar el nodo actual. 
3. Recorrer todos los hijos utilizando un ciclo. 
4. Sumar recursivamente la cantidad de nodos hijos.
</pre>
## EJERCICIO 2:

### Inserción en Árbol Binario de Búsqueda:

En C++ se utilizó una estructura Nodo con punteros hacia el hijo izquierdo y derecho.
<pre>
struct Nodo {
    int valor;
    Nodo* izquierdo;
    Nodo* derecho;
};
</pre>
#### Función para insertar nodos:
<pre>
Nodo* insertar(Nodo* raiz, int valor) { // Función insertar
    if (raiz == nullptr) {     // Si está vacío crear nodo
        return new Nodo(valor);
    }
    if (valor < raiz->valor) {     // Insertar izquierda
        raiz->izquierdo = insertar(raiz->izquierdo, valor);
    } else { // Insertar derecha
        raiz->derecho = insertar(raiz->derecho, valor);
    }
    return raiz;
}
</raiz->
La función insertar() realizaba comparaciones entre el valor nuevo y el nodo actual.
         
La lógica implementada fue:
<pre>
1. Valores menores → izquierda. 
2. Valores mayores o iguales → derecha. 
</pre>

La función recorría el árbol recursivamente hasta encontrar una posición vacía (nullptr) donde insertar el nuevo nodo.

## EJERCICIO 3:

### Cálculo de altura del árbol:

En C++ se implementó una función recursiva llamada calcularAltura().

La lógica desarrollada fue:
<pre>
1. Retornar 0 si el nodo es nulo. 
2. Calcular la altura izquierda. 
3. Calcular la altura derecha. 
4. Retornar la altura mayor más uno. 
</pre>

Se utilizó la función max() de la librería <algorithm>.
<pre>
return 1 + max(alturaIzquierda, alturaDerecha);
</pre>

#### Función para calcular altura:
<pre>
int calcularAltura(Nodo* raiz) { // Función altura

    if (raiz == nullptr) { // Caso base
        return 0;
    }
    int izquierda = calcularAltura(raiz->izquierdo); // Altura izquierda
    int derecha = calcularAltura(raiz->derecho); // Altura derecha
    return 1 + max(izquierda, derecha); // Retornar altura mayor
}
</pre>

La recursividad permitió encontrar automáticamente el nivel más profundo del árbol.

## EJERCICIO 4:

### Recorrido In-Order:

En C++ se utilizó un vector<int> para almacenar el recorrido.
<pre>
vector<int> resultado;
</int>
         
La función recursiva siguió el orden:
<pre>
1. Izquierda → Nodo → Derecha
</pre>

#### Función para realizar el recorrido in-order:
<pre>
void inOrderAux(Nodo* nodo,vector<int>& resultado) { // Función auxiliar

    if (nodo == nullptr) { // Caso base
        return;
    }
    inOrderAux(nodo->izquierdo, resultado); // Izquierda
    resultado.push_back(nodo->valor); // Nodo actual
    inOrderAux(nodo->derecho, resultado); // Derecha

}
vector<int> recorridoInOrder(Nodo* raiz) { // Función principal
    vector<int> resultado;
    inOrderAux(raiz, resultado);
    return resultado;
}
</pre>

La implementación permitió recorrer correctamente todos los nodos del árbol binario.
En árboles BST este recorrido devuelve los elementos ordenados.

## EJERCICIO 5:

### Inversión de árbol binario:

En C++ se desarrolló una función para invertir el árbol binario intercambiando los hijos izquierdos y derechos.

La lógica aplicada fue:
<pre>
1. Guardar temporalmente el hijo izquierdo. 
2. Intercambiar ambos hijos. 
3. Aplicar recursividad sobre cada subárbol. 
</pre>
<pre>
Nodo* temp = raiz->izquierdo;
raiz->izquierdo = raiz->derecho;
raiz->derecho = temp;
</pre>

#### Función para invertir un árbol binario:
<pre>
Nodo* invertir(Nodo* raiz) { // Función invertir

    if (raiz == nullptr) { // Caso base
        return nullptr;
    }
    Nodo* temporal = raiz->izquierdo; // Intercambio
    raiz->izquierdo = raiz->derecho;
    raiz->derecho = temporal;

    invertir(raiz->izquierdo); // Recursividad
    invertir(raiz->derecho);
    return raiz;
}
</pre>

La función recorrió todos los niveles del árbol realizando la inversión completa.

# 5. IMPLEMENTACION DE LOS EJERCICIOS EN JAVA:

## EJERCICIO 1:

### Conteo de nodos en árbol N-ario:

En Java se utilizó una clase NodoN. Cada nodo almacenaba: 
<pre>
1. Un valor entero. 
2. Una lista dinámica de hijos utilizando List<NodoN>. 
</pre>
<pre>         
class NodoN {
    int valor;
    List<NodoN> hijos;
}
</pre>
#### Función para contar nodos:
<pre>
    public static int contarNodos(NodoN raiz) {

        if (raiz == null) {  // Caso base
            return 0;
        }
        int cantidad = 1; // Contar nodo actual
        
        for (NodoN hijo : raiz.hijos) { // Recorrer hijos
            cantidad += contarNodos(hijo);
        }
        return cantidad;
    }
}
</pre>

La función contarNodos() utilizó la misma lógica recursiva implementada en C++.
Java permitió trabajar utilizando referencias a objetos sin necesidad de manejar memoria manualmente.

## EJERCICIO 2:

### Inserción en Árbol Binario de Búsqueda:

En Java se utilizó una clase Nodo con referencias a objetos.
<pre>
class Nodo {
    int valor;
    Nodo izquierdo;
    Nodo derecho;
}
</pre>

#### Función para insertar nodos:
<pre>
    public static Nodo insertar(
            Nodo raiz,
            int valor) {

        if (raiz == null) {  // Crear nodo si está vacío
            return new Nodo(valor);
        }
        if (valor < raiz.valor) { // Insertar izquierda
            raiz.izquierdo = insertar(raiz.izquierdo, valor);
        } else { // Insertar derecha
            raiz.derecho = insertar(raiz.derecho, valor);
        }
        return raiz;
    }
}
</pre>
La función insertar() siguió exactamente las mismas reglas del BST utilizadas en C++.

La diferencia principal fue que Java administra automáticamente la memoria mediante el Garbage Collector.

## EJERCICIO 3:

### Cálculo de altura del árbol:

En Java se utilizó el método Math.max() para comparar ambas alturas:
<pre>
return 1 + Math.max(alturaIzquierda, alturaDerecha);
</pre>
#### Función para calcular altura:
<pre>
 public static int calcularAltura(Nodo raiz) {

        if (raiz == null) { // Caso base
            return 0;
        }
        int izquierda = calcularAltura(raiz.izquierdo); // Altura izquierda
        int derecha = calcularAltura(raiz.derecho); // Altura derecha
        return 1 + Math.max(izquierda,derecha); // Retornar altura mayor
    }
}
</pre>
La función recorrió todos los nodos del árbol hasta calcular la profundidad máxima.
La implementación fue similar a C++, aunque utilizando referencias en lugar de punteros.

## EJERCICIO 4:

### Recorrido In-Order:

En Java se utilizó una lista dinámica List<Integer>.
<pre>
List<Integer> resultado = new ArrayList<>();
</pre>
La función recursiva realizó:
<pre>
1. Recorrido izquierdo. 
2. Guardado del nodo actual. 
3. Recorrido derecho.
</pre>
#### Función para realizar el recorrido in-order:
<pre>
public static void inOrderAux(Nodo nodo,List<Integer> resultado) { // Función auxiliar

        if (nodo == null) { // Caso base
            return;
        }
        inOrderAux(nodo.izquierdo,resultado); // Izquierda
        resultado.add(nodo.valor); // Nodo actual
        inOrderAux(nodo.derecho,resultado); // Derecha
    }
    public static List<Integer>recorridoInOrder(Nodo raiz) { // Función principal
        List<Integer> resultado = new ArrayList<>();
        inOrderAux(raiz, resultado);
        return resultado;
    }
}
</pre>
Los resultados fueron almacenados en la lista y posteriormente impresos en consola.

## EJERCICIO 5:

### Inversión de árbol binario:

En Java se utilizó la misma lógica de intercambio, pero utilizando referencias a objetos.
<pre>
Nodo temporal = raiz.izquierdo;
raiz.izquierdo = raiz.derecho;
raiz.derecho = temporal;
</pre>
#### Función para invertir un árbol binario:
<pre>
    public static Nodo invertir(Nodo raiz) {

        if (raiz == null) { // Caso base
            return null;
        }
        Nodo temporal = raiz.izquierdo; // Intercambio
        raiz.izquierdo = raiz.derecho;
        raiz.derecho = temporal;
     
        invertir(raiz.izquierdo); // Recursividad
        invertir(raiz.derecho);
        return raiz;
    }
}
</pre>
La función recursiva permitió convertir el árbol original en un árbol espejo recorriendo automáticamente todos los nodos.

# 6. CAPTURAS EN C++:

Se incluyen capturas del funcionamiento de cada programa (ejercicios):



