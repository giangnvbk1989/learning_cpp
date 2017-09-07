#include <iostream> 
#include <cstring> 
using namespace std; 

int main() { 
    char str1[80] = {'\0'}; 
    char str2[] = "caterpillar"; 
    cout <<"str1 empty array, str2 caterpillar : "<<endl;
    cout << "str1: " << str1 << endl
         << "str2: " << str2 << endl
         << endl; 

    // 將str2複製給str1 
    cout <<"strcpy(str1,str2) str2 -copy> str1 : "<<endl;
    strcpy(str1, str2); 
    cout << "str1: " << str1 << endl
         << "str2: " << str2 << endl
         << endl;

    // 將str2接在str1後 
    cout <<"strcat(str1,str2) str1+=str2 : "<<endl;
    strcat(str1, str2); 
    cout << "str1: " << str1 << endl
         << "str2: " << str2 << endl
         << endl;

    cout << "str1長度：" << strlen(str1) << endl
         << "str2長度：" << strlen(str2) << endl
         << endl;

    cout << "str1與str2比較：" << strcmp(str1, str2) << endl
         << endl;
    // while using cin will skip space
    // you can use gets function but it will not check string length 
    return 0; 
}
