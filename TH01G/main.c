//SU DUNG THU VIEN HAM
#include <stdio.h>
#include <math.h>

int main()
{
    int a= 3, b= -5;
    double base = 2, exponent = 3, result;

    result = pow(base, exponent); //ham pow() : luy thua
    printf("Tri tuyet doi cua a la : %f\n", fabs(a)); //fabs() , %f cho ham()
    printf("Tri tuyet doi cua b la : %f\n", fabs(b));
    printf("%f^%f = %f", base, exponent, result);

    return 0;
}
