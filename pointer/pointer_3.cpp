#include <iostream> 
using namespace std; 

void foo(const int*); 
 
int main() { 
    int var = 10; 
 
    cout << "var = " << var << endl; 
 
    foo(&var); 
 
    cout << "var = " << var << endl; 
 
    return 0; 
}

void foo(const int* p) {
	// if wanna change the value of read only value.
    // use const_cast to do it.
    int* v = const_cast<int*> (p); 
    *v = 20; 
	//您也可以使用舊風格的轉型語法，例如：
	//void foo(const int* p) {
    //int* v = (int*) (p); 
    //*v = 20; 
}

