/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();

	void setupFontAndText();
	void setupSprite();
	void moveTarget();

	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen
	sf::Texture m_logoTexture; // texture used for sfml logo
	sf::Sprite m_logoSprite; // sprite used for sfml logo
	bool m_exitGame; // control exiting game

	sf::RectangleShape m_wall; // box for the wall
	sf::RectangleShape m_target;// box for target to fire at
	sf::Vector2f m_targetLocation; // location of target
	sf::Vector2f m_targetVelocity{ 0.6f,0.0f }; // velocity of the target

	sf::Texture m_gumballTexture; // texture for the gumba
	sf::Sprite m_gumbaSprite;  // sprite for the gumba

};
#endif // !GAME_HPP

