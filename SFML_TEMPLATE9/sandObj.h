#pragma once 
#include <SFML/Graphics.hpp> 
#include "settings.h" 
#include "gameObj.h" 
class SandObj : public gameObj {
public:
	SandObj(std::string FILENAME,sf::Vector2f pos) {
		texture.loadFromFile(FILENAME);
		sprite.setTexture(texture);
		sprite.setPosition(pos);
	}
	void update() {}

	void draw(sf::RenderWindow& window) { window.draw(sprite); }
};