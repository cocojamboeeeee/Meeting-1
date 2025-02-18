#include <iostream>
#include "drop.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int* aaa = new int(5);
	int* bbb = new int(5);

	drop drop(aaa, bbb);
	drop.opercia();
}