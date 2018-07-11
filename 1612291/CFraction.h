#pragma once
#include<iostream>
using namespace std;

struct SMixFraction
{
	int sNum;
	int sNume;
	int sDeno;
};

class CFraction
{
	int mNume;		//tử
	int mDeno;		//mẫu

public:
	CFraction();
	~CFraction();


	CFraction& operator++();	//++frc
	CFraction operator++(int);	//frc++
	CFraction& operator--();	//--frc
	CFraction operator--(int);	//frc--

	CFraction operator-();

	CFraction operator~();

	//tính toán giữa 2 phân số, hoặc giữa phân số với số nguyên
	template <class T>
	CFraction operator+(T ob);
	template <class T>
	CFraction& operator+=(T ob);
	template <class T>
	CFraction operator-(T ob);
	template <class T>
	CFraction& operator-=(T ob);
	template <class T>
	CFraction operator*(T ob);
	template <class T>
	CFraction& operator*=(T ob);
	template <class T>
	CFraction operator/(T ob);
	template <class T>
	CFraction& operator/=(T ob);

	//so sánh giữa 2 phân số, hoặc giữa phân số với số nguyên
	template <class T>
	bool operator>(T ob);
	template <class T>
	bool operator<(T ob);
	template <class T>
	bool operator==(T ob);
	template <class T>
	bool operator<=(T ob);
	template <class T>
	bool operator>=(T ob);
	template <class T>
	bool operator!=(T ob);


	//ép kiểu
	operator int();
	operator float();
	operator SMixFraction();


	CFraction& operator=(int a);
	friend istream& operator>>(istream &is, CFraction &ob);
	friend ostream& operator<<(ostream& os, CFraction ob);
};

template<class T>
inline CFraction CFraction::operator+(T ob)
{
	CFraction B = ob, result;
	result.mDeno = mDeno* B.mDeno;
	result.mNume = mNume*B.mDeno + B.mNume*mDeno;
	return result;
}

template<class T>
inline CFraction & CFraction::operator+=(T ob)
{
	CFraction B = ob;
	int temp = mDeno;
	mDeno *= B.mDeno;
	mNume = mNume*B.mDeno + B.mNume*temp;
	return *this;
}

template<class T>
inline CFraction  CFraction::operator-(T ob)
{
	CFraction B = ob, result;
	result.mDeno = mDeno* B.mDeno;
	result.mNume = mNume*B.mDeno - B.mNume*mDeno;
	return result;
}

template<class T>
inline CFraction & CFraction::operator-=(T ob)
{
	CFraction B = ob;
	mNume = mNume*B.mDeno - B.mNume*mDeno;
	mDeno *= B.mDeno;
	return *this;
}

template<class T>
inline CFraction  CFraction::operator*(T ob)
{
	CFraction B = ob, result;
	result.mDeno = mDeno * B.mDeno;
	result.mNume = mNume*B.mNume;
	return result;
}

template<class T>
inline CFraction & CFraction::operator*=(T ob)
{
	CFraction B = ob;
	mDeno *= B.mDeno;
	mNume *= B.mNume;
	return *this;
}

template<class T>
inline CFraction  CFraction::operator/(T ob)
{
	CFraction B = ob, result;
	result.mDeno = mDeno * B.mNume;
	result.mNume = mNume* B.mDeno;
	return result;
}

template<class T>
inline CFraction & CFraction::operator/=(T ob)
{
	CFraction B = ob;
	mDeno *= B.mNume;
	mNume *= B.mDeno;
	return *this;
}

template<class T>
inline bool CFraction::operator>(T ob)
{
	return float(*this) - float(ob) > 0;
}

template<class T>
inline bool CFraction::operator<(T ob)
{
	return float(*this) - float(ob) < 0;
}

template<class T>
inline bool CFraction::operator==(T ob)
{
	return float(*this) - float(ob) == 0;
}

template<class T>
inline bool CFraction::operator<=(T ob)
{
	return float(*this) - float(ob) <= 0;
}

template<class T>
inline bool CFraction::operator>=(T ob)
{
	return float(*this) - float(ob) >= 0;;
}

template<class T>
inline bool CFraction::operator!=(T ob)
{
	return float(*this) - float(ob) != 0;;
}
