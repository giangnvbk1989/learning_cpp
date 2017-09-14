#include <iostream> 
#include <string> 
using namespace std; 

string& foo(); 

int main() { 
 string &str = foo(); 

 cout << "address: " << &str 
 << endl << str << endl; 

 delete &str; 

 return 0; 
} 

string& foo() { 
 string *s = new string("This is caterpillar speaking."); 

 cout << "address: " << s 
 << endl << *s << endl; 

 return *s; 
}
