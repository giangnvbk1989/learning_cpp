#include <iostream>
using namespace std;
 
int main() { 
    cout << "AND運算：" << endl; 
    cout << "0 AND 0\t\t" << (0 & 0) << endl; 
    cout << "0 AND 1\t\t" << (0 & 1) << endl; 
    cout << "1 AND 0\t\t" << (1 & 0) << endl; 
    cout << "1 AND 1\t\t" << (1 & 1) << endl; 

    cout << "OR運算：" << endl; 
    cout << "0 OR 0\t\t" << (0 | 0) << endl; 
    cout << "0 OR 1\t\t" << (0 | 1) << endl; 
    cout << "1 OR 0\t\t" << (1 | 0) << endl; 
    cout << "1 OR 1\t\t" << (1 | 1) << endl; 

    cout << "XOR運算：" << endl; 
    cout << "0 XOR 0\t\t" << (0 ^ 0) << endl; 
    cout << "0 XOR 1\t\t" << (0 ^ 1) << endl; 
    cout << "1 XOR 0\t\t" << (1 ^ 0) << endl; 
    cout << "1 XOR 1\t\t" << (1 ^ 1) << endl; 

    cout << "NOT運算：" << endl; 
    cout << "NOT 0\t\t" << (!0) << endl; 
    cout << "NOT 1\t\t" << (!1) << endl; 
 
    cout << "~運算：" << endl; 
    char num = 255; 
    cout << "Complement of 255 is :" << static_cast<int>(~num) <<endl;

    cout << "255為奇數？" 
         << (num&1 ? 'Y' : 'N') <<endl ;// since if odd -> last bit will be 1 /even -> 0

    return 0;
}
