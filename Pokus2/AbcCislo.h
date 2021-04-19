#pragma once
#include <iostream>


using namespace std;

class Vystup;

class AbcCislo
{
private:
	
	int aCislo;
	int Abc2Dec(const char *abcCislo);
	char *Dec2Abc(const int cislo);


public:
	AbcCislo(int cislo = 0)
		:aCislo(cislo){
	}
	AbcCislo(const char *abcCislo)
		:aCislo(Abc2Dec(abcCislo))
	{
	}
	//long long Abc2Dec(const char *abcCislo);
	void vypisVAbc();
	void vypisVDec();

	friend AbcCislo operator +(AbcCislo op1, AbcCislo op2);
	friend AbcCislo operator -(AbcCislo op1, AbcCislo op2);
	friend AbcCislo operator *(AbcCislo op1, AbcCislo op2);
	friend AbcCislo operator /(AbcCislo op1, AbcCislo op2);
	friend bool operator <(AbcCislo op1, AbcCislo op2);
	friend bool operator >(AbcCislo op1, AbcCislo op2);
	friend bool operator <=(AbcCislo op1, AbcCislo op2);
	friend bool operator >=(AbcCislo op1, AbcCislo op2);
	friend bool operator ==(AbcCislo op1, AbcCislo op2);
	friend bool operator !=(AbcCislo op1, AbcCislo op2);
};

inline AbcCislo operator +(AbcCislo op1, AbcCislo op2)
{
	return op1.aCislo + op2.aCislo;
}

inline AbcCislo operator -(AbcCislo op1, AbcCislo op2)
{
	return op1.aCislo - op2.aCislo;
}

inline AbcCislo operator *(AbcCislo op1, AbcCislo op2)
{
	return op1.aCislo * op2.aCislo;
}

inline AbcCislo operator /(AbcCislo op1, AbcCislo op2)
{
	return op1.aCislo / op2.aCislo;
}


inline bool operator <(AbcCislo op1, AbcCislo op2)
{
	return op1.aCislo < op2.aCislo;
}

inline bool operator >(AbcCislo op1, AbcCislo op2)
{
	return op1.aCislo > op2.aCislo;
}

inline bool operator <=(AbcCislo op1, AbcCislo op2)
{
	//return !operator >(op1, op2);
	return !(op1 > op2);
}

inline bool operator >=(AbcCislo op1, AbcCislo op2)
{
	return !(op1 < op2);
}

inline bool operator ==(AbcCislo op1, AbcCislo op2)
{
	return op1.aCislo == op2.aCislo;
}

inline bool operator !=(AbcCislo op1, AbcCislo op2)
{
	return !(op1 == op2);
}
