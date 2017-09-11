
#include <iostream> 
using namespace std; 
double someVar = 1500;

void count() { 
    static int c = 1; 
    cout << c << endl; 
    c++; 
}
