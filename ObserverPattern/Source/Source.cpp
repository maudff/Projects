#include "SmsSubscriber.h"
#include "EmailSubscriber.h"
#include "BusinessPublisher.h"
#include "boost/shared_ptr.hpp"
#include "boost/make_shared.hpp"

int main()
{
	SmsSubscriber sub;
	EmailSubscriber sub1;
	SmsSubscriber sub2;
	EmailSubscriber sub3;
	boost::shared_ptr<NewsPublisher> publisher(boost::make_shared<BusinessPublisher>());

	publisher->attach(sub);
	publisher->attach(sub1);
	publisher->attach(sub2);
	publisher->attach(sub3);

	publisher->addNews("Gdp shrinks");
	publisher->addNews("Gdp improves");

	publisher->detach(sub3);

	return 0;
}