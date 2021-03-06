#include "Singleton.h"

Singleton* Singleton::m_singleton = NULL;

/////////////////////////////////////////////////////////////////////

Singleton::Singleton()
{

}

/////////////////////////////////////////////////////////////////////

Singleton* Singleton::getInstance()
{
	if (m_singleton == NULL)
	{
		m_singleton = new Singleton();
		std::cout << "Singleton object initialised" << std::endl;
	}
	return m_singleton;
}

/////////////////////////////////////////////////////////////////////

Singleton::~Singleton()
{
	Singleton* singleton = getInstance();
	delete singleton; 
	singleton = NULL;
}

/////////////////////////////////////////////////////////////////////
