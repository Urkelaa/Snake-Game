#include "menu.h"
#include "game.h"
#include "snake.h"
#include <windows.h>
#include <stdio.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int game_running = 1;

    while (game_running) {
        show_menu();
        hadle_menu_input();
        intialize_game();
    }

    return 0;
}
