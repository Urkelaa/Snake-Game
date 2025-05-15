#include <windows.h>
#include <stdio.h>
#include "menu.h"
#include "game.h"
#include "snake.h"
#include "globals.h"

int program_running = 1; // promenljiva za glavni loop, imacemo odvojenu promeljivu za game_running
                         // kako bi mogli da se vratimo u menu a da ne isklucimo ceo program

int main() {
    SetConsoleOutputCP(CP_UTF8); // Set console output to UTF-8 for the splashart to work

    while (program_running) {
        show_menu();
        hadle_menu_input();
    }

    return 0;
}
