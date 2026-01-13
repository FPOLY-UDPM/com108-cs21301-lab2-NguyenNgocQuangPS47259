/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include <stdio.h>

int main(){
    float so1=4, so2=2,tich=3;
    printf("hãy nhập giá trị so1 :");
    scanf("%f",&so1);
    printf("hãy nhập giá trị so2 :");
    scanf("%f",&so2);
    tich=so1*so2;
    printf("tích số của số 1 và 2 là:%.2f\n",tich);
    if (so2==0)
    {
        printf("phương trình vô nghiệm");
    }else
    {
        printf("thương số của số 1 và 2 là : %.2f\n",so1/so2);
    }
    return 0;
} 