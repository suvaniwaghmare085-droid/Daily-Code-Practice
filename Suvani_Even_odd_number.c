//The number is Even or Odd Program in C
//We can determine whether a number is Even or Odd program in C. This can be tested using different methods. The test can be done using simple methods such as
// Testing the number’s divisibility by 2.
// If the remainder is zero, the number is even.
// If the remainder is not zero, then the number is odd.

//C code:

//Method 1:

#include <stdio.h>

int main ()
{
    int number;
    printf ("Insert a number \n");
    scanf ("%d", &number);

    //Checking if the number is divisible by 2
    if (number % 2 == 0)
        printf ("Even");
    else
        printf ("Odd");
  
    return 0;
}

// Method 2:

#include <stdio.h>
int main ()
{
    int number;
    printf ("Insert a number \n");
    scanf ("%d", &number);
    
    //Checking if the number is divisible by 2
    number % 2 == 0? printf ("Even"):printf ("Odd");
    
    return 0;
}

