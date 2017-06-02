#pragma once
#include "Day.h"
#include "Month.h"

class Date
{
private:
	Bst_Date				m_date;
	Day						m_currDayInAYear;
	static const unsigned	m_numOfdaysInAYear;
	static const unsigned	m_numOfdaysInALeapYear;

public:
	Date(Bst_Date date);
	const Bst_Date&			getDate() const;
	static unsigned			getDaysInYear();
	bool					isLeapYear() const;
	static unsigned			getDaysInLeapYear();
	int						getCurDayInAYear() const;
	bool					isLeapYear(int date) const;
	void					setDate(const Bst_Date& date);
	int						calculateCurrNumOfDays() const;
	void					setCurrDayInYear(unsigned day);
	
};