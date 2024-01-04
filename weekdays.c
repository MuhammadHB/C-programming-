#include <stdio.h>

int main()
{
    int number ;
    printf("enter the number between 1-7\n");
    scanf("%d",&number);
    
    switch (number) {
    case 1 :
    printf("to day is Sunday");
    break;
    case 2 :
    printf("to day is Saturday");
    break;
    case 3 :
    printf("to day is Monday");
    break;
    case 4 :
    printf("to day is Tuesday");
    break;
    case 5 :
    printf("to day is Wednesday");
    break;
    case 6 :
    printf("to day is Thursday");
    break;
    case 7 :
    printf("to day is Friday");
    break;
    default :
    printf("but true number please");
    }
    return 0;
}
