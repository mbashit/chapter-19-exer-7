// chapter 19 exer 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Write a C++ program that prompts the user to enter his or her name,
and then displays “Good morning NN” or “Good evening NN” or
“Good night NN”, where NN is the name of the user. The message to
be displayed must be chosen randomly*/

#include <iostream>
using namespace std;

int main()
{
	string Name;
	int choice;

	cout << "choice is : " << endl;
	cin >> choice;

	cout << "enter the user's name:" << endl;
	cin >> Name;

	switch (choice) {
	case 1:
		cout << "1 Good morning " << Name << endl;
		break;
	case 2:
		cout << "2 Good evening " << Name << endl;
		break;
	case 3 :
		cout << "3 Good night " << Name << endl;
	}
	return 0;
}

