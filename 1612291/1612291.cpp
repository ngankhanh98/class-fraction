// 1612291.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"CFraction.h"
#include<string>

int main()
{
	CFraction ob1, ob2;
	int n;

	cout << "1st fraction (a): ";
	cin >> ob1;
	cout << "2nd fraction (b): ";
	cin >> ob2;
	cout << "n = ";
	cin >> n;

	cout << ob1 << "\t" << ob2 << endl;

	cout << "~" << ob1 << "=";
	cout << ~ob1 << endl;
	cout << "-" << ob1 << "=";
	cout << -ob1 << endl;

	cout << endl;
	cout << ob1 << "+" << ob2 << "=" << ob1 + ob2 << endl;
	cout << ob1 << "-" << ob2 << "=" << ob1 - ob2 << endl;
	cout << ob1 << "*" << ob2 << "=" << ob1 * ob2 << endl;
	cout << ob1 << ":" << ob2 << "=" << ob1 / ob2 << endl;

	CFraction result;
	cout << endl;
	CFraction t = ob1++;
	cout << "t=a++,\tt=" << t << "\ta=" << ob1 << endl;;
	ob1--;		//để ob1 như cũ
	t = ob1--;
	cout << "t=a--,\tt=" << t << "\ta=" << ob1 << endl;
	ob1++;
	t = ++ob1;
	cout << "t=++a,\tt=" << t << "\ta=" << ob1 << endl;
	--ob1;
	t = --ob1;
	cout << "t=--a,\tt=" << t << "\ta=" << ob1 << endl;
	++ob1;

	string c;
	if (ob1 == ob2)
		c = "=";
	else {
		if (ob1 > ob2)
			c = ">";
		else
			c = "<";
	}
	cout << ob1 << c << ob2 << endl;

	if (ob1 == n)
		c = "=";
	else {
		if (ob1 > n)
			c = ">";
		else
			c = "<";
	}
	cout << ob1 << c << n << endl;

	
	return 0;
}

