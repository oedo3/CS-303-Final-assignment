#include <iostream>
#include <string>
#include <queue>
#include <fstream>
#include "functions.h"
using namespace std;

int main()
{
	queue<double>listqueue;
	listqueue.push(1);
	listqueue.push(2);
	listqueue.push(3);


	double add{};
	char user;
	//asks the user to enter number
	cout << "1. Enter new number to display list" << endl;
	cin >> user;

	while (true)
	{
		if (user == '1')
		{
			move_to_rear(listqueue, add);

		}
		//exit for the program
		else
		{
			break;
		}
	}

}