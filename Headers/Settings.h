#pragma once

#include <vector>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <algorithm>
#include <thread>
#include <chrono>

using namespace System;
using Milliseconds = std::chrono::milliseconds;

using std::string;

//Tamaño del mapa
constexpr int ALTO_MAPA { 20 };
constexpr int ANCHO_MAPA { 20 };

//Función reemplazo de _sleep() para hacer pausas:
void pause(int milliseconds) {
    std::this_thread::sleep_for(Milliseconds(milliseconds));
}


// Función posición
void cursor(int x, int y) {
	Console::SetCursorPosition(x, y);
}

// Función para cambiar el color del texto
void color(int x) {
    switch (x) {
    case 1: Console::ForegroundColor = ConsoleColor::White; break;
    case 2: Console::ForegroundColor = ConsoleColor::Red; break;
    case 3: Console::ForegroundColor = ConsoleColor::Blue; break;
    case 4: Console::ForegroundColor = ConsoleColor::Yellow; break;
    case 5: Console::ForegroundColor = ConsoleColor::Magenta; break;
    case 6: Console::ForegroundColor = ConsoleColor::Green; break;
    case 7: Console::ForegroundColor = ConsoleColor::Cyan; break;
    case 8: Console::ForegroundColor = ConsoleColor::DarkCyan; break;
    case 9: Console::ForegroundColor = ConsoleColor::DarkGray; break;
    case 10: Console::ForegroundColor = ConsoleColor::DarkGreen; break;
    case 11: Console::ForegroundColor = ConsoleColor::DarkMagenta; break;
    case 12: Console::ForegroundColor = ConsoleColor::DarkYellow; break;
    case 13: Console::ForegroundColor = ConsoleColor::DarkRed; break;
    case 14: Console::ForegroundColor = ConsoleColor::DarkBlue; break;
    default: 
        Console::ForegroundColor = ConsoleColor::Gray; 
        break;
    }
}