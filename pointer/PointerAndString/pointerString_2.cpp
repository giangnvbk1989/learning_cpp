#include <iostream> 
using namespace std; 

int main() {
    char *str[][2] = {"professor", "Justin", 
                      "teacher", "Momor", 
                      "student", "Caterpillar"}; 

    for(int i = 0; i < 3; i++) {
        cout << str[i][0] << ": " 
             << str[i][1] << endl; 
    }

    return 0; 
}

//char *str1[] = {"professor", "Justin", "etc."}; 
//char str2[3][10] = {"professor", "Justin", "etc."};
// this two implement are different, str2 have contiue mem space
// ecah pointer in str1, point to a string constant
