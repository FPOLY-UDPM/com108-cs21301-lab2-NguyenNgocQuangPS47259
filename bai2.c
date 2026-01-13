/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
    // Khai báo biến
    float dai=0,rong=0;
    float chuVi=0;
    float dienTich=0;

    // Nhập dữ liệu
printf("hãy nhập giá trị chiều dài hình chử nhật :");
    scanf("%f",&dai);
printf("hãy nhập giá trị chiều rộng hình chử nhật:");
    scanf("%f",&rong);
    // Xử lý, tính toán
    
    chuVi = dai*2+ rong*2;
    
    
    dienTich= dai*rong;
    
    // Hiển thị kết quả
printf("Vậy giá trị chu vi hình chử nhật là : %.2f\n",chuVi);
printf("Vậy giá trị dien tích hình chử nhật là : %.2f\n",dienTich);
return 0;
}