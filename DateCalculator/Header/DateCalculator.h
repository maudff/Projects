#pragma once
#include <iostream>
#include <math.h>
#include "Date.h"

//////////////////////////////////////////////////////////////////////////

class DateCalculator
{
private:
	Date					m_firstDate;
	Date					m_secondDate;

public:
	DateCalculator(Date& date, Date& date1);

	int						calculateDaysBetweenDates() const;
	void					setFirstDate(const Date& firstDate);
	void					setSecondDate(const Date& firstDate);
};

//////////////////////////////////////////////////////////////////////////