#include <memory>
#include <iostream> 
using namespace std; 

int main() {
    //auto_ptr<int> iPtr (new int(100)); //deprecated in c++11
    //replace auto_ptr with unique_ptr
    unique_ptr<int> iPtr (new int(100)); 
    unique_ptr<int> iPtr1; 
    iPtr1 = move(iPtr); // transfer of int ownership

    cout << *iPtr1<< endl;
    cout << *iPtr<< endl; // own nothing , segmentation fault
    return 0; 
}
