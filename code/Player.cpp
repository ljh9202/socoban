#include "Player.h"


Player::Player(GameSpace* owner, int ax, int ay) :GameObject(owner,ax,ay)
{
}


Player::~Player()
{
}

bool Player::CheckCollision(int x, int y)
{
	return 0;
}

void Player::Move(int newX, int newY)
{
	GameObject *go = GetGameSpace()->GetGameObject(newX, newY);
}