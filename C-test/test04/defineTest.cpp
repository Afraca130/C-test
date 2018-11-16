//
//  defineTest.cpp
//  C-test
//
//  Created by MAC on 15/11/2018.
//  Copyright © 2018 MAC. All rights reserved.
//

#include <stdio.h>
#define PRINT(x) printf(#x " = %d\n", x)
int main(){
    int a = 5, b =10;
    PRINT(a + b);
    PRINT(a * 3 );PRINT(b / 5);PRINT((100 + a ) * b);
    return 0;
}
