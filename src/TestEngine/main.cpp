#include <QObject>
#include <SFML/Graphics.hpp>
#include "Game.h"

int main(int argc, char *argv[])
{
    Q_UNUSED(argc)
    Q_UNUSED(argv)

    Game *g = new Game();

    sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Hello World - SFML");
    while (App.isOpen())
        {
            // Проверяем события (нажатие кнопки, закрытие окна и т.д.)
            sf::Event Event;
            while (App.pollEvent(Event))
            {
                // если событие "закрытие окна":
                if (Event.type == sf::Event::Closed)
                     //закрываем окно
                    App.close();
            }

            // очищаем экран, и заливаем его синим цветом
            App.clear(sf::Color(0,0,255));

            // отображаем на экран
            App.display();
        }
    return 0;
}
