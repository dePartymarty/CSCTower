#include "Game.hpp"
#include <stdlib.h>
#include <iostream>

using namespace std;

Game::Game()
{
    Disk* d1 = new Disk(1);
    Disk* d2 = new Disk(2);
    Disk* d3 = new Disk(3);

int i = 0;

    while(i <= 3)
    {
        theTowers[i] = new Tower();
        i++;
    }

    this->theTowers[0]->push(d3);
    this->theTowers[0]->push(d2);
    this->theTowers[0]->push(d1);
}

void Game::theDisplay()
{
    this->theTowers[0]->Tower::display();
    this->theTowers[1]->Tower::display();
    this->theTowers[2]->Tower::display();
    

}
