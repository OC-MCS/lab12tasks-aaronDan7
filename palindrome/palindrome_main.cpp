#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <cmath>
using namespace std;

bool palindromeChecker(const string&, int, int);

int main()
{
	string str;
	bool check;

	cout << "enter a string: ";

	getline(cin, str);

	check = palindromeChecker(str, 0, str.length() - 1);

	if (check)
		cout << "it was a palindrome";
	else
		cout << "it was not a palindrome";

	return 0;
}

bool palindromeChecker(const string& str, int s, int e) // s = start e = end
{
	while (s < str.length() && !isalpha(str[s])) 
	{
		s++;
	}

	while (e >= 0 && !isalpha(str[e])) 
	{
		e--;
	}

	if (s > e) 
	{
		return true;
	}
	else 
	{

		return ((toupper(str[s]) == toupper(str[e])) &&
			palindromeChecker(str, s + 1, e - 1));
	}
}
