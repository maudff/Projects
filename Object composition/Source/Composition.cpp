#include "Composition.h"

//////////////////////////////////////////////////////////////////

Creature::Creature() : m_position(0, 0)
{

}

//////////////////////////////////////////////////////////////////

Creature::Creature(int x, int y)  :m_position( x , y )
{
}

//////////////////////////////////////////////////////////////////

void Creature::move(int x, int y)
{
	m_position.setPosition(x, y);
}

//////////////////////////////////////////////////////////////////