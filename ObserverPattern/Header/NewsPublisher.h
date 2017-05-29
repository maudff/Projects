#pragma once
#include <string>
#include <vector>
#include "Subscriber.h"

//////////////////////////////////////////////////////////////////////////////

class NewsPublisher
{
private:
	std::string m_article;
	std::vector<Subscriber*> m_subscribers;

public:
	virtual void notify();
	void addNews(const char* news);
	std::string getLatestNews() const;
	void attach(Subscriber& subsriber);
	void detach(Subscriber& subsriber);
};

//////////////////////////////////////////////////////////////////////////////