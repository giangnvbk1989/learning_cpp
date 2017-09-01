#include <iostream> 
using namespace std; 

int main() { 
    cout << "sizeof(1): " << sizeof(1) << ", default is int  \n";
    cout << "sizeof(1.0): " << sizeof(1.0) << ", default is double\n";


    cout <<"==================\n"; 
    // there are all int , int with cout will be printed as base-10
    cout <<"base-10 26   :" << 26 << "\n"; // 10進位
    cout <<"base-8  032  :" << 032 << "\n"; // 8進位
    cout <<"base-16 0x1A :" <<0x1A << "\n"; // 16進位

    cout <<"=================="<<endl; 
    cout <<"also string with \" \" are char array end with \\0 "<<endl; 
    return 0; 
}
