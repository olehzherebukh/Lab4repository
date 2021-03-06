

#include "pch.h"
#include <iostream>
#include <math.h>
#include "matrix.h"
#include "matrix.cpp"
using namespace std;

int main()
{
	Ostslograf A;
	Ostslograf myOstslograf(4, 78, "HP", 6, "Maxym-1", 54, 98);
	Ostslograf yourOstslograf(2, 23, "Asus", 36, "Maxym-2", 12, 34);

	cout << "frequency:" << A.getfrequency()<< endl;
	cout << "memory:" << A.getmemory()<< endl;
	cout << "brand:" << A.getbrand() << endl;
	cout << "podilka:" << A.TsinaOfPodilka << endl;
	cout << "name:" << A.name << endl;
	cout << "frequency1:" << A.getfrequency1() << endl;
	cout << "frequency2:" << A.getfrequency2() << endl;
	cout << endl;

	cout << "frequency:" << myOstslograf.getfrequency() << endl;
	cout << "memory:" << myOstslograf.getmemory() << endl;
	cout << "brand:" << myOstslograf.getbrand() << endl;
	cout << "podilka:" << myOstslograf.TsinaOfPodilka << endl;
	cout << "name:" << myOstslograf.name << endl;
	cout << "frequency1:" << myOstslograf.getfrequency1() << endl;
	cout << "frequency2:" << myOstslograf.getfrequency2() << endl;
	cout << endl;

	cout << "frequency:" << yourOstslograf.getfrequency() << endl;
	cout << "memory:" << yourOstslograf.getmemory() << endl;
	cout << "brand:" << yourOstslograf.getbrand() << endl;
	cout << "podilka:" << yourOstslograf.TsinaOfPodilka << endl;
	cout << "name:" << yourOstslograf.name << endl;
	cout << "frequency1:" << yourOstslograf.getfrequency1() << endl;
	cout << "frequency2:" << yourOstslograf.getfrequency2() << endl;
}
