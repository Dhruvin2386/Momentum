#include<stdio.h>

int main(){

    float a,b,c,d;

    printf("Enter A value ");
    scanf("%f", &a);

    printf("Enter B value ");
    scanf("%f", &b);

    printf("Enter C value ");
    scanf("%f", &c);

    printf("Enter D value ");
    scanf("%f", &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A is max.\n");
            }
            else{
                printf("D is max\n");
            }
            
        }
        else{
            if (c > d)
            {
                printf("C is max.\n");
            }
            else{
                printf("D is max.\n");
            }
            
        }
        
    }
    else{
        if (b > c)
        {
            if (b > d)
            {
                printf("B is max.\n");
            }
            else{
                printf("D is max.\n");
            }
            
        }
        else{
            if (c > d)
            {
                printf("C is max.\n");
            }
            else{
                printf("D is max.\n");
            }
            
        }
        
    }

    return 0;
}