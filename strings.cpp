#include <iostream>
#include <cstring>
using namespace std;

intmain()
{
	char name[6] = "Bobby";
	char last[8] = "Rockers";
	char copy[8];

	strncpy(copy, last, 8);

	cout << "firstname: " << name << "lastname: " << copy << endl;
}