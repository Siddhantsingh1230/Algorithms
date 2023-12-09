#include <stdio.h>

//itterative approach

int factorial(int num){
    int fact = 1;
    while(num>=1){
        fact*=num;
        num--;
    }
    return fact;
}

// recursive factorial
int recFactorial(int num){
    if(num<=1){
        return 1;
    }
    return num * recFactorial(num-1);
}

int main()
{
    int num = 6;
    printf("Itteraive Factorial of %d is %d\n",num,factorial(num));
    printf("recursive Factorial of %d is %d",num,recFactorial(num));
    return 0;
}