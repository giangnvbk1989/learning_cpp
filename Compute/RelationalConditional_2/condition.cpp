#include <iostream>
using namespace std;
 
int main() { 
    int score = 0; 
	

    cout << "輸入學生分數："; 
    cin >> score; 
    cout << "該生是否及格？" 
         << (score >= 60 ? 'Y' : 'N') 
         << endl; 

    cout << "3!=0?"  
         << (3 ? 'Y' : 'N') //since all numerical valure != 0 , will be true in the contidition rule
         << endl; 
    return 0;
} 
