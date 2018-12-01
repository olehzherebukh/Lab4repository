#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#include "matrix.h"
using namespace std;

double Ostslograf::getfrequency() {
	return frequency;
}
double Ostslograf::getmemory() {
	return memory; 
}
string Ostslograf::getbrand() {
	return brand;
}

double Ostslograf::getfrequency1() {
	return frequency1;
}

double Ostslograf::getfrequency2() {
	return frequency2;
}

Ostslograf::Ostslograf(double f, double m, string b, int pod, string n, double f1, double f2) : 
	frequency(f),
	memory(m),
	brand(b),
	TsinaOfPodilka(pod),
	name(n),
	frequency1(f1),
	frequency2(f2)
{
}


Ostslograf::Ostslograf() :
	frequency(2),
	memory (5),
	brand ("Audi"),
	TsinaOfPodilka(5),
	name("Oleh"),
	frequency1(70),
	frequency2(65)
	{
	}

Ostslograf::~Ostslograf() {

}