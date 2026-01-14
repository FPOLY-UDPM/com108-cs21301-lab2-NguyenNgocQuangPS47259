/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main(){
    // Khai báo biến
float r=0,pi=3.14;
    float chuVi=0;
    float dienTich=0;
    // Nhập dữ liệu
printf("hãy nhập bán kính hình tròn :");
    scanf("%f",&r);

    // Xử lý, tính toán
chuVi = 2 * pi * r;
dienTich = r *r*pi;
    // Hiển thị kết quả
printf("giá trị chu vi của hình tròn : %.2f\n",chuVi);
printf("giá trị diện tích của hình tròn : %.2f\n",dienTich);
return 0;
}