﻿#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	string pi = "3.141592653589793";
	long double pi1, pi2, spi1 = 1, spi2 = 1;
	bool pokaNorm = true;
	int hod = 0, orientir = 0;
	long double chislo1 = 3.0, chislo2 = 2.0;
	while (pokaNorm) {
		//ПЕРВОЕ ВЫЧИСЛЕНИЕ
		hod += 1;
		long double gh = 1 / chislo1;
		spi1 += (pow(-1, hod) * gh);
		pi1 = 4 * spi1;
		chislo1 += 2;
	}
}