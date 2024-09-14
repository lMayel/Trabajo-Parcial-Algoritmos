#pragma once

//Animaci�n para la pantalla de carga
void lineas_animadas() {

	//posiciones donde empezar�n a dibujarse las l�neas (ajustar dependiendo de la consola)
	int derechaX = 37, arribaY = 8, izquierdaX = 76, abajoY = 12;

	//Primero dibuja las lineas horizontales, y cuando termina dibuja las verticales
	for (int i = 0; i < 40; i++) {
		cursor(derechaX, arribaY); std::cout << char(254);
		cursor(izquierdaX, abajoY); std::cout << char(254);

		derechaX++;
		izquierdaX--;

		pause(20);

		//l�mite, ajustar dependiendo de las posiciones de inicio
		if (derechaX == 77 && izquierdaX == 36) {
			for (int j = 0; j < 5; j++) {
				cursor(derechaX, arribaY); std::cout << char(254);
				cursor(izquierdaX, abajoY); std::cout << char(254);
				arribaY++; abajoY--;
				pause(70);
			}
		}
	}
}

void loading(int times) {

	/*Puse como par�metro "times" para que se pueda manipular las veces que
	har� la animaci�n dependiendo de la transici�n de una escena a otra*/

	srand(static_cast<unsigned>(time(0)));
	char text[] = "LOADING...";

	//posiciones donde se dibujar� la palabra Loading
	int positions[10] = { 50,52,54,56,58,60,62,64,66,68 };

	for (int i = 0; i < times; i++) {
		color(rand() % 12 + 1);

		// Primero dibuja las l�neas y luego la palabra Loading
		lineas_animadas();

		for (int j = 0; j < 10; j++) {
			color(rand() % 12 + 1); //Se aplicar� un color aleatorio para cada letra
			cursor(positions[j], 9); std::cout << text[j]; pause(70);
			cursor(positions[j], 9); std::cout << " "; pause(30);
			cursor(positions[j], 10); std::cout << text[j]; pause(30);
		}
		pause(20);
		system("cls");
	}
}


