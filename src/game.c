#include "game.h"
#define WIDTH 20
#define HEIGHT 20

typedef struct {
    int x, y;
} Koord;

typedef struct{
    Koord body[100];    //Zmija je niz 2D koordinata
    int length;         //Duzina zmije
    char direction;     //Trenutna direkcija u kojoj ide (W, A, S, D)
} Snake;

Koord food;             
Snake snake;            //globalna promenljiva koja predstavlja zmiju
int game_over = 0;      //flag za kraj

void intialize_game(){
    snake.length = 1;
    snake.body[0].x = WIDTH/2;
    snake.body[0].y = HEIGHT/2;
    snake.direction = 'D';
    generate_food();
}                           //Funkcija postavlja igru na pocetak

void move_snake(){
    for(int i = snake.length-1; i>0; i--){
        snake.body[i] = snake.body[i-1];    //petlja koja ispomera telo zmije bez glave za jedno mesto u napred;  Posmatramo da je glava nulti indeks u telu
    }

    switch(snake.direction){
        case 'W': snake.body[0].y++;
            break;
        case 'A': snake.body[0].x--;
            break;
        case 'S': snake.body[0].y--;
            break;
        case 'D': snake.body[0].x++;
            break;
    }                                       //pomeranje glave zmije u odnosu na unos
}   

void check_collision(){
    Koord glava = snake.body[0];

    if(glava.x < 0 || glava.x >= WIDTH || glava.y < 0 || glava.y >= HEIGHT)
        game_over = 1;

    for(int i = 1; i<snake.direction-1; i++){
        if(glava.x == snake.body[i].x && glava.y == snake.body[i].y)
            game_over = 1;
    }
}

void generate_food(){
    int a = 1;

    while(a){
        food.x = rand() % WIDTH;
        food.y = rand() % HEIGHT;
        a = 0;
        for(int i = 1; i<snake.length-1; i++){
            if(food.x == snake.body[i].x || food.y == snake.body[i].y){
                a = 1;
                break;
            }
        }
    }
}
