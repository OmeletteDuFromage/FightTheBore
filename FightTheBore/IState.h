#pragma once

#include <SFML/Graphics.hpp>
#include <queue>

class IState
{
public:
	virtual ~IState() {};
	virtual void	display(sf::RenderWindow &window) = 0;
	virtual void	resume() = 0;
	virtual void	pause() = 0;
	virtual void	update(const sf::Time &time) = 0;
	virtual void	handleEvents(sf::RenderWindow &window, std::queue<sf::Event> &events) = 0;
	virtual	IState	*newState() = 0;
};

