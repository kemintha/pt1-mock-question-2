//Header file for class Time

#pragma once
#ifndef TIME_H
#define TIME_H
using namespace std;
class Time
{
private:
	int hour;
	int min;
public:
	Time(int, int);
	Time();
	~Time();
	void set(int, int);
	void get(int&, int&);



};

#endif