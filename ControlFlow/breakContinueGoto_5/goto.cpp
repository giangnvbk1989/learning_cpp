#include <iostream> 
using namespace std; 

int main() { 
    int input = 0; 

begin: 

    cout << "輸入一數："; 
    cin >> input; 

    if(input == 0) 
        goto error; 

    cout << "100 / " << input 
         << " = " << static_cast<double>(100) / input 
         << endl; 

    return 0; 

error: 
    cout << "除數不可為0" << endl; 
    goto begin;
}

