#include<string>
#include <iostream>

using namespace std;

int converRomanToInt(string s);
int romanCharValue(char r);

int main(void) {
	int numeral = 0;
	int total = 0;
	string input;
	char r;

	while (true) {
		cout << "Enter a roman value or Q to quit: ";
		cin >> input;
		if (input == "Q") break;

		numeral = converRomanToInt(input);
		cout << input << " = " << numeral << endl;
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
	int converRomanToInt(string s) {
		int total = 0;
		char first_character;
		char second_character;


		for (int i = 0; i < s.length();i++)  {
			first_character = s[i];
			second_character = s[i + 1];
			if (romanCharValue( first_character) >= romanCharValue(second_character) || s.length()-1 == i) {
				
				total += romanCharValue(first_character);

			}
			else {
				total += (romanCharValue(second_character) - romanCharValue(first_character));
				i++;
			}
	}
		return total;
}