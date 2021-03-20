#include <iostream>
#include <stdlib.h> 

using namespace std;
int main() {

	srand(time(NULL));
	int number = rand() % 100 + 1;
	int guess = 0;

	cout << number << endl;
	do {

		do {
			cout << "Guess the number: ";
			cin >> guess;

			if (guess > number) { cout << "Reduce Your Number" << endl; }
			else if (guess < number) { cout << "Increase Your Number" << endl; }
			else {
				cout << "Catch It!\n" << endl;
				exit(0);
			}
		} while (number != guess);
		return 0;
	} while (number != guess);
}