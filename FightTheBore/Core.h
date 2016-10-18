#pragma once
#include <SFML/Graphics.hpp>
#include "IState.h"

class Core
{
public:
	Core();
	void	run();
	virtual ~Core();
protected:
	sf::RenderWindow _window;
	sf::Event		_event;
};

