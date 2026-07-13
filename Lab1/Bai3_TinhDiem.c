#include <stdio.h>

int main() {
    // Khai báo các biến theo đúng yêu cầu đề bài
    char mssv[20];
    char hoTen[50];
    float diemToan, diemLy, diemHoa;
    float diemTrungBinh;

    // --- LUỒNG NHẬP DỮ LIỆU ---
    printf("Nhap ma so sinh vien: ");
    scanf("%s", mssv);
    
    // Xóa bộ nhớ đệm để không bị trôi lệnh nhập chuỗi Tiếp theo
    while (getchar() != '\n'); 

    printf("Nhap ho va ten: ");
    fgets(hoTen, sizeof(hoTen), stdin);
    
    // Xóa ký tự xuống dòng do hàm fgets tự động thêm vào
    for (int i = 0; hoTen[i] != '\0'; i++) {
        if (hoTen[i] == '\n') {
            hoTen[i] = '\0';
            break;
        }
    }

    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);

    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);

    printf("Nhap diem Hoa: ");
    scanf("%f", &diemHoa);

    // --- CÔNG THỨC TOÁN HỌC CÓ HỆ SỐ (Toán * 2) ---
    diemTrungBinh = (diemToan * 2.0 + diemLy + diemHoa) / 4.0;

    // --- LUỒNG XUẤT DỮ LIỆU (ĐÚNG ĐỊNH DẠNG MẪU ĐỀ BÀI) ---
    printf("\nMa so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Diem Trung Binh: %.2f\n", diemTrungBinh);

    return 0;
}