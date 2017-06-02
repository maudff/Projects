#include "Date.h"

////////////////////////////////////////////////////////////////////////////

const unsigned Date::m_numOfdaysInAYear = 365;
const unsigned	Date::m_numOfdaysInALeapYear = 366;

////////////////////////////////////////////////////////////////////////////

Date::Date(Bst_Date date) : m_date(date) 
{
	m_currDayInAYear.setcurrNumOfDays(calculateCurrNumOfDays());
}

////////////////////////////////////////////////////////////////////////////

int Date::calculateCurrNumOfDays() const
{
	int currNumOfDays = 0;
	int month = m_date.month();

	for (int i = 1; i <= month; i++) {
		if (i == month)
		{
			return currNumOfDays += m_date.day();
		}

		if (i == JAN || i == MAR || i == MAY || i == JUL || i == AUG || i == OCT || i == DEC)
		{
			currNumOfDays += 31;
		}
		else if (i == 2)
		{
			if (isLeapYear())
			{
				currNumOfDays += 29;
			}
			else
			{
				currNumOfDays += 28;
			}
		}
		else
		{
			currNumOfDays += 30;
		}
	}
}

////////////////////////////////////////////////////////////////////////////

bool Date::isLeapYear() const
{
	unsigned year = m_date.year();
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
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
	boost::gregorian::greg_day day(1);
	boost::gregorian::greg_month month(1);
	boost::gregorian::greg_year year1(year);

	Date date(Bst_Date(year1, month, day));
	return date.isLeapYear();
}

////////////////////////////////////////////////////////////////////////////

const Bst_Date& Date::getDate() const
{
	return m_date;
}

////////////////////////////////////////////////////////////////////////////

void Date::setDate(const Bst_Date& date)
{
	m_date = date;
	m_currDayInAYear.setcurrNumOfDays(calculateCurrNumOfDays());
}

////////////////////////////////////////////////////////////////////////////

int Date::getCurDayInAYear() const
{
	return m_currDayInAYear.getcurrNumOfDays();
}

////////////////////////////////////////////////////////////////////////////

unsigned Date::getDaysInLeapYear()
{
	return Date::m_numOfdaysInALeapYear;
}

////////////////////////////////////////////////////////////////////////////

unsigned Date::getDaysInYear()
{
	return Date::m_numOfdaysInAYear;
}

////////////////////////////////////////////////////////////////////////////

void Date::setCurrDayInYear(unsigned day)
{
	m_currDayInAYear.setcurrNumOfDays(day);
}

////////////////////////////////////////////////////////////////////////////