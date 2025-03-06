#include "Ball.h"
#include <iostream>

void Ball::update(float dt)
{
	move(velocity * dt);
}
