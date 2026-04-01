//Sum of First N Natural Numbers in C
//In this article, we will see C Program to Find the Sum of First N Natural Numbers. A Natural number is the same as a Counting number. They are used to Count the number of real physical objects. Natural numbers start from 1 and go on infinite.

//The positive numbers 1,2,3 ... are known as natural numbers.


//Formula for Sum of First n natural numbers is : n(n+1)/2.
//If you want to add first 5 Natural number 
//then we find the Sum of 1+2+3+4+5 =15.

// C code:
#include <stdio.h>

int main()
{
    int n; 
    scanf("%d",&n);
    
    int sum = 0;
    
    for(int i=1;i<=n;i++) 
        // is same as writing sum = sum + i
        sum += i;
        
    printf("Sum is %d",sum);
    
    return 0;
}

// Time complexity : O(n)
// Space complexity : O(1)
