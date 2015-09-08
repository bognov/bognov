// lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include "times.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a, n, c;
	time q[2];
	q[0].gettime();
	q[0].printtime1();
	q[0].printtime2();
	cout << "It's ";
	q[0].timeofday();
	cout << "Enter hours: ";
	cin >> a;
	cout << "Enter minutes: ";
	cin >> n;
	cout << "Enter seconds: ";
	cin >> c;
	q[1].settime(a, n, c);
	q[1].printtime1();
	cout << "It's ";
	q[1].timeofday();
	return 0;
}

