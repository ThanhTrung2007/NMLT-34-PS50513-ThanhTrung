#include <stdio.h>

int main() {
    // Khai báo các biến để lưu trữ thông tin sinh viên
    char mssv[20];
    char hoTen[50];
    int namSinh;
    int tuoi;
    float diemTB;

    // --- LUỒNG NHẬP DỮ LIỆU ---
    printf("Nhap ma so sinh vien: ");
    scanf("%s", mssv);
    
    // Xóa bộ nhớ đệm để không bị trôi lệnh fgets khi nhập chuỗi có khoảng trắng
    while (getchar() != '\n'); 

    printf("Nhap ho va ten: ");
    fgets(hoTen, sizeof(hoTen), stdin);
    // Xóa ký tự xuống dòng '\n' do fgets tự động thêm vào cuối chuỗi
    for (int i = 0; hoTen[i] != '\0'; i++) {
        if (hoTen[i] == '\n') {
            hoTen[i] = '\0';
            break;
        }
    }

    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);

    printf("Nhap diem trung binh: ");
    scanf("%f", &diemTB);

    // --- TỰ ĐỘNG TÍNH TUỔI ---
    tuoi = 2026 - namSinh;

    // --- LUỒNG XUẤT DỮ LIỆU (ĐÚNG ĐỊNH DẠNG) ---
    printf("\n-------------------------------\n");
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho Va Ten: %s\n", hoTen);
    printf("Nam sinh: %d\n", namSinh);
    printf("Tuoi: %d\n", tuoi);
    printf("Diem Trung Binh: %.2f\n", diemTB); // %.2f để lấy 2 chữ số thập phân cho đẹp
    printf("-------------------------------\n");

    return 0;
}