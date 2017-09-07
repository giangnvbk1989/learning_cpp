#include <iostream> 
using namespace std; 

int main() { 
    int var = 10; 

    cout << "變數var的值：" << var 
         << endl; 
    cout << "變數var的大小：" << sizeof(var)
         << endl; 
    //& : Address-of operator
    cout << "變數var的記憶體位址：" << &var
         << endl; 
    cout << "變數var的記憶體位址大小：" << sizeof(&var)
         << endl; 
    //*: Dereference operator
    cout << "對取址output取值：" << *&var
         << endl; 

    //create a int pointer assign address to var address
    int *ptr = &var;
    cout << "指標ptr儲存的值：" << ptr
         << endl; 
    cout << "取出ptr指向的記憶體位置之值：" << *ptr 
         << endl;
 

    return 0; 
}
