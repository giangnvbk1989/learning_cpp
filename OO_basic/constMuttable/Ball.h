#include <string>
using namespace std;
#include <string>
using namespace std;

class Ball { 
public: 
    Ball(); 
    Ball(double, const char*); 
    Ball(double, string&); 
 
    double radius() const {
        // inside const here member are redonly
        //_radius=1;xx
        kerker=0; // unless the member is mutable
        return _radius;
    }
 
    //since return is reference
    // you need to add const before string 
    // to avoid change the _name value
    const string& name() const{
        return _name; 
    }
 
    void radius(double radius) {
        _radius = 1;//it' ok
        _radius = radius;
    } 
 
    void name(const char *name) {
        _name = name;
    }
 
    void name(string& name) {
        _name = name;
    }
 
    double volumn() {
        return (4 / 3 * 3.14159 * _radius * _radius * _radius); 
    }
 
private:
    double _radius; // 半徑 
    string _name; // 名稱 
    mutable double kerker;
};
