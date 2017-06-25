#include <QObject>

#include "Game.h"

int main(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)

    Game *g = new Game(800, 600, "Game");
    g->run();
    return 0;
}
