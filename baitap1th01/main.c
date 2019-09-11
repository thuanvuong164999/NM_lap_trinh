//bai tap 1 : in tensv, diem trung binh
#include <stdio.h>
#include <math.h>

int main()
{
    char tensv[100];
    float dtoan, dly, dhoa;

    printf("Nhap ten sinh vien : ");
    scanf("%[^\n]", &tensv);fflush(stdin);

    printf("Nhap diem toan : ");
    scanf("%f", &dtoan);fflush(stdin); //sau khi thuc hien lenh nhap va Enter thi Enter khong co tac dung o cau lenh sau
    printf("Nhap diem ly : ");
    scanf("%f", &dly);fflush(stdin);
    printf("Nhap diem hoa : ");
    scanf("%f", &dhoa);fflush(stdin);

    printf("Sinh vien ten %s co diem trung binh la : %f\n", tensv, (dtoan+dly+dhoa)/3 );

    return 0;
}
