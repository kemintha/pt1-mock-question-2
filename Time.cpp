//Declaration of methods for class time
#include "Time.hpp"
#include <iostream>
#include <string>
using namespace std;

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

