#include <iostream> 
using namespace std; 

int main() { 
    int input = 0; 

    while(true) { 
        cout << "輸入一數："; 
        cin >> input; 

        if(input != 0) { 
            cout << "100 / " 
                 << input 
                 << " = " 
                 << static_cast<double>(100) / input 
                 << endl; 
 
            break; 
        } 
        cout << "除數不可為0"; 
    } 
 
    return 0; 
}

