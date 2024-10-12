#include "thisinh.h"

void Thisinh::Nhap() {
    std::cout << "Nhap ten: ";
    std::cin.ignore();
    std::getline(std::cin, Ten);
    
    std::cout << "Nhap MSSV: ";
    std::cin >> MSSV;
    
    std::cout << "Nhap ngay sinh (ngay thang nam): ";
    std::cin >> iNgay >> iThang >> iNam;

    std::cout << "Nhap diem Toan: ";
    std::cin >> fToan;

    std::cout << "Nhap diem Van: ";
    std::cin >> fVan;

    std::cout << "Nhap diem Anh: ";
    std::cin >> fAnh;
}

void Thisinh::Xuat() const {
    std::cout << "Ten: " << Ten << ", MSSV: " << MSSV
              << ", Ngay sinh: " << iNgay << "/" << iThang << "/" << iNam
              << ", Diem Toan: " << fToan << ", Diem Van: " << fVan
              << ", Diem Anh: " << fAnh << '\n';
}

float Thisinh::Tong() const {
    return fToan + fVan + fAnh;
}

