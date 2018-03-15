#include <iostream>
#include <cstring>
#include <string>
using namespace std;

intmain()
{
	char name[6] = "Bobby";
	char last[8] = "Rockers";
	char copy[8];

	strncpy(copy, last, 8);

	cout << "firstname: " << name << "lastname: " << copy << endl;

	string test = "rockers";

	cout << test << endl;
	test = "robert";
	cout << test << endl;
	cout << "The length of test is " << test.length() << endl;
	cout << "the third char of test is " << test[2] << endl;

	for (int i = 0; i < test.length(); i++) {
		cout << "You spell robert with a " << test[i] << endl;

	}
	cin >> test;
	cout << "test is now equal to " << test << endl;
}

