#ifndef GAME_H
#define GAME_H

#include <QObject>

#include <SFML/Graphics.hpp>

#include <SFML/System/Time.hpp>
//#include <SFML/Graphics/RenderWindow.hpp>
//#include <SFML/Graphics/Text.hpp>

class Game
{
public:
    Game(int width, int height, const char* name);
    void run();

private:
    void					processInput();
    void					update(sf::Time dt);
    void					render();

    void					updateStatistics(sf::Time dt);
    void					registerStates();

private:
    static const sf::Time	TimePerFrame;

    sf::RenderWindow mWindow;

    sf::Text				mStatisticsText;
    sf::Time				mStatisticsUpdateTime;
    std::size_t				mStatisticsNumFrames;
};

#endif // GAME_H
