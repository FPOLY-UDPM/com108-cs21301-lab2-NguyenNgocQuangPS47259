/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main(){
    // Khai báo biến
float diemToan=0,diemLy=0,diemHoa=0,diemTrungBinh=0;
    // Nhập dữ liệu
printf("hãy nhập điểm toán :\n");
scanf("%f",&diemToan);
printf("hãy nhập điểm lý :\n");
scanf("%f",&diemLy);
printf("hãy nhập điểm hóa :\n");
scanf("%f",&diemHoa);
    // Xử lý, tính toán
diemTrungBinh= (diemHoa+ diemLy*2+diemToan*3)/6;
    // Hiển thị kết quả
printf("Điểm trung bình :%.2f",diemTrungBinh);
return 0;
}