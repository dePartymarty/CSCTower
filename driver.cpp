#include <iostream>
#include "Game.hpp"

using namespace std;

int main(int argc, char** argv)
{
Game* game = new Game();
game->theDisplay();
return 0;
}