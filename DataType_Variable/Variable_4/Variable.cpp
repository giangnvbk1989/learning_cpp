#include <iostream> 
using namespace std; 

int main() { 
    int ageForStudent = int(); 
    double scoreForStudent = double(); 
    char levelForStudent =char(); 

    cout << "\n年級\t得分\t等級"; 
    cout << "\n" << ageForStudent 
         << "\t" << scoreForStudent 
         << "\t" << levelForStudent 
         << "\n"; 

    ageForStudent = 5; 
    scoreForStudent = 80.0; 
    levelForStudent = 'B'; 

    cout << "\n年級\t得分\t等級"; 
    cout << "\n" << ageForStudent 
         << "\t" << scoreForStudent 
         << "\t" << levelForStudent 
         << "\n"; 
 
    return 0;
}
