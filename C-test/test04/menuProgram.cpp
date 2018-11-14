//
//  menuProgram.cpp
//  C-test
//
//  Created by MAC on 14/11/2018.
//  Copyright © 2018 MAC. All rights reserved.
//

#include <stdio.h>

void inputMenu();
void outputMenu();
void searchMenu();
void deleteMenu();
void exitMenu();

int main(){
    
    int num = 1;
    while (num != 5) {

        printf("\t\t\t\t1. 입력하기 \n");
        printf("\t\t\t\t2. 출력하기 \n");
        printf("\t\t\t\t3. 검색하기 \n");
        printf("\t\t\t\t4. 삭제하기 \n");
        printf("\t\t\t\t5. 종류하기 \n");
        printf("메뉴를 선택하세요 : ");
        num = getchar();
        rewind(stdin);
//        scanf("%d", &num);
        num -= 48;
//        printf("%d", num);
        
        if(num == 1){
            inputMenu();
        }
        else if(num == 2){
            outputMenu();
        }
        else if(num == 3){
            searchMenu();
        }
        else if(num == 4){
            deleteMenu();
        }
        printf("");
       
    }
}
void inputMenu()
{
    printf("입력하기-----\n");
}
void outputMenu()
{
    printf("출력하기-----\n");
}
void searchMenu()
{
    printf("검색하기-----\n");
}
void deleteMenu()
{
    printf("삭제하기-----\n");
}
void exitMenu()
{
    printf("종류하기-----\n");
}
