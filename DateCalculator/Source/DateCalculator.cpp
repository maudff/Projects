#include "DateCalculator.h"


///////////////////////////////////////////////////////////////////////////

DateCalculator::DateCalculator(Date& date, Date& date1) :m_firstDate(date) , m_secondDate(date1)
{
}

////////////////////////////////////////////////////////////////////////////

int DateCalculator::calculateDaysBetweenDates() const
{
	int currNumOfDays = 0;
	int currYear = m_firstDate.getDate().year() + 1;
	int firstYear = m_firstDate.getDate().year();
	int secondYear = m_secondDate.getDate().year();
	int diffOfYears = secondYear - firstYear;
	int currDayInFirstDate = m_firstDate.getCurDayInAYear();
	int currDayInSecondDate = m_secondDate.getCurDayInAYear();

	if (diffOfYears <= 0)
	{
		return std::abs(int(currDayInSecondDate - currDayInFirstDate));
	}
	else
	{
		if (m_firstDate.isLeapYear())
		{
			currNumOfDays = Date::getDaysInLeapYear() - currDayInFirstDate;
		}
		else
		{
			currNumOfDays = Date::getDaysInYear() - currDayInFirstDate;
		}

		for (int i = currYear; i <= secondYear; ++i)
		{
			if (i == secondYear)
			{
				return currNumOfDays += currDayInSecondDate;
			}
			else if (m_firstDate.isLeapYear(i))
			{
				currNumOfDays += Date::getDaysInLeapYear();
			}
			else
			{
				currNumOfDays += Date::getDaysInYear();
			}
		}
	}
}

////////////////////////////////////////////////////////////////////////////

void DateCalculator::setFirstDate(const Date& date)
{
	m_firstDate = date;
	m_firstDate.setCurrDayInYear(m_firstDate.calculateCurrNumOfDays());
}

////////////////////////////////////////////////////////////////////////////

void DateCalculator::setSecondDate(const Date& date)
{
	m_secondDate = date;
	m_secondDate.setCurrDayInYear(m_secondDate.calculateCurrNumOfDays());
}

////////////////////////////////////////////////////////////////////////////