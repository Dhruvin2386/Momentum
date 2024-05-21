#include<stdio.h>

int main(){

    int a;

    printf("Enter the number :- ");
    scanf("%d", &a);

    (a % 2 == 0)? printf("The number %d is even.\n", a): printf("The number %d is odd.\n", a);

    return 0;
}