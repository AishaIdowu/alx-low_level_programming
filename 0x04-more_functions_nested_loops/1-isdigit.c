#include "main.h"
#include<stdio.h>
#include<ctype.h>
/**
 *_isdigit - checks for a digit.
 *c: input.
 *
 *Return: 1 if c is a digit
 *0 otherwise.
 */
int main()
{

    int _isdigit(int c);
    char c;
    c = '0';
    printf("Result when numeric character is passed: %d", isdigit(c));

    c = '+';
    printf("\nResult when non-numeric character is passed: %d", isdigit(c));
             
        return 0;   
    
}