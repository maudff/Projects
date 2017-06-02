#include "DateCalculator.h"
#include	"Month.h"

int main()
{
	std::string str_date = "2017/06/02";
	Date date(boost::gregorian::from_string(str_date));
	Date date1(boost::gregorian::from_string("2020/05/10"));
	DateCalculator date2(date, date1);
	std::cout << "Expected Answer: 1073\n" <<"Actual Answer: " << date2.calculateDaysBetweenDates() << std::endl;
	return true;
}