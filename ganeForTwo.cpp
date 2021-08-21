//
// Created by Morgan Valravn on 16.08.2021.
//
#include <string>
#include <iostream>
#include "source.h"

void gameForTwo(char **field, int x, int y, short int countMove, std::string playerName, std::string playerName2)
{
using namespace std;
std::cout << "Будем играть вдвоем" << std::endl;
std::cout << "Вот игровое поле:" << std::endl;
dispField(field, x, y);
bool krestik = true;
char mark;
int a, b;
while (true) {
if (krestik) {
    mark ='X';
userTurn(field, x, y, playerName, mark);
} else {
    mark ='O';
userTurn(field, x, y, playerName2, mark);
}

dispField(field, x, y);

if (isWinner(field)) {
if (krestik) { cout << playerName << " победил!" << endl; }
else { cout << playerName2 << " победил!" << endl; }
break;
} else {
if (haveEmptyField(field, countMove) == 9) {
dispField(field, x, y);
cout << "Ничья" << endl;
break;
} else {};
}
krestik = !krestik;
};


};