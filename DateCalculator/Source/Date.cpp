#include "Date.h"

////////////////////////////////////////////////////////////////////////////

const unsigned Date::m_numOfdaysInAYear = 365;
const unsigned	Date::m_numOfdaysInALeapYear = 366;
const unsigned	Date::m_NumberOfDaysPerMonth[] = { 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 };

////////////////////////////////////////////////////////////////////////////

Date::Date(unsigned day, unsigned month, unsigned year) 
{
	validateDay(day);
	validateMonth(month);
	validateYear(year);

	m_day = day;
	m_month = month;
	m_year = year;
	m_currDayNumber = calculateCurrNumOfDays();
}

////////////////////////////////////////////////////////////////////////////

unsigned Date::calculateCurrNumOfDays() const
{
	int currNumOfDays = 0;

	for (int i = 1; i <= m_month; i++) {
		if (i == m_month)
		{
			return currNumOfDays += m_day;
		}
		currNumOfDays += getNumOfDaysInMonth(i);
	}
	return currNumOfDays;
}

////////////////////////////////////////////////////////////////////////////

bool Date::isLeapYear() const
{

	if (m_year % 4 == 0)
	{
		if (m_year % 100 == 0)
		{
			if (m_year % 400 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}

////////////////////////////////////////////////////////////////////////////

bool Date::isLeapYear(int year) const
{
	Date d(1, 1, year);
	return d.isLeapYear();
}

////////////////////////////////////////////////////////////////////////////

unsigned Date::getCurrDayNumber() const
{
	return m_currDayNumber;
}

////////////////////////////////////////////////////////////////////////////

unsigned Date::getTotalDaysInLeapYear()
{
	return Date::m_numOfdaysInALeapYear;
}

////////////////////////////////////////////////////////////////////////////

unsigned Date::getTotalDaysInYear()
{
	return Date::m_numOfdaysInAYear;
}

////////////////////////////////////////////////////////////////////////////

int Date::calculateDaysBetweenDates(const Date& secondDate , const Date& firstDate ) 
{
	int currNumOfDays = 0;
	int currYear = firstDate.m_year + 1;
	int firstYear = firstDate.m_year;
	int secondYear = secondDate.m_year;
	int diffOfYears = secondYear - firstYear;
	int currDayInFirstDate = firstDate.getCurrDayNumber();
	int currDayInSecondDate = secondDate.getCurrDayNumber();

	if (diffOfYears <= 0)
	{
		return std::abs(int(currDayInSecondDate - currDayInFirstDate));
	}
	else
	{
		if (firstDate.isLeapYear())
		{
			currNumOfDays = Date::getTotalDaysInLeapYear() - currDayInFirstDate;
		}
		else
		{
			currNumOfDays = Date::getTotalDaysInYear() - currDayInFirstDate;
		}

		for (int i = currYear; i <= secondYear; ++i)
		{
			if (i == secondYear)
			{
				return currNumOfDays += currDayInSecondDate;
			}
			else if (firstDate.isLeapYear(i))
			{
				currNumOfDays += Date::getTotalDaysInLeapYear();
			}
			else
			{
				currNumOfDays += Date::getTotalDaysInYear();
			}
		}
	}
	return currNumOfDays;
}

////////////////////////////////////////////////////////////////////////////

int Date::operator-(const Date& firstDate)
{
	return calculateDaysBetweenDates(*this,firstDate);
}

////////////////////////////////////////////////////////////////////////////

void Date::validateDay(unsigned day) const
{
	std::exception e;

	try
	{
		if (day < 1 || day > 31 )
		{
			throw e;
		}
	}
	catch (std::exception& e)
	{
		std::cout << "Invalid day, day must be between 1 and 31" << std::endl;
		std::exit(0);
	}
}

////////////////////////////////////////////////////////////////////////////

void Date::validateYear(unsigned year) const
{
	std::exception e;

	try
	{
		if (year < 1100)
		{
			throw e;
		}
	}
	catch (std::exception& e)
	{
		std::cout << "Invalid year, year must be ovr 1100"<< std::endl;
		std::exit(0);
	}
}

////////////////////////////////////////////////////////////////////////////

void Date::validateMonth(unsigned month) const
{
	std::exception e;

	try
	{
		if (month < 1 || month > 12)
		{
			throw e;
		}
	}
	catch (std::exception& e)
	{
		std::cout << "Invalid month, month must be between 1 and 12" << std::endl;
		std::exit(0);
	}
}

////////////////////////////////////////////////////////////////////////////

void Date::setDay(unsigned day)
{
	validateDay(day);
	m_day = day;
	m_currDayNumber = calculateCurrNumOfDays();
}

////////////////////////////////////////////////////////////////////////////

void Date::setYear(unsigned year)
{
	validateYear(year);
	m_year = year;
	m_currDayNumber = calculateCurrNumOfDays();
}

////////////////////////////////////////////////////////////////////////////

void Date::setMonth(unsigned month)
{
	validateMonth(month);
	m_month = month;
	m_currDayNumber = calculateCurrNumOfDays();
}

////////////////////////////////////////////////////////////////////////////

unsigned Date::getNumOfDaysInMonth(int month) const
{
	if (month == 2)
	{
		if (isLeapYear())
		{
			return Date::m_NumberOfDaysPerMonth[month -1 ] + 1;
		}
	}
	return Date::m_NumberOfDaysPerMonth[month - 1];
}

////////////////////////////////////////////////////////////////////////////