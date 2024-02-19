// the program attempts to sort three integers
// in increasing order, it is incomplete
// Mikhail Nesterenko
// 1/16/2023

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {

    // inputs the numbers
    cout << "Enter three numbers: ";
    int x, y, z;
    cin >> x >> y >> z;

    // orders x and y
    if (x > y) {
        const int tmp = x;
        x = y; // x=2
        y = tmp; // y=3
    }


    // orders y and z
    if (y > z) {
        const int tmp = y;  // tmp =3
        y = z; // y=1
        z = tmp; //z=3
    }

    if (x > y) {
        const int tmp = x;
        x = y;
        y = tmp;
    }

    // outputs the sorted numbers
    cout << "The sorted numbers are: ";
    cout << x << " " << y << " " << z << endl;
}