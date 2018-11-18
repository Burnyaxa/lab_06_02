/*2.Try trykutnyky zadani svoimy storonamy A, B ta C. 
Za dopomohoiu formuly Herona obchyslyty ploshchi trykutnykiv ta vyznachyty,
ploshcha yakoho z nykh ye naibilshoiu.
*/

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
double arr_square[3];
void input(int n);
double area(double A,double B,double C);
double max_square();
int _tmain(int argc, _TCHAR* argv[]){
	for (int n = 1; n <= 3; n++){
		input(n);
	}
	cout << "The biggest square - " << max_square()<<endl;
	system("pause");
	return 0;
}
void input(int n){
	double A,B,C,S;
	cout <<"A"<<n<< " ="; cin >> A;
	cout <<"B"<<n<< " ="; cin >> B;
	cout <<"C"<<n<< " ="; cin >> C;
	S = square(A, B, C);
	cout <<"S" <<n<<" ="<<S<<endl;
	arr_square[n - 1] =S;
}
double square(double A, double B, double C){
	double P = (A + B + C) / 2.;
	double S = sqrt(P*(P - A)*(P - B)*(P - C));
	return S;
}
double max_square(){
	double max_square = arr_square[0];
	for (int i = 1; i < 3; i++){
		if (arr_square[i] > max_square){
			max_square = arr_square[i];
		}
	}
	return max_square;
}
