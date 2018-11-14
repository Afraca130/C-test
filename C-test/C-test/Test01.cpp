//
//  Test01.cpp
//  C-test
//
//  Created by MAC on 13/11/2018.
//  Copyright © 2018 MAC. All rights reserved.
//

#include "Test01.hpp"
#include<stdio.h>
void print_number(int);
int main()
{
    int num;
    num = 1;
    print_number(num);
    num = 3;
    print_number(num);
    return 0;
}
void print_number(int n)
{
    printf("정수값은 %d입니다.\n", n);
    return;
}
