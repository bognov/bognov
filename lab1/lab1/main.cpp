#include "stdafx.h"
#include <Windows.h>
#include "times.h"
using namespace std;

SYSTEMTIME st;

void time::gettime()
{
	GetSystemTime(&st);
	hour = st.wHour + 3;
	min = st.wMinute;
	sec = st.wSecond;
}

void time::printtime1()
{
	int h = hour;
	int m = min;
	int s = sec;
	if (h == 1)
		cout << h << " Hour, ";
	else
		cout << h << " Hours, ";
	if (m == 1)
		cout << m << " Minute, ";
	else
		cout << m << " Minutes, ";
	if (s == 1)
		cout << s << " Second." << endl;
	else
		cout << s << " Seconds." << endl;
}

void time::printtime2()
{
	int h = hour;
	int m = min;
	int s = sec;
	if (h > 12) h = h - 12;
	cout << h << ":" << m << ":" << s << endl;
}

void time::settime(int a, int n, int c)
{
	hour = a;
	min = n;
	sec = c;
}

void time::timeofday()
{
	if (hour >= 3 && hour <= 8)
		cout << "morning" << endl;
	if (hour >= 9 && hour <= 14)
		cout << "day" << endl;
	if (hour >= 15 && hour <= 20)
		cout << "evening" << endl;
	if (hour >= 21 && hour <= 2)
		cout << "night" << endl;
}