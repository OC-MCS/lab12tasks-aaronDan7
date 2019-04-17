#include <iostream>
using namespace std;

void sign(int n)
{
		cout << "No Parking: " << n << endl;
		n--;
		if (n > 0)
		sign(n);
} 

int main()
{
	sign(4);

	return 0;
}


