#include <string>
using namespace std;

class Ball { 
public: 
    // 宣告靜態成員
    static double PI;
    // const 靜態成員可以在類別定義中初始化
    // static const double PI = 3.14159;

    Ball(); 
    Ball(double, const char*); 
    Ball(double, string&); 
 
    // 宣告靜態函式 
    static double toRadian(double);

    double radius() {
        return _radius;
    }
 
    string& name() {
        return _name; 
    }
 
    void radius(double radius) {
        _radius = radius;
    } 
 
    void name(const char *name) {
        _name = name;
    }
 
    void name(string& name) {
        _name = name;
    }
 
    double volumn() {
        return (4 / 3 * PI * _radius * _radius * _radius); 
    }
 
private:
    double _radius; // 半徑 
    string _name; // 名稱 
};
