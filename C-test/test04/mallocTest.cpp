//
//  mallocTest.cpp
//  C-test
//
//  Created by MAC on 16/11/2018.
//  Copyright © 2018 MAC. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void input(char **);
void output(char **);
void myfree(char **);
void sort(char **);

int main()
{
    char *p[5];
    input(p);
    myfree(p);
    return 0;
 
}
void input(char **p){
    int i, j;
    for(i = 0; i < 5; i++){
        
        char a[20];
        printf("문자열 %d: ", i + 1);
        scanf("%s", a);
        int len = (int)strlen(a);
        p[i] = (char *)malloc(len * sizeof(char*));
        for(j = 0; j < len; j++){
            p[i][j] = a[j];
        }
        rewind(stdin);
    }
}

void output(char **p){
    
}
void myfree(char **p){
    int j;
    for(j = 0; j < 5; j++){
        printf("p[%d] = %s\n", j, p[j]);
        free(p[j]);
    }
}

