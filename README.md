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

# 4. Detalles de Funcionalidad

## 4.1. Inicialización y Configuración

Configuración Inicial:

Mapa: Inicializa el mapa con una cuadrícula de tamaño definido (por ejemplo, 20x20). Coloca los recursos (agua, semillas, residuos reciclables) y enemigos (fuentes de contaminación) en posiciones aleatorias o predeterminadas.

Personaje: Posiciona al "Guardián del Medio Ambiente" en una ubicación inicial del mapa. Asigna el número de vidas inicial y recursos (si corresponde).

Recursos y Enemigos: Distribuye los recursos y enemigos en el mapa de manera estratégica para crear un desafío equilibrado.

## 4.2. Dinámica del Juego

Movimiento del Personaje:

Entradas del Usuario: Usa teclas de dirección (arriba, abajo, izquierda, derecha) para mover al personaje por el mapa.

Actualización de Posición: Verifica si la nueva posición del personaje es válida (dentro de los límites del mapa y sin colisiones indeseadas).

Interacción con Recursos:

Recolectar Recursos: Cuando el personaje se mueve a una celda que contiene un recurso, se activa la recolección del recurso correspondiente. El recurso se elimina del mapa y se añade a la colección del jugador.

Uso de Recursos: Permite al jugador usar los recursos recolectados para plantar árboles y limpiar la contaminación.

Interacción con Enemigos:


Colisiones con Contaminación: Si el personaje colisiona con una fuente de contaminación, se pierde una vida o energía. La fuente de contaminación puede expandirse si no se controla adecuadamente.

Expansión de Contaminación: Las fuentes de contaminación tienen una tasa de expansión que aumenta la contaminación en áreas adyacentes con el tiempo.

## 4.3. Gestión del Juego

Estado del Juego:

Actualizar Estado: Después de cada acción del jugador, actualiza el estado del mapa, los recursos disponibles, la posición del personaje y los enemigos.

Verificación de Condiciones de Victoria: Comprueba si el jugador ha reforestado al menos el 70% del mapa. Si es así, se muestra un mensaje de "GANASTE" y el juego termina.

Verificación de Condiciones de Derrota: Comprueba si las vidas del jugador llegan a 0 o si no tiene suficientes recursos para continuar. Si cualquiera de estas condiciones se cumple, se muestra un mensaje de "PERDISTE" y el juego termina.

Tiempo y Recursos:

Contador de Tiempo: Si el juego tiene un límite de tiempo, implementa un contador que decremente a lo largo del juego y termine el juego cuando el tiempo se agote.

Gestión de Recursos: Mantén un registro de los recursos recolectados por el jugador y su uso para la reforestación y limpieza.

## 4.4. Interfaz de Usuario

Visualización del Mapa:

Dibujar Mapa: Muestra el mapa en la consola utilizando caracteres ASCII para representar el personaje, recursos, enemigos y áreas contaminadas.

Actualizar Pantalla: Redibuja el mapa después de cada movimiento o acción para reflejar los cambios en el estado del juego.

Mensajes al Usuario:

Mensajes de Estado: Proporciona mensajes claros al usuario sobre el progreso, recursos disponibles, vidas restantes y eventos importantes (como ganar o perder el juego).

Entrada del Usuario:

Lectura de Comandos: Implementa la lectura de las teclas de dirección y otras entradas del usuario para controlar al personaje y tomar decisiones en el juego.

## 4.5. Estrategias de Recolección y Uso de Recursos

Recolección Eficiente: Diseña el juego para que el jugador tenga que tomar decisiones estratégicas sobre qué recursos recolectar y cómo usarlos para maximizar la eficiencia en la restauración del ecosistema.

Equilibrio entre Recursos: Asegúrate de que los recursos sean suficientes para alcanzar el objetivo del juego pero no tan abundantes que el desafío se pierda.
