#include <iostream> 
using namespace std; 

int main(int argc, char *argv[]){
    for(int i = 1; i < argc; i++) { 
        char *arg = argv[i]; 

        switch(arg[0]) { 
            case '-': 
                // 處理參數，設定執行選項，例如-o、-p、-r等等 
                cout<<arg<<endl;
                break;
            default: 
                // 執行對應功能 
                cout<<arg<<endl;
        } 
    }
}
