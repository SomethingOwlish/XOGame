//
// Created by Morgan Valravn on 16.08.2021.
//
#include <string>
#include <iostream>
#include "source.h"


void gameForOne(char **field, int x, int y, short int countMove, std::string playerName) {
    using namespace std;
    std::cout << "Будем играть с компьютером!" << std::endl;
    std::cout << "Вот игровое поле:" << std::endl;
    dispField(field, x, y);
    bool krestik = true;
    int a, b;
    while (true) {
        if (krestik) {
            userTurn(field, x, y, playerName, 'x');
        } else {
            cout << "Ходят нолики" << endl;
            Computers(x, y, field);
        }

        dispField(field, x, y);

        if (isWinner(field)) {
            if (krestik) { cout << "Крестики победили!" << endl; }
            else { cout << "Ноликии победили!" << endl; }
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