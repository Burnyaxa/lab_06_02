/*2.Try trykutnyky zadani svoimy storonamy A, V ta S. 
Za dopomohoiu formuly Herona obchyslyty ploshchi trykutnykiv ta vyznachyty,
ploshcha yakoho z nykh ye naibilshoiu.
*/
#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

void input(int n, double arrArea[3]);
double getArea(double A,double B,double C);
double getMaxArea(double arrArea[3]);

int _tmain(int argc, _TCHAR* argv[]){
	double arrArea[3];
	for (int n = 1; n <= 3; n++){
		input(n, arrArea);
	}
	cout << "The biggest area - " << getMaxArea(arrArea)<<endl;
	system("pause");
	return 0;
}

void input(int n, double arrArea[3]){
	double A,B,C,S;
	cout << "A" << n << " ="; cin >> A;
	cout << "B" << n << " ="; cin >> B;
	cout << "C" << n << " ="; cin >> C;
	S = getArea(A, B, C);
	cout << "S" << n << " =" << S <<endl;
	arrArea[n - 1] =S;
}

double getArea(double A, double B, double C){
	double P = (A + B + C) / 2.;
	double S = sqrt(P*(P - A)*(P - B)*(P - C));
	return S;
}

double getMaxArea(double arrArea[3]){
	double maxArea = arrArea[0];
	for (int i = 1; i < 3; i++){
		if (arrArea[i] > maxArea){
			maxArea = arrArea[i];
		}
	}
	return maxArea;
}
