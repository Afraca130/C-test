#include<stdio.h>
#include "getch.cpp"
int getch(void);
int main()
{
    printf("Hello");
    printf("Hello\t");
    printf("Hello"); getch();
    printf("Korean\r"); getch();
    printf("C\n"); getch();
    printf("King\b\b\b"); getch();
    printf("ong\n"); getch();
    return 0;
    
}
