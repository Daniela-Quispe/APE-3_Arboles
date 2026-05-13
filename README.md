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
      2   3    4
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


