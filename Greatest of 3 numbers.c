//Find the Greatest of Three Numbers in C
//Given three integers num1, num2 and num3 as inputs. The objective is to write a code to Find the Greatest of the Three Numbers in C Language. To do so we’ll check the numbers with each other and print the largest of them all.
 
//Example
//Input : num1 = 2 num2 = 9 num3 = 4
//Output : 9




// C code:

#include <stdio.h> 
int main ()
{
    int num1, num2, num3;
    
    num1=12,num2=17,num3=19;

    //checking if num1 is greatest
    if (num1 >= num2 && num1 >= num3)
        printf("%d is the greatest", num1);
        
    //checking if num2 is greatest
    else if(num2 >= num1 && num2 >= num3)
         printf("%d is the greatest", num2);

    //checking if num2 is greatest
    else if(num3 >= num1 && num3 >= num2)
         printf("%d is the greatest", num3);
    
    return 0;
}
