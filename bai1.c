/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>

int main(){
    // Khai báo biến
float gt1=0,gt2=0,tong=0,hieu=0;;
    // Nhập dữ liệu

    printf("hãy nhập giá trị x :");
    scanf("%f",&gt1);
    printf("hãy nhập giá trị y :");
    scanf("%f",&gt2);

    // Xử lý, tính toán
    tong = gt1 + gt2;
    hieu = gt1 - gt2;
    
    // Hiển thị kết quả
  printf("Vậy giá trị tổng của X và Y là : %.2f\n",tong);
  printf("Vậy giá trị hiệu của X và Y là : %.2f\n",hieu);
  return 0;
}