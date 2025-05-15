#include <stdio.h>
#include <windows.h>
#include <conio.h>  // for kbhit() and getch()
#include "game.h"
#include "globals.h"
#include "utils.h"

void show_menu(){
    printf("\n");
    printf("            ███████╗███╗   ██╗ █████╗ ██╗  ██╗███████╗\n");
    printf("            ██╔════╝████╗  ██║██╔══██╗██║ ██╔╝██╔════╝\n");
    printf("            ███████╗██╔██╗ ██║███████║█████╔╝ █████╗  \n");
    printf("            ╚════██║██║╚██╗██║██╔══██║██╔═██╗ ██╔══╝  \n");
    printf("            ███████║██║ ╚████║██║  ██║██║  ██╗███████╗\n");
    printf("            ╚══════╝╚═╝  ╚═══╝╚═╝  ╚═╝╚═╝  ╚═╝╚══════╝\n");
    printf("\n");
    printf("    ██████╗  █████╗ ███╗   ███╗███████╗      ▄▄▀█▄───▄───────▄           \n");
    printf("    ██╔════╝ ██╔══██╗████╗ ████║██╔════╝     ▀▀▀██──███─────███           \n");
    printf("    ██║  ███╗███████║██╔████╔██║█████╗       ░▄██▀░█████░░░█████░░       \n");
    printf("    ██║   ██║██╔══██║██║╚██╔╝██║██╔══╝        ███▀▄███░███░███░███░▄      \n");
    printf("    ╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗      ▀█████▀░░░▀███▀░░░▀██▀        \n");
    printf("    ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝      \n");
    printf("                        ╔═════════════════╗                  \n");
    printf("                        ║  MAIN MENU      ║                  \n");
    printf("                        ╠═════════════════╣                  \n");
    printf("                        ║ 1. Start Game   ║                  \n");
    printf("                        ║ 2. Instructions ║                  \n");
    printf("                        ║ 3. Options      ║                  \n");
    printf("                        ║ 4. Exit         ║                  \n");
    printf("                        ╚═════════════════╝                  \n");
    printf("\n");
    handle_menu_input();
}

void handle_menu_input() {
    int choice = 0;

    while (1) {
        // Wait for a key to be pressed
        if (_kbhit()) {
            choice = _getch() - '0';  // Convert char to int (e.g., '1' -> 1)

            // Check if the choice is valid
            if (choice >= 1 && choice <= 4) {
                break;
            } 
        }
    }
    // Process the valid choice
    switch (choice) {
        case 1:
            intialize_game();
            break;
        case 2:
            show_instructions();
            break;
        case 3:
            show_options();
            break;
        case 4:
            program_running = 0;
            return;
        default:
            break;  // This case should never occur due to input validation
    }
}

void show_instructions(){
    clear_screen();
    printf("     ___  _  _  ___  _____  ___  _   _   ___  _____  ___   ___   _  _  ___      \n");
    printf("    |_ _|| \\| |/ __||_   _|| _ \\| | | | / __||_   _||_ _| / _ \\ | \\| |/ __|     \n");
    printf("     | | | .  |\\__ \\  | |  |   /| |_| || (__   | |   | | | (_) || .  |\\__ \\     \n");
    printf("    |___||_|\\_||___/  |_|  |_|_\\ \\___/  \\___|  |_|  |___| \\___/ |_|\\_||___/     \n");
    printf("                                                                                \n");
    printf(",---,---,---,---,---,---,---,---,---,---,---,---,---,-------,                   \n");
    printf("|   |   |   |   |   |   |   |   |   |   |   |   |   |       |    W - move up    \n");
    printf("|---'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-----|    A - move left  \n");
    printf("|     | Q | w |   |   |   |   |   |   |   | P |   |   |     |    S - move down  \n");
    printf("|-----',--',--',--',--',--',--',--',--',--',--',--',--'|    |    D - move right \n");
    printf("|     | A | S | D |    |   |   |   |   |   |   |   |   |    |                   \n");
    printf("|----,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'-,-'---'----|    P - pause game \n");
    printf("|    |   |   |   |   |   |   |   |   |   |   |   |          |    Q - quit game  \n");
    printf("|----'-,-',--'--,'---'---'---'---'---'---'-,-'---',--,------|                   \n");
    printf("|      |  |     |                          |      |  |      |    Go back to menu\n");
    printf("'------'--'-----'--------------------------'------'--'------'       -> ESC <-   \n");
    char ch = '\0';
    while (1) {
        if (_kbhit()) {
            ch = _getch();  // Get the key without pressing Enter
            if (ch == 27) {
                break;  // Exit the loop if ESC is pressed
            }
        }
    }
    clear_screen();
    show_menu();
}
void show_options(){}