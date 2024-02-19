// demonstrates separating digits with a remainder operator
// Mikhail Nesterenko
// 01/22/2016

#include <iostream>

using std::cin; using std::cout; using std::endl;

int main() {
    cout << "Enter a number between 1 and 35: ";
    int num;
    cin >> num;

    if (num < 1 || num > 35) { //  ( || or ) (&& and)
        cout << "Number out of range (1 to 35)" << endl;
        return 1; // exit with an error code
    }

    int tensDigit = num / 10;
    int onesDigit = num % 10;

    if (tensDigit > 1 || tensDigit==0) { //1 - 9 , 20-35
        switch (tensDigit) { // swich = same as if 
        case 2: // tens digit's value 2 //20-29
            cout << "Twenty";
            break;
        case 3: // tens value 3 //30-35
            cout << "Thirty";
            break; // out of loop
        }

        if (onesDigit != 0) //1-9, 21-29 , 31-35
        { 
            if (tensDigit != 0) { // 21-29, 31-35
                cout << ' ';
            }
            
            switch (onesDigit) { //1-9
            case 1:
                cout << "One";
                break;
            case 2:
                cout << "Two";
                break;
            case 3:
                cout << "Three";
                break;
            case 4:
                cout << "Four";
                break;
            case 5:
                cout << "Five";
                break;
            case 6:
                cout << "Six";
                break;
            case 7:
                cout << "Seven";
                break;
            case 8:
                cout << "Eight";
                break;
            case 9:
                cout << "Nine";
                break;
            }
        }
    }
    else if (tensDigit == 1) { //10-19
        switch (onesDigit) {
        case 0:
            cout << "Ten";
            break;
        case 1:
            cout << "Eleven";
            break;
        case 2:
            cout << "Twelve";
            break;
        case 3:
            cout << "Thirteen";
            break;
        case 4:
            cout << "Fourteen";
            break;
        case 5:
            cout << "Fifteen";
            break;
        case 6:
            cout << "Sixteen";
            break;
        case 7:
            cout << "Seventeen";
            break;
        case 8:
            cout << "Eighteen";
            break;
        case 9:
            cout << "Nineteen";
            break;
        }
    }
    

    cout << endl;

    return 0;
}