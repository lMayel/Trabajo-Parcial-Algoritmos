#include <iostream>
#include "../Headers/Settings.h"
#include "../Headers/Interfaz.h"
#include "../classes/Mapa.h"

int main() {
	//main_menu();
	Mapa mapa(120, 40); 
	mapa.dibujarLimites(); // Dibuja el mapa en la consola
	system("pause>0");
	return 0;
}