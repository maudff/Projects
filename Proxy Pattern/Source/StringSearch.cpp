#include "StringSearch.h"

/////////////////////////////////////////////////////////////////////////

StringSearch::StringSearch(std::string& name) :m_string(name)
{

}

/////////////////////////////////////////////////////////////////////////

void StringSearch::execute()
{
	std::cout << m_string << std::endl;
}

/////////////////////////////////////////////////////////////////////////