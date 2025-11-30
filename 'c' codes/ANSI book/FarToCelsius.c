#include <stdio.h>
int main()
{
    float c;
    float f =75;

    c= 5.0/9.0 * (f-32.0);

    printf("The celcius equivelent of %5.2f of degree Fahrenheit\n",f);

    printf("  is %5.2f degrees\n",c);

    return 0;
    
}