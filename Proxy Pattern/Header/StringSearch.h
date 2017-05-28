#pragma once
#include "IObject.h"
#include <string>
#include <iostream>


class StringSearch : public IObject
{
private:
	std::string m_string;
public:
	void execute() override;
	StringSearch(std::string& name);
};

