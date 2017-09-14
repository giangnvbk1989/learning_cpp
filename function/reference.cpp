#include <iostream> 
using namespace std; 

int increment(int &n) { 
    n = n + 1; 
    return n; 
}


int main() { 
    int x = 10; 
    cout << x << "\n"; 
    cout << increment(x) << "\n"; 
    cout << x << "\n"; 

    return 0; 
} 

