/*

Angela Liu and Sofia Lalani - October 5th 2017, Period 4

Ascending Descending 

Very Basic Coding using integers 

*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN
 
void main() {
	int x; // X is a three digit number 
	

	cout << "Choose a 3 Digit number:" << endl;
	cin >> number;
	int a = number / 100;
	int b= (number % 100) / 10;
	int c = number % 10;

	if (a > b && b > c) {
	cout << "descending";
}
	else if (a < b && b < c) {

		cout << "ascending"; 

	}
	else { 
		
		cout << "neither";
	}
	
	
	
pause(); 





	pause(); // pauses to see the displayed text
}
