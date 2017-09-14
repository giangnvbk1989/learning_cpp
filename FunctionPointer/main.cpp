#include <iostream> 
#include "sort.h"
using namespace std; 

int main() { 
    int number1[] = {3, 5, 1, 6, 9};
    sort(number1, 5, larger);
    cout << "大的在前 ";
    for(int i = 0; i < 5; i++) {
        cout << number1[i] << " ";
    }
    cout << endl;

    int number2[] = {3, 5, 1, 6, 9};
    sort(number2, 5, smaller);
    cout << "小的在前 ";
    for(int i = 0; i < 5; i++) {
        cout << number2[i] << " ";
    }
    cout << endl;
 
    return 0; 
}
