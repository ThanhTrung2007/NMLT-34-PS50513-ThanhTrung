#include <stdio.h>

int main() {
    float a, b;
    float x;

    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);

    // Vì đề bài giả định hệ số a nhập vào luôn khác 0
    // Công thức nghiệm: x = -b / a
    x = -b / a;

    // Hiển thị kết quả làm tròn 2 chữ số thập phân
    printf("Nghiem cua phuong trinh la: x = %.2f\n", x);

    return 0;
}