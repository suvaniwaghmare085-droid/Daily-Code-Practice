/*Prime Numbers in a Given Range in C
A number that is divisible only by itself and 1 (e.g. 2, 3, 5, 7, 11).

The C program reduces the number of iterations within the loop. It is made to identify or calculate the prime numbers within a given range of numbers inserted by the user.

Ex:- if the user enters a range as 40 – 50 

In that range 41, 43, 47, these three number are prime number.*/

// C code:
#include <stdio.h>

int checkPrime(int num)
{
    // 0, 1 and negative numbers are not prime
    if(num < 2){
        return 0;
    }
    else{   
    // no need to run loop till num-1 as for any number x the numbers in
    // the range(num/2 + 1, num) won't be divisible anyways. 
    // Example 36 wont be divisible by anything b/w 19-35
        int x = num/2;
        for(int i = 2; i < x; i++)
        {
            if(num % i == 0)
            {
                return 0;
            }
        }
    }
    // the number would be prime if we reach here
    return 1;
}
int main()
{
    int a=10, b=20;
  
    
    for(int i=a; i <= b; i++){
        if(checkPrime(i))
            printf("%d ",i);
    }
 
    return 0;
}
//Time Complexity: O(N^2)
//Space Complexity O(1)
