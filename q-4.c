#include <stdio.h>

int main()
{
    char input;

    printf("Enter M For Monday \n");
    printf("Enter T For Tuesday \n");
    printf("Enter W For Wednesday \n");
    printf("Enter t For Thursday \n");
    printf("Enter F For Friday \n");
    printf("Enter S For Saturday \n");
    printf("Enter s For Sunday \n");
    printf("Enter your choice : ");
    scanf("%c", &input);
    switch (input)
    {
    case 'M':
        printf("Monday\n");
        break;
    case 'T':
        printf("Tuesday\n");
        break;
    case 'W':
        printf("Wednesday\n");
        break;
    case 't':
        printf("Thusday\n");
        break;
    case 'F':
        printf("Friday\n");
        break;
    case 'S':
        printf("Saturday\n");
        break;
    case 's':
        printf("Sunday\n");
        break;
    default :
    printf("Enter Valid Letter\n");
    }

    return 0;
}