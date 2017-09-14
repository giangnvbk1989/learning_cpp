#include <iostream>
#include "Ball.h"
using namespace std;

int main() {
    // this is not encourage to use Ball.PI for static member
    cout << Ball::PI 
         << endl;
	cout << "角度90等於徑度" 
         << Ball::toRadian(90) 
         << endl;
    return 0;
}
