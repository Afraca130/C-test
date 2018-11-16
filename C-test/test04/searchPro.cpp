//
//  searchPro.cpp
//  C-test
//
//  Created by MAC on 14/11/2018.
//  Copyright © 2018 MAC. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int strcheck(char *, char);
int main()
{
    char str[20], c;
    printf("문자열을 입력하시오: ");
    scanf("%s", str);
    rewind(stdin);
    printf("문자를 입력하시오: ");
    scanf("%c", &c);
    
    strcheck(str, c);
    
    return 0;
}
int strcheck(char *str, char c){

    int i, len = (int)strlen(str);
    printf("%d\n", len);
    
    
    for(i = 0; i < len - 1; i++){
        if(*str==c){
            printf("%d번째 문자 입니다.\n", i+1);
            
            printf("%s\n", str);
            
        }
        str += sizeof(char);
    }
    
    return 0;
//
//    int i, len = strlen(&str);
//    for(i = 0; i <len-1; i++ ){
//        if(str[i] == c){
//            printf("%d번째 문자입니다.", i-1);
//            return 0;
//        }
//        else
//            return -1;
//    }
    
}
