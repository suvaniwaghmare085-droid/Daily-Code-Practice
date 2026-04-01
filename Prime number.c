/*Check Whether a Number is Prime Number or Not in C
Given an integer input, the objective is to check whether or not the input integer is a prime or not. 
  In order to do so we check if the number is divisible by 2, if so it’s not a prime. 
  We also divide the numbers with the input until square root of the input, if any of them divides the number perfectly, it’s not a prime.  
  Here are some of the methods to Check Whether a Number is Prime or Not in C*/

// C code:

#include < stdio.h>  

int main()
{
    int i, count = 0;
    int num = 19;
    
    // checking number of divisors b/w 1 & num
    for(i = 1; i <= num; i++) {
      if(num % i == 0) 
        count += 1;
    } 
     // 0 & 1 are not prime number
       if(num == 0 || num == 1)
         printf("%d is not prime", num); 
     //if number of divisors are > 2 then not prime else prime 
       else if(count > 2) 
          printf("%d is not prime", num);
       else
         printf("%d is prime", num);

  return 0;
}
// Time complexity O(N)
// Space complexity O(1)
