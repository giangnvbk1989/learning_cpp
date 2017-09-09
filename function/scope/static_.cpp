
//全域變數是指直接宣告在（主）函式之外的變數，這個變數在整個程式之中都「看」得它的存在
//區域變數的生命週期開始於函式被呼叫之後，終止於函式執行完畢之時。

//區塊變數是指宣告在某個陳述區塊之中的變數，例如while迴圈區塊中，或是for迴圈區塊

//static變數，當變數有宣告時加上static限定時，一但變數生成，它就會一直存在記憶體之中，即使函式執行完畢，變數也不會消失
//
#include <iostream> 
using namespace std; 

void count(); 

int main() { 

    for(int i = 0; i < 10; i++) 
        count(); 

    return 0; 
} 

void count() { 
    static int c = 1; 
    cout << c << endl; 
    c++; 
}
