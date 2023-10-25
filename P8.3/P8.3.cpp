#include<string>
#include <iostream>

using namespace std;


int romanCharValue(char r);


int main(void) {
	int numeral = 0;
	string input;
	char r;

	while (true) {
		cout << "Enter a roman value or Q to quit: ";
		cin>> r;
		if (input == "Q") break;
		numeral= romanCharValue(r);
		cout << r <<  " = " <<numeral<< endl;
	}
	return 0;
}

int romanCharValue(char r) {
	int numeral = 0;
		if (r == 'I')
		{
			numeral += 1;
		}
		if (r == 'V')
		{
			numeral += 5;
		}
		if (r == 'X')
		{
			numeral += 10;
		}
		if (r == 'L')
		{
			numeral += 50;
		}
		if (r == 'C')
		{
			numeral += 100;
		}
		if (r == 'D')
		{
			numeral += 500;
		}
		if (r == 'M')
		{
			numeral += 1000;
		}
	
	return numeral;
}