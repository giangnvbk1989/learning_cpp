#include <iostream> 
using namespace std; 

int main() {
    char *str = "hello"; 
    void *add = 0; 

    add = str; 
    cout << str << "\t" 
         << add << endl; 

    str = "world"; 
    add = str; 
    cout << str << "\t" 
         << add << endl; 
 	//the address of str were changed 
    return 0; 
}
