#include "SmsSubscriber.h"

/////////////////////////////////////////////////////////////////////////////

void SmsSubscriber::update(const NewsPublisher& publisher)
{
	std::cout << publisher.getLatestNews() << std::endl;
}

/////////////////////////////////////////////////////////////////////////////