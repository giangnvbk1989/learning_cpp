#include <iostream>
using namespace std; 

int main() { 
    cout << "\n型態\t大小(bytes)"; 
    cout << "\nint\t" << sizeof(int); 
    cout << "\nlong\t" << sizeof(long); 
    cout << "\nfloat\t" << sizeof(float); 
    cout << "\ndouble\t" << sizeof(double); 
    cout << "\nchar\t" << sizeof(char);

    cout << "\n===============\n";

    cout << "sizeof(bool)\t" << sizeof(bool) << "\n";
    cout << "sizeof(true)\t" << sizeof(true) << "\n";
    cout << "sizeof(false)\t" << sizeof(false) << "\n";

    cout << "true\t" << static_cast<int>(true) << "\n";
    cout << "false\t" << static_cast<int>(false) << "\n";
 
    return 0; 
} 
