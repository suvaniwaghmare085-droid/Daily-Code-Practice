//Check if the Year is a Leap Year or Not in C
//Given an integer input for the year, the objective is to check if the given year input is a leap year or not. To do so we check whether the year is divisible by 400 or not, if true then it’s a leap year, it’s not a leap year otherwise. Therefore we write a program to Check if the Year in a Leap Year or Not in C.

//Example
//Input : 2020
//Output : It's a Leap Year

// C code:
#include <stdio.h>
int main ()
{
    int year;
    year=2000;
    
    if(year % 400 == 0)
        printf("%d is a Leap Year",year);
        
    else if(year % 4 == 0  && year % 100 != 0)
        printf("%d is a Leap Year",year);
        
    else
        printf("%d is not a Leap Year",year);
    
    return 0;
}
