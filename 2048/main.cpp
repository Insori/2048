#include <SFML/Graphics.hpp>
#include <iostream>
#include <time.h>

using namespace sf;

enum class Direction
{
	Left, Right, Up, Down
};

//1:09
void shift(Direction d)
{

}

//1:16
int main()
{
	RenderWindow app(VideoMode(504, 504), "2048");

	Texture tblank, t2, t4, t8, t16, t32, t64, t128, t256, t512, t1024, t2048;
	tblank.loadFromFile("images/background.jpg");

	while (app.isOpen())
	{
		Event event;

		while (app.pollEvent(event))
		{
			if (event.key.code == Event::KeyPressed)
			{
				if (event.key.code == Keyboard::Left) {}
				else if (event.key.code == Keyboard::Right) {}
				else if (event.key.code == Keyboard::Up) {}
				else if (event.key.code == Keyboard::Down) {}
			}
			else if (event.type == Event::Closed)
				app.close();
		}
	}

	return 0;
}