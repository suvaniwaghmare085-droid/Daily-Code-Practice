//Find the Greatest of the two numbers in C
//Given two integer inputs num1 and num2, the objective if to write a code to Find the Greatest of the Two Numbers in C.
 
//Example
//Input : num1 = 5 and num2 = 6
//Output : 6

//C code:
#include<stdio.h>

int main ()
{
  int num1, num2;
  num1=12,num2=13;

  if (num1 == num2)
    printf("both are equal");
  else if (num1 > num2) 
    printf("%d is greater", num1);
  else
    printf("%d is greater", num2);

  return 0;
}
