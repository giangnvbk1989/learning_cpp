#include <iostream> 
using namespace std; 

double area(double, double = 3.14); 

int main() { 
    double r, pi; 

    cout << "輸入半徑與PI: "; 
    cin >> r >> pi; 

    cout << "面積(自訂PI): " << area(r, pi)
         << endl; 
    cout << "面積(default): " << area(r) 
         << endl;
 
    return 0; 
} 

double area(double r, double pi) { 
    return r*r*pi; 
}

//bool setScreen(int width = 80, int height = 24, char bkcolor = ' ');
//setScreen('R');，
//則其作用相當於setScreen('R', 24, ' ');
//而不是setScreen(80, 24, 'R');
