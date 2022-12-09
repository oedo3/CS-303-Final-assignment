#include<iostream>
#include<string>
#include <queue>
#include "functions.h"
#include <map>
using namespace std;

//this function prints out the elements in the map
void PrintMap(map<string, string> stateDataMap)
{
	for (auto print : stateDataMap)
	{
		cout << print.first + " " + print.second << endl;
	}
}
void PrintCapitalName(map<string, string> stateDataMap, string statename)
{
	//user input
	cout << "Please write a state name to learn its capital" << endl;
	cin >> statename;
	cout << "The capital of " + statename + " is " + stateDataMap[statename] << endl;
}