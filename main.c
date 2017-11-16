//
//  main.c
//  Switch Case Decision making
//
//  Created by Eun Jae Lee on 16/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
/*  switch (expression) { // should pass expression

 case 'constant 1';
        statement1;
            break1;
 
case 'constant 2';
        statement2;
        break2;
 
 default:
 statement3;
}
*/
#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a,b;
    float result;
    char ch;
    
    printf("Press + for addition \n");
    
    printf("Press - for subtraction\n");
    
    printf("Press * for multiplication\n");
    
    printf("Press / for division\n");
    
    scanf("%c", &ch);
    
    printf("Enter two numbers\n");
    scanf("%d%d", &a,&b);
    
    switch (ch) {
        case '+':
            result = a+b;
            printf("Addition is %f \n",result);
            break;
            
        case '-':
            result = a-b;
            printf("Subtraction is %f", result);
            break;
            
            
        case '*':
            result = a*b;
            printf("Multiplication is %f \n",result);
            break;
            
        case '/':
            result = a/b;
            printf("Division is %f", result);
            break;
            
        
        default:
            printf("Wrong Operator, Try again!\n");
    }
    
    
    
    getchar();
    //return 0;
}
