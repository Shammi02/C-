// finds maximum number input
// demonstrates "iterate and keep track" idiom
// Mikhail Nesterenko
// 1/27/2014


#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
	int num,s=0;
	cout << "Input sequence of integers (zero to stop): ";
	while (cin >> num) {
		if (num == 0) {
			break;
		}
		else if (num % 2 != 0) {
			s = s + num;
		}
		else {
			continue;
		}
			
	}
	cout << "The sum of odd numbers is: "<< s <<endl;
	return 0;


	/*do {
		cout << "Enter a Number " << endl;



	} while (num != 0)*/
	

	
}
