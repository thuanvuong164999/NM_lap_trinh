//Phan C: du lieu hang
#include <stdio.h>

#define NAME "HCMC University" //khai bao du lieu hang bang #define, ten viet HOA
#undef NAME //xoa du lieu trong Hang
#define NAME "HCMC UNIVERSITY" //khai bao moi
//khai bao du lieu Hang bang #define co the thay doi
const int A = 60; //khai bao du lieu hang bang const, ten viet HOA
//khai bao Hang bang const khong the thay doi

int main()
{
    //A = 70; //bi loi
    printf("%s is over %d ysers old \n", NAME, A);

    return 0;
}
