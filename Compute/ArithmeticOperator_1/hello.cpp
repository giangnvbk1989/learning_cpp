#include <iostream> 
using namespace std; 

int main() { 
    cout << "Hello! World!\n"; 
    cout << (1 + 2 * 3)<<endl;
    cout << (1+2+3) / 4<<endl;
    cout << 1538 % 100 <<endl;
    int number = 10; 
    cout << number / 3<<endl; //Implicit type conversion 隱式型態轉換, converse to longer data type (may be size)
    double number_d = 10.0; 
    cout << number_d / 3<<endl; 

    number_d = 3.14;
    number = number_d; 
    cout << number<<endl; // loss some accurary from double to int
    
    number = static_cast<int>(number_d); //this is called 顯式型態轉換（Explicit type conversion
    // older syntax is (int) number
    // there are also other conversions : const_cast、reinterpret_cast 與dynamic_cast

    return 0; 
}

