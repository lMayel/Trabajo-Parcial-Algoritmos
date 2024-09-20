# Mecánicas del Juego

- Movimiento: El jugador se mueve usando las teclas de flechas.

- Plantar Árboles: Usa la tecla P para plantar un árbol si tienes una semilla disponible.

- Apagar Incendios: Usa la tecla A para usar agua recolectada y apagar un fuego cercano.

- Recolectar Basura: Al caminar sobre una basura (B), la recolectas automáticamente.

- Efecto de Contaminación: Si la contaminación alcanza ciertas áreas del mapa o crece al 100%, pierdes el nivel. (Básicamente, este será el counter o timer del nivel, y si no acabamos antes, perderemos)

- Estadísticas del Jugador: Vida, agua recolectada, árboles plantados, semillas, basura recolectada.

## Elementos del Mapa

- Basura (B): Cada basura que recolectas reduce la contaminación.

- Incendios (F): Si no los apagas con agua, se expanden a otras áreas cercanas.

- Nube Tóxica (N) : Nube contaminante que se moverá por el mapa y hace daño al jugador.

- Árboles (T): Plantar un árbol reduce la expansión del fuego y la contaminación.

- Agua (W): Recolecta agua para poder apagar incendios.

- Jugador (J): Controlado por el usuario, puede moverse en todas las direcciones.

# Nivel 1: Bosque Inicial

- Tamaño del Mapa: 60x20

- Objetivo: Recolectar 5 unidades de basura y plantar 3 árboles.

- Enemigos: Ninguno en este nivel, solo áreas contaminadas y fuegos pequeños.

## Mecánica:

- El nivel está salpicado de pequeñas áreas de fuego (F) que deben apagarse con agua recolectada (W).

- Las áreas contaminadas pueden impedir el paso, pero al plantar árboles (T), desbloqueas el acceso a otras áreas.

- La basura (B) está dispersa y debe ser recolectada para disminuir la contaminación.

- Contaminación: La contaminación crece lentamente a lo largo del nivel si no recolectas basura o apagas incendios.

# Nivel 2: Parque Urbano


- Tamaño del Mapa: 80x25

- Objetivo: Recolectar 8 unidades de basura y plantar 5 árboles.

- Enemigos: Ninguno, pero el fuego comienza a expandirse si no es controlado.

## Mecánica:

- El fuego se expande si no es apagado en 10 turnos. Cada vez que un fuego se expande, la contaminación aumenta.

- Algunas áreas están bloqueadas por el fuego, y el jugador debe recolectar agua (W) para apagarlos y avanzar.

- Las áreas contaminadas necesitan ser desbloqueadas al plantar árboles (T).

- Contaminación: Crece más rápido que en el nivel anterior.

# Nivel 3: Fábrica Abandonada


- Tamaño del Mapa: 100x30

- Objetivo: Recolectar 12 unidades de basura y plantar 7 árboles.

- Enemigos: Primeros enemigos "activos" en el juego.

- Nube Tóxica (N): Se mueve lentamente por el mapa. Si el jugador la toca, pierde vida.

## Mecánica:

- El jugador debe moverse estratégicamente para evitar las nubes tóxicas mientras recolecta basura y planta árboles.

- Los incendios se expanden si no son apagados.

- Contaminación: La contaminación crece más rápido y ahora es impulsada por las nubes tóxicas.