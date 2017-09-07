#include <iostream> 
#include <vector>
using namespace std; 

int main() { 
    vector<int> ivector;
 
    for(int i = 0; i < 10; i++) {
        ivector.push_back(i);
    }
 
    for(vector<int>::iterator it = ivector.begin();
        it != ivector.end();
        it++) {
 
        cout << *it << " ";
    }
    cout << endl;
 
    cout << "capacity: " << ivector.capacity() << endl
         << "size: " << ivector.size() << endl;
 
    return 0; 
}
