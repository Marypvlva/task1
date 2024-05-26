#include <iostream>
#include<stdio.h>
#include <"Source3.h">
#include <cmath>
using namespace std;

int main()
{
	int n;
	cout << "введите число ";
	cin >> n;
	while (n > 170 or n < 0) {
		cout << "неподходящее значение, введите число еще раз ";
		cin >> n;
	}
	if (n < 22) {
		printf("%.0f\n", rec(n));
		printf("%.0f\n", cicl(n));
		printf("%f\n", form(n));
	}
	else {
		printf("%.15g\n", rec(n));
		printf("%.15g\n", cicl(n));
		printf("%.15g\n", form(n));
	}
}
