#pragma once

#include <vector>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <thread>
#include <chrono>
#include <windows.h>

using namespace System;
using Milliseconds = std::chrono::milliseconds;

using std::string;

//Tama�o del mapa
//constexpr int ALTO_MAPA { 100 };
//constexpr int ANCHO_MAPA { 100 };

// Caracteres de movimiento del jugador
constexpr int ARRIBA { 72 };
constexpr int IZQUIERDA{  75 };
constexpr int DERECHA { 77 };
constexpr int ABAJO { 80 };

//Funci�n reemplazo de _sleep() para hacer pausas:
void pause(int milliseconds) {
    std::this_thread::sleep_for(Milliseconds(milliseconds));
}


// Funci�n posici�n 
void cursor(int x, int y) {

    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;

    SetConsoleCursorPosition(hCon, dwPos);
}

// Ocultar cursor en la consola
void ocultarCursor() {

    Console::CursorVisible = false;

}

// Funci�n para cambiar el color del texto
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