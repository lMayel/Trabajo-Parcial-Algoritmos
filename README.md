# Trabajo-Parcial-Algoritmos

# 1. Requisitos del Proyecto

Lenguaje y Entorno: C++ con librerías como conio.h y system, en Visual Studio 2022 usando .NET Framework.

Representación Gráfica: Uso de caracteres ASCII para todos los elementos del juego.

Estructura: Implementación en consola, sin imágenes.

# 2. Partes del Videojuego

## 2.1. Clases Principales

### Juego

Responsabilidad: Controlar la lógica general del juego, gestionar el estado del juego y coordinar la interacción entre los diferentes componentes.

_Atributos_:

mapa (matriz 2D para representar el entorno del juego)

jugador (objeto de la clase Personaje)

recursos (colección de recursos disponibles en el mapa)

enemigos (lista de enemigos en el mapa)

tiempoRestante (contador para el tiempo del juego)

vidas (número de vidas restantes del jugador)

_Métodos_:

iniciarJuego()

dibujarMapa()

actualizarEstado()

gestionarEntrada()

verificarCondicionesVictoria()

verificarCondicionesDerrota()


### Personaje

Responsabilidad: Representar al jugador y gestionar su movimiento y estado.

_Atributos_:

posX (posición en el eje X)

posY (posición en el eje Y)

vidas (número de vidas del personaje)

recursosRecolectados (recursos que el jugador ha recogido)

_Métodos_:

mover(int direccion) (mover al personaje en la dirección indicada)


recolectarRecurso(Recurso recurso) (agregar un recurso a la colección del jugador)

plantarArbol() (plantar un árbol en la ubicación actual)

limpiarContaminacion() (limpiar contaminación en la ubicación actual)

### Recurso

Responsabilidad: Representar los recursos que el jugador puede recoger y utilizar.

_Atributos_:

tipo (tipo de recurso: agua, semillas, residuos reciclables)

posX (posición en el eje X)

posY (posición en el eje Y)

_Métodos_:

esRecursoValioso() (determina si el recurso es útil para el jugador)

### Enemigo


Responsabilidad: Representar las fuentes de contaminación y gestionar su expansión.

_Atributos_:

posX (posición en el eje X)

posY (posición en el eje Y)

tasaExpansion (cuánto se expande la contaminación)

_Métodos_:

expandirContaminacion() (ampliar área contaminada)

esContaminacionPeligrosa() (verificar si el área es peligrosa para el jugador)

### Mapa

Responsabilidad: Representar y gestionar el entorno del juego.
_Atributos_:

grid (matriz 2D representando el mapa del juego)

_Métodos_:

dibujarMapa()

actualizarCelda(int x, int y, char simbolo) (actualiza una celda específica del mapa)


# 3. Estructura del Juego

Inicio del Juego: Configuración inicial del mapa, personaje y recursos.

Ejecución del Juego: Bucle principal donde se gestionan las entradas del usuario, se actualizan los estados y se verifica el avance.

Finalización del Juego: Determinación del resultado (victoria o derrota) y visualización del mensaje final.
