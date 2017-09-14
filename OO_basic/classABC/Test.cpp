#include "Test.h"
#include "Ball.h" // include header while implementing

Test::Test() { 
    _ball = new Ball;
}

Test::Test(Ball *ball) {
    _ball = ball;
}

Ball* Test::ball() {
    return _ball;
}

void Test::ball(Ball *ball) {
    _ball = ball; 
}
