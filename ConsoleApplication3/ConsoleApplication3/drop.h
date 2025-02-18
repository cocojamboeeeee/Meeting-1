#pragma once
#include <iostream>
using namespace std;
class drop
{
private:
	int* a;
	int* b;
public:
	drop(int* p_A, int* p_B)
	{
		a = p_A;
		b = p_B;
	}

	//get - для полей
	int getA() const
	{
		return *a;
	}
	int getB() const
	{
		return *b;
	}

	int setA(int* ppx_A)
	{
		a = ppx_A;
	}
	int setB(int* ppx_B)
	{
		b = ppx_B;
	}

	void opercia()
	{
		cout << "Сложение: " << *a + *b << endl;
		cout << "Вычетание: " << *a - *b << endl;
		cout << "Умножение: " << *a * *b << endl;
		cout << "Деление: " << *a / *b << endl;
	}

};

