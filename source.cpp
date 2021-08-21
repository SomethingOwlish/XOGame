//
// Created by Morgan Valravn on 16.08.2021.
//

#include <string>
#include <iostream>


std::string askSmthg(std::string acked){
    std::string par;
    std::cout << "Введите " << acked << "..." << std::endl;
    std::cin >> par;
    return par;
};

int  askSmInt(std::string acked){
    int par;
    std::cout << "Введите " << acked << "..." << std::endl;
    std::cin >> par;
    return par;
};

std::string hello(std::string playerN){
    std::cout << "Представься пожалуйста " << playerN << std::endl;
    std::string name;
    name = askSmthg(playerN);
     std::cout << "Привет " << name << "!" << std::endl;
     return name;
};

 bool choseStyle(){
    askAgain:
    int select;
    std::string players="Число игроков";
    select = askSmInt(players);
    if (select == 1) {
        return true;
    } else if (select == 2){
        return false;
    } else {
        std::cout << "Не может быть количество игроков " << select << "/n";
        std::cout  << "Введите число от 1 до 2" << std::endl;
        goto askAgain;
    }
}

void dispField(char **field,int x,int y)
{
    for (int i = 0; i < x; i++){
        for (int k = 0; k < y; k++) {
            std::cout << field[i][k] << " ";
        } std::cout << '\n';};
    printf("\n");
}

bool isWinner(char** arr)
{
    bool win = false;//нолики победили если эти ячейки массива заполнеты ноликами:
    if (arr[0][0] != 'E' && arr[0][0] == arr[0][1] && arr[0][0] == arr[0][2]) win = true;//первая строка
    if (arr[1][0] != 'E' && arr[1][0] == arr[1][1] && arr[1][0] == arr[1][2]) win = true;//вторая строка
    if (arr[2][0] != 'E' && arr[2][0] == arr[2][1] && arr[2][0] == arr[2][2]) win = true;//третья строка

    if (arr[0][0] != 'E' && arr[0][0] == arr[1][0] && arr[0][0] == arr[2][0]) win = true;//1й столбец
    if (arr[0][1] != 'E' && arr[0][1] == arr[1][1] && arr[0][1] == arr[2][1]) win = true;//2й столбец
    if (arr[0][2] != 'E' && arr[0][2] == arr[1][2] && arr[0][2] == arr[2][2]) win = true;//3й столбец

    if (arr[0][0] != 'E' && arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2]) win = true;//диагональ слева на право вниз
    if (arr[0][2] != 'E' && arr[0][2] == arr[1][1] && arr[0][2] == arr[2][0]) win = true;//диагональ справа на лево вниз

    return  win;
}

short int haveEmptyField(char** field, short int count)
{
    count = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            count = field[i][j] == 'E' ? count : count + 1;
    return count;}

    int Computers(int x, int y, char** arr)
    { int yes, a, b;
       do {a = 0 + rand() % 2;
         b = 0 + rand() % 2;
        if (arr[a][b] !='E'|| x > 3 || y > 3 || x < -1 || y < -1){
            yes = true;
        }
        else {
            arr[a][b] = 'O';
            yes = false;
        }} while (yes);
        return 0;
    }

void userTurn(char **field, int x, int y, std::string playerName, char mark){
std::cout << "Ходит " << playerName << std::endl;
int a, b;
again:
    std::cin >> a >> b;

if (field[a][b] !='E'|| x > 3 || y > 3 || x < -1 || y < -1)
{
    std::cout << "Вне границ поля!!" << std::endl;
dispField(field, x, y);
goto again;
}
else
{
field[a][b] = mark; };
}