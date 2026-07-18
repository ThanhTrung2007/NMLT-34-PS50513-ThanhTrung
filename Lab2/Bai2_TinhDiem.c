#include <stdio.h>

int main() {
    float diemToan, diemLy, diemHoa;
    float diemTrungBinh;

    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);
    printf("Nhap diem Ly: ");
    scanf("%f", &diemLy);
    printf("Nhap diem Hoa: ");
    scanf("%f", &diemHoa);

    // Tính điểm trung bình với hệ số và ÉP KIỂU (float)
    // Tổng là (Toan*3 + Ly*2 + Hoa)
    // Chia cho 6.0 để đảm bảo kết quả là số thực
    diemTrungBinh = (float)(diemToan * 3 + diemLy * 2 + diemHoa) / 6.0;

    printf("Diem trung binh: %.2f\n", diemTrungBinh);

    return 0;
}