#pragma once
class Mapa {
private:
    int ancho;
    int alto;
    int nivelActual;

public:

    // Constructor
    Mapa(int a, int h) : ancho(a), alto(h), nivelActual(1) {}

    // Método para dibujar el mapa
    void dibujarLimites() {
        // Dibuja el borde superior
        for (int i = 0; i < ancho; ++i) {
            std::cout << char(205); // Línea horizontal
        }
        std::cout << char(187) << std::endl; // Esquina superior derecha

        // Dibuja los lados izquierdo y derecho
        for (int i = 1; i < alto - 1; ++i) {
            std::cout << char(186); // Lado izquierdo
            // Espacio para el interior del mapa
            for (int j = 1; j < ancho - 1; ++j) {
                std::cout << " "; // Espacio vacío
            }
            std::cout << char(186) << std::endl; // Lado derecho
        }

        // Dibuja el borde inferior
        for (int i = 0; i < ancho; ++i) {
            std::cout << char(205); // Línea horizontal
        }
        std::cout << char(188) << std::endl; // Esquina inferior derecha
    }

    // Método para establecer el nivel actual
    void setNivel(int nivel) {
        if (nivel > 0 && nivel <= 5) {
            nivelActual = nivel;
            // Aquí puedes cargar el mapa correspondiente al nivel
        }
    }

    // Método para obtener el nivel actual
    int obtenerNivel() {
        return nivelActual;
    }
};

