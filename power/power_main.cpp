#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{
	int n = 2, exp = 4, total;

	total = calculatePower(n, exp);
	cout << n << "^" << exp << " = " << total;

	return 0;
}

int calculatePower(int n, int exp)
{
	if (exp != 0)
		return (n*calculatePower(n, exp - 1));
	else
		return 1;
}