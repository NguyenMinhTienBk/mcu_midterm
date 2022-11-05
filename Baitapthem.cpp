// HK221.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string suffixWithUnit(double number) {
	int unit = 1000;
	unsigned long long int lower = 0;
	unsigned long long int upper = unit;
	string suffix[10] = { "","Kilo","Mega","Tera","Peta","Exa","Zetta" ,"Yotta" };
	int idx = 0;
	while (1)
	{
		if (number >= lower && number <= upper) {
			break;
		}
		lower = upper;
		upper *= unit;
		idx++;
	}
	string str = "";
	if (idx <= 0) {
		str = to_string(number)+ " " + suffix[idx];
	}
	else {
		str = to_string(number / lower) + " " + suffix[idx];
	}
	return str;
}

int main() {
	cout << suffixWithUnit(0) << endl;
	cout << suffixWithUnit(100) << endl;
	cout << suffixWithUnit(7000) << endl;
	cout << suffixWithUnit(8706900) << endl;
	cout << suffixWithUnit(1555555550) << endl;
	cout << suffixWithUnit(155555555000000) << endl;
	cout << suffixWithUnit(15555555500000000) << endl;
	cout << suffixWithUnit(1555555550000000000) << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
