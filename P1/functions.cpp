#include<iostream>
#include<string>
#include <queue>
#include "functions.h"
using namespace std;

void move_to_rear(queue<double>numbers, double add)
{
	//asks the user to enter a number
	cout << "add a number to the end of the list" << endl;
	cin >> add;
	//inserts the number to the end
	numbers.push(add);
	double num = numbers.front();
	numbers.pop();
	numbers.push(num);
	//prints out the first and last number
	cout << numbers.front() << endl;
	cout << "Last number is ";
	cout << numbers.back() << endl;
}