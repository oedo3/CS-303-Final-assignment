#include <iostream>
#include <string>
#include <queue>
#include <fstream>
#include "header.h"
using namespace std;

int main()
{
	string text;
	//prompt user input
	cout << "Enter a text to test if its palindrome." << endl;
	getline(cin, text);

	string text2;

	while (true)
	{
		if (PalindromeTest(text, text2)) {
			cout << "palindrome" << endl;
			break;
		}
		else {
			cout << "not a palindrome" << endl;
			cout << "Enter a text to test if its palindrome." << endl;
			getline(cin, text);
		}
	}

	return 0;
}