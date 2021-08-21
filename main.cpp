#include "source.h"
#include <iostream>
#include <string>


void gameForOne(char **field, int x, int y, short int countMove, std::string playerName);
void gameForTwo(char **field, int x, int y, short int countMove, std::string playerName, std::string playerName2);

struct Game{
    char* field;
 short int countMove;
 bool isStart;
    std::string namePL;
    std::string namePL2;
};

int main() {
 Game* game = new Game;
 game->isStart = true;


              srand(time(0));
  std::cout <<  "Привет! Рад что ты заглянул поиграть со мной в крестики-нолики!" << std::endl;
    std::string one = "имя  игрока";
    game->namePL = askSmthg(one);
    char **list;
    list = new char *[3];
    for (size_t i = 0; i < 3; i++) {
        list[i] = new char[3];
    };
    for (int j = 0; j < 3; j++) {
        for (int k = 0; k < 3; k++) {
            list[j][k] ='E';}};

  game->field = *list;

    if(choseStyle()){
    gameForOne(list, 3, 3, game->countMove, game->namePL);}
    else {
        std::string two= "имя второго игрока";
        game->namePL2 = askSmthg(two);
        gameForTwo(list, 3, 3, game->countMove, game->namePL, game->namePL2);};

    game->isStart = false;
    for (size_t i = 0; i < 3; i++) {
        delete [] list[i];
    };
    delete[] list;
    list = nullptr;
    delete game;
    std::cout <<  "Игра закончена! Спасиюо что играл!!" << std::endl;
    return 0;
};
