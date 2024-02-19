// the program attempts to sort three integers
// in increasing order, it is incomplete
// Mikhail Nesterenko
// 1/16/2023

#include <iostream> // input output stream (stream for bit by bit code)

//using namespace std;
using std::cin; using std::cout; using std::endl; //  std for iostream library 

int main() { //to start a function

    // inputs the numbers
    cout << "Enter three numbers: ";
    int x, y, z;
    cin >> x >> y >> z; // >> indication of input (not greater than)


    cout << "Enter 'i' for increasing order and Enter 'd' for decreasing order"<<endl; // (fot next line= endl)
    // 1 quote character ,2 Quote String
    char order; //variable  //char = for any character
    cin >> order;
    

    // orders x and y
    if ((order == 'i' &&  x>y)|| (order =='d' && x<y )){
        //&& = 2 sides have to work , || =have to fulfill 1 side condition 
        const int tmp = x;
        x = y; // x=2
        y = tmp; // y=3
        
    }


    // orders y and z
    if ((order == 'i' && y > z) || (order == 'd' && y < z)) {
        const int tmp = y;  // tmp =3
        y = z; // y=1
        z = tmp; //z=3
       
    }

    if ((order == 'i' && x > y) || (order == 'd' && x < y)) {
        const int tmp = x;
        x = y;
        y = tmp;
       
    }
    cout << "The sorted numbers are: ";
    cout << x << " " << y << " " << z << endl;

    return 0; 
    
   //shows the successful execution of the function. 
   //reuturn 1 for execution with error.
    
    
}

