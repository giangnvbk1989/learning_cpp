#include <iostream>
using namespace std;

int main() {
    int var = 10;
	//accutally, it's seldom to use reference as below,
    // but used much in function: call by reference
    int &ref = var;
 
    cout << "var: " << var 
         << endl;
    cout << "ref: " << ref
         << endl;
 
    ref = 20;

    cout << "var: " << var 
         << endl;
    cout << "ref: " << ref
         << endl;

    return 0;
}
