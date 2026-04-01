/*In this C program, we will code Sum of Digits of a Number in C we will allow the user to enter any number and then we will divide the number into individual digits and add those individuals (sum=sum+digit) digits using While Loop.

Ex:-  number is 231456

 2 + 3 + 1 + 4 + 5 + 6 = 21

Sum of digit of a given number is 21*/

// C code:
#include<stdio.h>

int main ()
{
    int num, sum = 0;
 
    num = 1234;
    printf("The number is = %d\n",num);

    //loop to find sum of digits
    while(num!=0){
        sum += num % 10;
        num = num / 10;
    }
 
    //output
    printf("Sum: %d\n",sum);
 
    return 0;

}
// Time complexity : O(N)
// Space complexity : O(1)
