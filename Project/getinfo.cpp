// getinfo.cpp -- input and output
#include <iostream>

int main()
{
	using namespace std;

	int carrots;

	cout << "How many carrots do you hace?" << endl;
	cin >> carrots;  // C++ input
	cout << "Here are two more. ";
	carrots = carrots + 2;
	// the next line concatenates outut
	cout << "Now you have " << carrots << " carrots." << endl;
	return 0;
}