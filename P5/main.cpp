#include <iostream>
#include <string>
#include <iterator>
#include <map>
#include "functions.h"
using namespace std;

int main()
{
	map<string, string> stateDataMap;
	string statename;
	int choice;

	//quick insertion of elements
	stateDataMap.insert(pair<string, string>("Nebraska", "Lincoln"));
	stateDataMap.insert(pair<string, string>("New York", "Albany"));
	stateDataMap.insert(pair<string, string>("Ohio", "Columbus"));
	stateDataMap.insert(pair<string, string>("California", "Sacramento"));
	stateDataMap.insert(pair<string, string>("Massachusetts", "Boston"));
	stateDataMap.insert(pair<string, string>("Texas", "Austin"));


	//user input
	cout << "1. Print out list\n2. Change capital of California\n3. Output capital name" << endl;
	cin >> choice;

	while (true)
	{

		if (choice == 1)
		{
			PrintMap(stateDataMap);
			cout << "1. Print out list\n2. Change capital of California\n3. Output capital name" << endl;
			cin >> choice;
		}
		else if (choice == 2)
		{
			stateDataMap["California"] = "Los Angeles";

			PrintMap(stateDataMap);
			cout << "1. Print out list\n2. Change capital of California\n3. Output capital name" << endl;
			cin >> choice;
		}
		else if (choice == 3)
		{
			PrintCapitalName(stateDataMap, statename);
			cout << "1. Print out list\n2. Change capital of California\n3. Output capital name" << endl;
			cin >> choice;
		}
		//break option
		else
		{
			break;
		}
	}
}