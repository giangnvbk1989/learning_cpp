#include <iostream>
using namespace std;

int main() { 
    int score = 0; 

    cout << "輸入分數："; 
    cin >> score; 

    if(score >= 90) 
        cout << "得A" << endl; 
    else if(score >= 80 && score < 90) 
        cout << "得B" << endl; 
    else if(score >= 70 && score < 80) 
        cout << "得C" << endl; 
    else if(score >= 60 && score < 70) 
        cout << "得D" << endl; 
    else 
        cout << "得E(不及格)" << endl; 
 
    return 0;
}
