//bai tap 3
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b;

    printf("Nhap do dai canh thu nhat cua hcn : ");
    scanf("%f", &a);
    printf("Nhap do dai canh thu hai cua hcn : ");
    scanf("%f", &b);

    printf("\nChu vi cua hcn la : %f\n", (a+b)*2);
    printf("\nDien tich cua hcn la : %f\n", a*b);

    return 0;
}
