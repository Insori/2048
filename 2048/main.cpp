#include <SFML/Graphics.hpp>
#include <iostream>
#include <time.h>

using namespace sf;

enum class Direction
{
	Left, Right, Up, Down
};

void shift(Direction d)
{

}

int main()
{
	RenderWindow app(VideoMode(504, 504), "2048");	//64*8
	app.setFramerateLimit(60);

	Texture t1, t2, t4, t8, t16, t32, t64, t128, t256, t512, t1024, t2048;
	t1.loadFromFile("images/background.png");
	t2.loadFromFile("images/2.png");
	t4.loadFromFile("images/4.png");
	t8.loadFromFile("images/8.png");
	t16.loadFromFile("images/16.png");
	t32.loadFromFile("images/32.png");
	t64.loadFromFile("images/64.png");
	t128.loadFromFile("images/128.png");
	t256.loadFromFile("images/256.png");
	t512.loadFromFile("images/512.png");
	t1024.loadFromFile("images/1024.png");
	t2048.loadFromFile("images/2048.png");

	Sprite s_back(t1), s2(t2), s4(t4), s8(t8), s16(t16), s32(t32), s64(t64), s128(t128), s256(t256), s512(t512), s1024(t1024), s2048(t2048);

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

		//draw
		app.clear();
		app.draw(s_back);

		app.display();
	}

	return 0;
}