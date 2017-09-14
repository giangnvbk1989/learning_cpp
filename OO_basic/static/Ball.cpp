#include <string>
#include "Ball.h"
using namespace std;

// 非const靜態成員要在類別定義外初始化
double Ball::PI = 3.14159;

// 實作靜態函式 
double Ball::toRadian(double angle) {
        return 3.14159 / 180 * angle;
    }


// 預設建構函式
Ball::Ball() {
    _radius = 0.0; 
    _name = "noname ball"; 
}

Ball::Ball(double radius, const char *name) { 
    _radius = radius; 
    _name = name;
}

Ball::Ball(double radius, string &name) { 
    _radius = radius; 
    _name = name;
}
