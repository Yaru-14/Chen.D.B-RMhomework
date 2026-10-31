//202610116105
//陈达彬

#include <stdio.h>

int main ()
{
    float i = 0;
    
    scanf("%f", & i );

    if ( i == 0 )
    {
        printf("零");
    }
    else if ( i > 0 )
    {
        printf("正数");
    }
    else
    {
        printf("负数");
    }

    return 0;
}