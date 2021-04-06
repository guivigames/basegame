/*
compile in linux: g++ -std=c++17 game.cpp main.cpp -o game `pkg-config --cflags --libs sdl2`

*/
#include "game.h"

int main(int argc, char *argv[])
{
    TheGame::Instance()->Init();

    while (TheGame::Instance()->IsGameOver())
    {
        TheGame::Instance()->HandleEvents();
        TheGame::Instance()->Update();
        TheGame::Instance()->Draw();
    }
}