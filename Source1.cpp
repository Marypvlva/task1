#include <iostream>
#include <cmath>
using namespace std;

long double rec(int N)
{
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N * rec(N - 1);
}

long double cicl(int N) {
	long double factor = 1;
	for (int i = 1; i <= N; i++) {
		factor *= i;
	}
	return factor;
}

long double form(int N) {
	return sqrt(2 * acos(-1.0) * N) * pow((N/exp(1)), N) * (1 + (1 / (sqrt(52 * exp(1)) * N)));
}