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
    int fieldSizer;
};

int main() {
 Game* game = new Game;
 game->isStart = true;
  srand(time(0));
  std::cout <<  "Привет! Рад что ты заглянул поиграть со мной в крестики-нолики!" << std::endl;
    std::string one = "имя  игрока";
   // std::string fieldSize = "сколько клеток?";
    game->namePL = askSmthg(one);
  //  std::cout <<  "Размер поля какой будет?" << std::endl;
    game->fieldSizer = 3;

    char **list;
    list = new char *[game->fieldSizer];
    for (size_t i = 0; i < game->fieldSizer; i++) {
        list[i] = new char[game->fieldSizer];
    };
    for (int j = 0; j < game->fieldSizer; j++) {
        for (int k = 0; k < game->fieldSizer; k++) {
            list[j][k] ='E';}};

  game->field = *list;

    if(choseStyle()){
    gameForOne(list, game->fieldSizer, game->fieldSizer, game->countMove, game->namePL);}
    else {
        std::string two= "имя второго игрока";
        game->namePL2 = askSmthg(two);
        gameForTwo(list, game->fieldSizer, game->fieldSizer, game->countMove, game->namePL, game->namePL2);};

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
