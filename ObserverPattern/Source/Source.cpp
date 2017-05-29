#include "SmsSubscriber.h"
#include "EmailSubscriber.h"
#include "BusinessPublisher.h"

int main()
{
	SmsSubscriber sub;
	EmailSubscriber sub1;
	SmsSubscriber sub2;
	EmailSubscriber sub3;
	NewsPublisher* publisher = new BusinessPublisher;

	publisher->attach(sub);
	publisher->attach(sub1);
	publisher->attach(sub2);
	publisher->attach(sub3);

	publisher->addNews("Gdp shrinks");
	publisher->addNews("Gdp improves");

	publisher->detach(sub3);

	delete publisher;
	return 0;
}