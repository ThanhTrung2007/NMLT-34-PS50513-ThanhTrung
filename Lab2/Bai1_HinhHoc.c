#include <stdio.h>

// Định nghĩa hằng số PI theo yêu cầu của đề bài
#define PI 3.14159

int main () {
    // Khai báo các biến cho Hình chữ nhật
    float chieuDai, chieuRong;
    float chuViHCN, dienTichHCN;

    // Khai báo các biến cho Hình tròn
    float banKinh;
    float chuViTron, dienTichTron;

    // ==========================================
    // 1. XỬ LÝ HÌNH CHỮ NHẬT
    // ==========================================
    printf("--- HINH CHU NHAT ---\n");
    printf("Nhap chieu dai: ");
    scanf("%f", &chieuDai);
    printf("Nhap chieu rong: ");
    scanf("%f", &chieuRong);

    // Tính toán HCN
    chuViHCN = (chieuDai + chieuRong) * 2;
    dienTichHCN = chieuDai * chieuRong;

    // Hiển thị kết quả HCN
    printf("Chu vi HCN: %.2f\n", chuViHCN);
    printf("Dien tich HCN: %.2f\n\n", dienTichHCN);

    // ==========================================
    // 2. XỬ LÝ HÌNH TRÒN
    // ==========================================
    printf("--- HINH TRON ---\n");
    printf("Nhap ban kinh: ");
    scanf("%f", &banKinh);

    // Tính toán Hình tròn sử dụng hằng số PI
    chuViTron = 2 * PI * banKinh;
    dienTichTron = PI * banKinh * banKinh;

    // Hiển thị kết quả Hình tròn
    printf("Chu vi Hinh Tron: %.2f\n", chuViTron);
    printf("Dien tich Hinh Tron: %.2f\n", dienTichTron);

    return 0;
}