#pragma once
#include "../Headers/Animaciones.h"

// logo del equipo (sujeto a cambios) Team Trees :D
void logo() {
	//Logo estático que irá al principio de la consola, no es necesario settear posición del cursor
	std::cout << "::::::::::: ::::::::::     :::     ::::    ::::     ::::::::::: :::::::::  :::::::::: ::::::::::  ::::::::  \n";
	std::cout << "    :+:     :+:          :+: :+:   +:+:+: :+:+:+        :+:     :+:    :+: :+:        :+:        :+:    :+: \n";
	std::cout << "    +:+     +:+         +:+   +:+  +:+ +:+:+ +:+        +:+     +:+    +:+ +:+        +:+        +:+        \n";
	std::cout << "    +#+     +#++:++#   +#++:++#++: +#+  +:+  +#+        +#+     +#++:++#:  +#++:++#   +#++:++#   +#++:++#++ \n";
	std::cout << "    +#+     +#+        +#+     +#+ +#+       +#+        +#+     +#+    +#+ +#+        +#+               +#+ \n";
	std::cout << "    #+#     #+#        #+#     #+# #+#       #+#        #+#     #+#    #+# #+#        #+#        #+#    #+# \n";
	std::cout << "    ###     ########## ###     ### ###       ###        ###     ###    ### ########## ##########  ######## \n";

}

// imprimir arboles decorativos en el menu
void arbol_menu(int posX, int posY) {
	cursor(posX, posY); 
	cursor(posX, posY+1); std::cout << "       _-_ "  ;
	cursor(posX, posY+2); std::cout << "    /~~   ~~\\" ;
	cursor(posX, posY+3); std::cout << " /~~         ~~\\" ;
	cursor(posX, posY+4); std::cout << "{               }" ;
	cursor(posX, posY+5); std::cout << " \\  _-     -_  /" ;
	cursor(posX, posY+6); std::cout << "   ~  \\\\ //  ~" ;
	cursor(posX, posY+7); std::cout << "_- -   | | _- _" ;
	cursor(posX, posY+8); std::cout << "  _ -  | |   -_";
	cursor(posX, posY+9); std::cout << "      // \\\\" ;
}
void main_menu() {

	//Pantalla de carga
	loading(2);

	color(6);

	std::cout << "\n"; logo();

	//Imprimir arboles en el menú (cambiar a gusto)
	arbol_menu(1, 12);
	color(5);
	arbol_menu(18, 16);
	color(6);
	arbol_menu(70, 16);
	color(5);
	arbol_menu(90, 12);

	color(5);

	//Menú de opciones:
	cursor(40, 12); std::cout << "---------- Jugador ----------";
	cursor(48, 15); std::cout << "1. JUGAR\n";
	cursor(48, 17); std::cout << "2. COMO JUGAR\n";
	cursor(48, 19); std::cout << "3. CREDITOS\n";
	cursor(48, 21); std::cout << "4. OPCIONES\n";
	cursor(48, 23); std::cout << "5. SALIR\n";
	cursor(40, 25); std::cout << "-----------------------------";

}

