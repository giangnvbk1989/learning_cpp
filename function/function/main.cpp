#include <iostream>
#include "math.h"
//#include "kerker.h" //kerker define a const c will collision with math.h
using namespace std;

int main() {
    cout<<" a const header trial :" << c << endl;
    // include header, will also pass const c, which defined in header ;
    int num = 0;
    int power = 0; 

    cout << "輸入數值："; 
    cin >> num; 

    cout << "輸入平方："; 
    cin >> power; 

    cout << num << " 平方：" 
         << pow2(num) << endl; 
    cout << num << " 的" << power << "次方：" 
         << pow(num, power) 
         << endl; 

    return 0;
}

