#include <iostream> 
using namespace std; 

int main() { 
    int length;
    cout << "give the array length : " ;
    cin >> length;
    int iarr[length] = {0}; 

    for(int i = 0; i < length; i++) 
        cout << iarr[i] << " "; 
    cout << endl; 

    for(int i = 0; i < length; i++) 
        iarr[i] = i; 

    for(int i = 0; i < length; i++) 
        cout << iarr[i] << " "; 
    cout << endl; 

    //get the length of the array
	cout << "Array長度：" 
         << (sizeof(iarr) / sizeof(iarr[0])) 
         << endl;


    return 0; 
}
