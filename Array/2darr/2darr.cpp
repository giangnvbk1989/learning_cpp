#include <iostream> 
using namespace std; 

int main() { 
    const int row = 5;
    const int column = 10;
    int iarr[row][column]; 

    for(int i = 0; i < row; i++) 
        for(int j = 0; j < column; j++) 
            iarr[i][j] = (i+1) * (j+1); 

    for(int i = 0; i < row; i++) { 
        for(int j = 0; j < column; j++) 
            cout << iarr[i][j] << "\t"; 
        cout << endl; 
    } 

    cout <<"2d array assignment with array"<<endl;
    int iarr_2[2][3] = {{1, 2, 3}, 
                        {4, 5, 6}};    

    for(int i = 0; i < 2; i++) { 
        for(int j = 0; j < 3; j++) 
            cout << iarr_2[i][j] << "\t"; 
        cout << endl; 
    } 
    return 0; 
}
