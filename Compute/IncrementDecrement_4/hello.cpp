#include <iostream> 
using namespace std; 

int main() { 
    int i = 0; 
    i = i + 1; 
    cout <<"i=i+1; i: " << i << endl;
    i = i - 1; 
    cout <<"i=i-1; i: "<< i << endl;

    i = 0; 
    cout <<"i++: "<< ++i << endl; // Increment operator: i++ equals to i=i+1
    cout <<"i--: "<< --i << endl; // Decrement operator: i-- equals to i=i-1

    
    cout <<"========++i v.s. i--========== " <<endl;
    cout <<"++i: add first, then assignment" <<endl;
    i = 0; 
    int num = 0; 
    num = ++i;   // 相當於i = i + 1; num = i; 
    cout << num << endl; 
    num = --i;    // 相當於i = i - 1; num = i; 
    cout << num << endl;

    cout <<"i++: assignment first, then add" <<endl;
    i = 0; 
    num = 0; 
    num = i++;    // 相當於num = i; i = i + 1; 
    cout << num << endl;
    num = i--;     // 相當於 num = i; i = i - 1; 
    cout << num << endl;
    return 0; 
}

