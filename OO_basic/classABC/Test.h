class Ball; // Forward declaration 前置宣告

class Test { 
public:
    Test();
    Test(Ball*); 
 
    Ball* ball(); 
    void ball(Ball*);

private:
    Ball *_ball; // 名稱 
};

