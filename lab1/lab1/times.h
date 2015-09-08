#pragma once 
#include <iostream>


class time{
	int hour;
	int min;
	int sec;
public:
	void gettime();
	void printtime1();
	void printtime2();
	void settime(int, int, int);
	void timeofday();
};