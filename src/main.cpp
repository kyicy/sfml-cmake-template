#include "pch.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 400), "SFML works!", sf::Style::Default);
	window.setFramerateLimit(60);

	sf::CircleShape shape(50.f);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		// Update
		// Draw
		window.clear(sf::Color::Green);

		// Draw everything
		window.draw(shape);
		window.display();
	}
	return 0;
}