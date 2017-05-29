#include "NewsPublisher.h"

///////////////////////////////////////////////////////////////////////

void NewsPublisher::notify()
{
	for (std::size_t i = 0; i < m_subscribers.size(); ++i)
	{
		m_subscribers[i]->update(*this);
	}
}

///////////////////////////////////////////////////////////////////////

void NewsPublisher::attach(Subscriber& subscriber)
{
	m_subscribers.push_back(&subscriber);
}

///////////////////////////////////////////////////////////////////////

void NewsPublisher::detach(Subscriber& subsriber)
{
	for (std::size_t i = 0; i < m_subscribers.size(); ++i)
	{
		if (m_subscribers[i] == &subsriber)
		{
			m_subscribers.erase(m_subscribers.begin() + i);
		}
	}
}

///////////////////////////////////////////////////////////////////////

void NewsPublisher::addNews(const char* news)
{
	m_article = news;
	notify();
}

///////////////////////////////////////////////////////////////////////

std::string NewsPublisher::getLatestNews() const
{
	return m_article;
}

///////////////////////////////////////////////////////////////////////