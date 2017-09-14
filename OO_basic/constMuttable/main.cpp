#include <iostream> 
#include "Ball.h"
using namespace std; 
void somefun1(const Ball &ball) {
	 cout<< ball.radius() <<endl;
}
void somefun2(const Ball &ball) {
	 cout<< ball.name() <<endl;
}

int main() {
	Ball g(10,"loser");
	somefun1(g);
	somefun2(g);
    return 0; 
}
