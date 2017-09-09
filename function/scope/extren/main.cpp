#include <iostream> 
using namespace std; 

int main() { 
    extern double someVar;
    //extern double c; // can't find the variable inside function

    cout << someVar << endl;
    //cout << c << endl; // can't find the varaible inside function
 
    return 0; 
}
