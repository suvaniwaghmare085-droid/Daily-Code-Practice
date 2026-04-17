//Find the Sum of Numbers in a Given Range in C
//Given two integer inputs num1 and num2, the objective is to write a code to Find the Sum of Numbers in a Given Range in C. To do so we’ll keep iterating and adding the numbers from num1 until num2 to the Sum variable.

//Example
//Input : 2 4
//Output : 2 + 3 + 4 = 9



// C code
#include <stdio.h>

int main()
{
    int a = 5;
    int b = 10;
    
    int sum = 0;
    
    for (int i = a; i <= b; i++)
        sum = sum + i;
    
    printf("%d",sum);
    
    return 0;
}
// Time complexity : O(N)
// Space complexity : O(1)
