#include<stdio.h>

int main(){

    char a;

    printf("Enter The Character :- ");
    scanf("%c", &a);

    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
    {
        printf("The character '%c' is an alphabet.\n", a);
    }else if (a >= '0' && a <= '9')
    {
        printf("The character '%c' is an digit.\n", a);
    }
    else{
        printf("The character '%c' is an Special Character.\n", a);
    }

    return 0;
}