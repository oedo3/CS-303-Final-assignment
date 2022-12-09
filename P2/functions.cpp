#include<iostream>
#include<string>
#include <queue>
#include "header.h"
using namespace std;

bool PalindromeTest(string text, string text2)
{

	text2 = text;
	string compare = "";
	if (compare == "")
	{
		for (int i = text2.length() - 1; i < text2.length(); i--) {
			compare = compare + text2[i];
		}
		//check for equality return true
		if (compare == text)
		{
			return true;
		}
		//check for equality return false
		else
		{
			return false;
		}
	}


}