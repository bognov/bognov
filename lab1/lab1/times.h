#pragma once 
#include <iostream>


class time{
	int hour;
	int min;
	int sec;
public:
	time();
	time(int h, int m, int s);
	time(const time& m);
	~time();
	void gettime();
	void printtime1();
	void printtime2();
	void settime(int, int, int);
	void timeofday();
	void checkhour(int);
};