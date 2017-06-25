#include "Game.h"

const sf::Time Game::TimePerFrame = sf::seconds(1.f/60.f);

Game::Game(int width, int height, const char *name)
: mWindow(sf::VideoMode(width, height), name, sf::Style::Close)
{
    mWindow.setKeyRepeatEnabled(false);
    mWindow.setVerticalSyncEnabled(true);
    registerStates();
}

void Game::run()
{
    sf::Clock clock;
    sf::Time timeSinceLastUpdate = sf::Time::Zero;

    while (mWindow.isOpen())
    {
        sf::Time dt = clock.restart();
        timeSinceLastUpdate += dt;
        while (timeSinceLastUpdate > TimePerFrame)
        {
            timeSinceLastUpdate -= TimePerFrame;

            processInput();
            update(TimePerFrame);

            // Check inside this loop, because stack might be empty before update() call
//			if (mStateStack.isEmpty())
//				mWindow.close();
        }

        updateStatistics(dt);
        render();
    }
}

void Game::processInput()
{
    sf::Event event;
    while (mWindow.pollEvent(event))
    {
        //mStateStack.handleEvent(event);

        if (event.type == sf::Event::Closed)
            mWindow.close();
    }
}

void Game::update(sf::Time dt)
{
    Q_UNUSED(dt);
//    mStateStack.update(dt);
}

void Game::render()
{
    mWindow.clear();

//	mStateStack.draw();

    mWindow.setView(mWindow.getDefaultView());
//	mWindow.draw(mStatisticsText);

    mWindow.display();
}

void Game::updateStatistics(sf::Time dt)
{
    mStatisticsUpdateTime += dt;
    mStatisticsNumFrames += 1;
    if (mStatisticsUpdateTime >= sf::seconds(1.0f))
    {
        //mStatisticsText.setString("FPS: " + toString(mStatisticsNumFrames));

        mStatisticsUpdateTime -= sf::seconds(1.0f);
        mStatisticsNumFrames = 0;
    }
}

void Game::registerStates()
{
//    mStateStack.registerState<TitleState>(States::Title);
//	mStateStack.registerState<MenuState>(States::Menu);
//	mStateStack.registerState<GameState>(States::Game);
//	mStateStack.registerState<MultiplayerGameState>(States::HostGame, true);
//	mStateStack.registerState<MultiplayerGameState>(States::JoinGame, false);
//	mStateStack.registerState<PauseState>(States::Pause);
//	mStateStack.registerState<PauseState>(States::NetworkPause, true);
//	mStateStack.registerState<SettingsState>(States::Settings);
//	mStateStack.registerState<GameOverState>(States::GameOver, "Mission Failed!");
//	mStateStack.registerState<GameOverState>(States::MissionSuccess, "Mission Successful!");
}
