//
//  getch.cpp
//  C-test
//
//  Created by MAC on 14/11/2018.
//  Copyright © 2018 MAC. All rights reserved.
//
#include <stdio.h>
#include <termios.h>
#include <unistd.h>

int getch(void)

{
    
    struct termios oldt, newt;
    
    int ch;
    
    tcgetattr( STDIN_FILENO, &oldt );
    
    newt = oldt;
    
    newt.c_lflag &= ~( ICANON | ECHO );
    
    tcsetattr( STDIN_FILENO, TCSANOW, &newt );
    
    ch = getchar();
    
    tcsetattr( STDIN_FILENO, TCSANOW, &oldt );
    
    return ch;
    
}
