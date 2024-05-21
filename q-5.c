#include<stdio.h>

int main(){

    int a, b, c, d, e, f, g, total;
    float per;
    
    printf("Physics :- ");
    scanf("%d", &a);

    printf("Chemistry :- ");
    scanf("%d", &b);

    printf("Biology :- ");
    scanf("%d", &c);

    printf("Mathematics :- ");
    scanf("%d", &d);

    printf("Computer :- ");
    scanf("%d", &e);

    total = a + b + c + d + e;
    printf("Total Obtained Marks :- %d\n", total);

    per = total / 5;
    printf("Percentage = %.2f\n", per);

    return 0;
}