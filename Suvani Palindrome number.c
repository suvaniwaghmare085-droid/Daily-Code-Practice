//Palindrome Number in C


// C code:

#include<stdio.h> 

// Recursive way to find reverse of a number
int getReverse(int num, int rev){
    if(num == 0)
        return rev;
    
    int rem = num % 10;
    rev = rev * 10 + rem;
    
    return getReverse(num / 10, rev);
}

int main ()
{
    int num, reverse = 0;
    num=12321;
    printf("The number is: %d\n",num);
        
    // palindrome if num and reverse are equal
    if (num == getReverse(num, reverse))
        printf("%d is Palindrome\n", num);
    else
        printf("%d is Not Palindrome\n", num);

}
