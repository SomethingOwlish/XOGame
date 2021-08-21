//
// Created by Morgan Valravn on 16.08.2021.
//

#ifndef XOGAME_SOURCE_H
#define XOGAME_SOURCE_H
#include <iostream>
#include <string>

std::string askSmthg(std::string acked);
int  askSmInt(std::string acked);
std::string hello(std::string playerN);
bool choseStyle();
//void gameForTwo();
void dispField(char **field, int x, int y);
int Computers(int a, int b, char** arr);
short int haveEmptyField(char** field, short int count);
bool isWinner(char** arr);
void userTurn(char **field, int x, int y, std::string playerName, char mark);
#endif //XOGAME_SOURCE_H
