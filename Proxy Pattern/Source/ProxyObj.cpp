#include "ProxyObj.h"

/////////////////////////////////////////////////////////////////////

ProxyObj::ProxyObj(std::string& str) 
{
	int num = str.find_first_of(' ');
	m_first = str.substr(0, num);
	str = str.substr(num + 1);
	num = str.find_first_of(' ');
	m_second = str.substr(0, num);
	str = str.substr(num + 1);
	num = str.find_first_of(' ');
	m_third = str.substr(0, num);
	str = str.substr(num + 1);
	m_ptr = new StringSearch(str);
}

/////////////////////////////////////////////////////////////////////

void ProxyObj::execute()
{
	std::cout << m_first <<' ' <<  m_third << ' ';
	m_ptr->execute();
}

/////////////////////////////////////////////////////////////////////

ProxyObj::~ProxyObj()
{
	delete m_ptr;
}

/////////////////////////////////////////////////////////////////////

StringSearch* ProxyObj::operator->()
{
	std::cout << m_first << ' ' << m_second << ' ';
	return static_cast<StringSearch*>(m_ptr);
}

/////////////////////////////////////////////////////////////////////