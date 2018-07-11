#include "stdafx.h"
#include "CFraction.h"
using namespace std;


CFraction::CFraction()
{
	mNume = 0;
	mDeno = 1;
}

CFraction::~CFraction()
{
}

CFraction & CFraction::operator++()
{
	mNume += mDeno;
	return *this;
}

CFraction CFraction::operator++(int)
{
	CFraction result;
	result.mNume = mNume;
	result.mDeno = mDeno;
	++(*this);
	return result;
}

CFraction & CFraction::operator--()
{
	mNume -= mDeno;
	return *this;
}

CFraction CFraction::operator--(int)
{
	CFraction result;
	result.mNume = mNume;
	result.mDeno = mDeno;
	--(*this);
	return result;
}

CFraction  CFraction::operator-()
{
	CFraction ob = *this;
	ob.mNume*=-1;
	return ob;
}

CFraction  CFraction::operator~()
{
	CFraction ob;
	int temp = mNume;
	ob.mNume = mDeno;
	ob.mDeno = temp;
	return ob;
}

CFraction & CFraction::operator=(int a)
{
	mNume = a;
	mDeno = 1;
	return *this;
}

CFraction::operator int()
{
	return mNume / mDeno;
}

CFraction::operator float()
{
	return float(mNume / mDeno);
}

CFraction::operator SMixFraction()
{
	SMixFraction result;
	result.sNum = mNume / mDeno;
	result.sNume = mNume%mDeno;
	result.sDeno = mDeno;
	return result;
}

istream & operator>>(istream & is, CFraction & ob)
{
	do
	{
		is >> ob.mNume >> ob.mDeno;
		if (ob.mDeno == 0)
			cout << "Invalid value. Try again!" << endl;
	} while (ob.mDeno==0);

	return is;
}

ostream & operator<<(ostream & os, CFraction ob)
{
	int a = abs(ob.mNume), b = abs(ob.mDeno);
	while (a != b)
	{
		if (a > b)
			a -= b;
		else b -= a;
	}
	ob.mNume /= a;
	ob.mDeno /= a;
	if (abs(ob.mDeno) != 1)
	{
		if (ob.mDeno*ob.mNume > 0)
			cout << abs(ob.mNume ) << "/" << abs(ob.mDeno );
		else cout << (ob.mNume ) << "/" << (ob.mDeno );
	}
	else {
		if (ob.mDeno < 0)
			cout << -ob.mNume;
		else cout << ob.mNume;
	}

	return os;
}





