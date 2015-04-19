//Declaration of methods for class time

#include <iostream>
#include <string>
#include "Time.h"

Time::Time(int a, int b)
{
	hour = a;
	min = b;
}
Time::Time()
{
	hour = 0;
	min = 0;
}
Time::~Time()
{
}
void Time::set(int a, int b)
{
	hour = a;
	min = b;
}
void Time::get(int &a, int &b)
{
	a = hour;
	b = min;
}
ostream &operator<<(ostream& os, Time& time1)
{
	int h, m;
	time1.get(h, m);
	os << h << ":" << m << endl;
	return os;
}
istream &operator>>(istream &is, Time &time1)
{
	int h, m;
	
	is >> h >> m;
	time1.set(h, m);
	return is;
}
Time& Time::operator++() //prefix
{
	if (min == 59)
	{
		min = 0;
		++hour;
	}
	else
		++min;
	return *this;
}

Time& Time::operator--() //prefix
{
	if (min == 0)
	{
		min = 59;
		--hour;
	}
	else
		--min;
	return *this;
}

Time Time::operator++(int) //postfix
{
	Time temp(hour, min); //create temp
	++(*this); //use prefix
	return temp;
}

Time Time::operator--(int) //postfix
{
	Time temp(hour, min); //create temp
	--(*this); //use prefix
	return temp;
}