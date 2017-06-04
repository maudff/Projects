#include "Date.h"
#include	"Month.h"

int main()
{
	std::string str_date = "2017/06/02";
	Date date(2, 6, 2017);
	Date date1(10, 5, 2020);
	int days = date1 - date;
	std::cout << "Expected Answer: 1073\n" <<"Actual Answer: " << days << std::endl;
	return true;
}