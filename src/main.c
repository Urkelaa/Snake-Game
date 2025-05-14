#include "menu.h"
#include "game.h"
#include "snake.h"

int main() {
    int game_running = 1;

    while (game_running) {
        show_menu();
        hadle_menu_input();
        intialize_game();
    }

    return 0;
}