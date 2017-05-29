#pragma once
#include <string>
#include <iostream>

class NewsPublisher;

class Subscriber
{
public:
	virtual void update(const NewsPublisher& publisher) = 0;
};
