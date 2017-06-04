#pragma once
#include "Day.h"
#include "Month.h"
#include <exception>

class Date
{
private:
	unsigned				m_day;
	unsigned				m_year;
	unsigned				m_month;
	unsigned				m_currDayNumber;
	static const unsigned	m_numOfdaysInAYear;
	static const unsigned	m_numOfdaysInALeapYear;
	static const unsigned	m_NumberOfDaysPerMonth[];

	void					validateDay(unsigned day) const;
	void					validateYear(unsigned year) const;
	void					validateMonth(unsigned month)const;
	unsigned				calculateCurrNumOfDays() const;
	unsigned				getNumOfDaysInMonth(int month)const;
	int						calculateDaysBetweenDates(const Date& secondDate, const Date& firstDate);

public:
	Date(unsigned day, unsigned month, unsigned year);

	bool					isLeapYear() const;
	static unsigned			getTotalDaysInYear();
	void					setDay(unsigned day);
	void					setYear(unsigned year);
	static unsigned			getTotalDaysInLeapYear();
	void					setMonth(unsigned month);
	unsigned				getCurrDayNumber() const;
	bool					isLeapYear(int date) const;
	int						operator-(const Date& firstDate);
};