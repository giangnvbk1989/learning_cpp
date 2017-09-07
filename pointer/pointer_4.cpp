#include <iostream> 
using namespace std; 

int main() { 
    int *ptr = 0;
	//+ operator, +1 means get to address + 1*size(int)
    cout << "ptr位置：" << ptr 
         << endl;
    cout << "ptr+1：" << ptr+1 
         << endl; 
    cout << "ptr+2：" << ptr+2 
         << endl;
 
    return 0; 
}
