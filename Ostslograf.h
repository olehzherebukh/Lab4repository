#pragma once
#include "pch.h"
#include <iostream>
#include <math.h>
#include <string>
using namespace std;



class Ostslograf {
private:
	double frequency;
	double memory;
	string brand;

public:
	Ostslograf();
	Ostslograf(double f, double m, string b, int pod, string name, double f1, double f2);
	~Ostslograf();
	int TsinaOfPodilka;
	string name;
	double getfrequency();
	double getmemory();
	string getbrand();
	double getfrequency1();
	double getfrequency2();
	
protected:
	double frequency1;
	double frequency2;
};