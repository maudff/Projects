#pragma once
#include <iostream>
#include <string>
#include "IObject.h"
#include "StringSearch.h"

class ProxyObj : public IObject
{
private:
	IObject* m_ptr;
	std::string m_first;
	std::string m_second;
	std::string m_third;


public :
	~ProxyObj();
	void execute() override;
	ProxyObj(std::string& str);
	StringSearch *operator->();

};