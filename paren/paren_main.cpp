#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

bool isBalanced(string s)
{
	if (s.empty())
		return false;

	int i = 0;                // first characters
	int j = s.length() - 1; // last character

	while (i < j)
	{
		if (s[i] != s[j])
		{
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main()
{
	ifstream file;
	file.open("balancedTestCases.txt");
	string s;
	while (getline(file, s))
	{
		if (isBalanced(s))
			cout << s << " is balanced." << endl;
		else
			cout << s << " is not balanced. " << endl;
	}

}