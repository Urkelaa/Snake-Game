#include <stdio.h>
#include <windows.h>
#include "game.h"
#include "globals.h"

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
}

void hadle_menu_input(){
    int choice = 0;
    scanf("%d", &choice);
    while (choice < 0 || choice > 4){
        printf("Invalid input. Please enter a number between 1 and 4.\n");
        scanf("%d", &choice);
    }

    switch (choice)
    {
    case 1:
        /* code */
        void intialize_game();
        break;
    case 2:
        /* code */
        show_instructions();
        break;
    case 3:
        /* code */
        show_options();
        break;
    case 4:
        /* code */
        program_running = 0;
        return;
        break;
    }
}

void show_instructions(){}
void show_options(){}