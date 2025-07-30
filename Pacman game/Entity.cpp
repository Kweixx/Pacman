#include "Entity.h"

//void Entity(int startX, int startY) {
//    x = startX;
//    y = startY;
//}

void Entity::setX(int newX)
{
	if (newX >= 0 && newX < 20) { // 20x20 grid check
		x = newX;
	}
}

void Entity::getX()
{

}

void Entity::setY(int newY)
{
	if (newY >= 0 && newY < 20) { // 20x20 grid check
		y = newY;
	}
}

void Entity::getY()
{

}


