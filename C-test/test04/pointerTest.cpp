//
//  pointerTest.cpp
//  C-test
//
//  Created by MAC on 15/11/2018.
//  Copyright © 2018 MAC. All rights reserved.
//

#include <stdio.h>
int a[] = {0, 1, 2, 3, 4};
int *p[] = {a, a+1, a+2, a+3, a+4};
int **pp = p;

int main(){
//    int a[3][2] = {{1,2}, {3,4}, {5,6}};
//    int i, j;
//    for(i = 0; i < 3; i++){
//        printf("\n *(a+%d) : %p\t", i, *(a+i));
//        for(j = 0; j < 2; j++){
//            printf("%5d", *(*(a+i)+j));
//        }
//    }
//    return 0;
    
 
    pp++; printf("%d, %d, %d\n", pp - p, *pp - a, **pp);
    *pp++; printf("%d, %d, %d\n", pp - p, *pp - a, **pp);
    *++pp; printf("%d, %d, %d\n", pp - p, *pp - a, **pp);
    pp = p;
    **pp++; printf("%d, %d, %d\n", pp - p, *pp - a, **pp);
    *++pp; printf("%d, %d, %d\n", pp - p, *pp - a, **pp);
    ++**pp; printf("%d, %d, %d\n", pp - p, *pp - a, **pp);
    return 0;

    

}
