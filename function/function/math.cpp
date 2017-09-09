#include "math.h"

//inline [ref](https://dotblogs.com.tw/v6610688/2013/11/27/introduction_inline_function)

// int pow2(int num) { 
int pow2(int num) { 
    return num*num; 
} 

int pow(int n, int p) { 
    int r = 1; 

    for(int i = 0; i < p; i++) 
        r *= n;
 
    return r; 
}

