#include <iostream> 
using namespace std; 

int main() { 
    int input = 0; 
    bool replay = false; 

    do { 
        cout << "輸入整數值："; 
        cin >> input; 
        cout << "輸入數為奇數？" << ((input % 2) ? 'Y': 'N') << "\n"; 
        cout << "繼續(1:繼續 0:結束)？"; 
        cin >> replay; 
    } while(replay); 
 
    return 0; 
}
