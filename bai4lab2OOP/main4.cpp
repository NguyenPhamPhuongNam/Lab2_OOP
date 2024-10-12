#include <iostream>
#include "thisinh.h"

int main() {
    int n;
    std::cout << "Nhap so luong thi sinh: ";
    std::cin >> n;

    Thisinh* a = new Thisinh[n]; 
    for (int i = 0; i < n; ++i) {
        std::cout << "Nhap thong tin thi sinh " << (i + 1) << ":\n";
        a[i].Nhap();
    }

    std::cout << "\nThi sinh co tong diem > 15:\n";
    for (int i = 0; i < n; ++i) {
        if (a[i].Tong() > 15) {
            a[i].Xuat();
        }
    }

    Thisinh maxStudent = a[0];
    for (int i = 1; i < n; ++i) {
        if (a[i].Tong() > maxStudent.Tong()) {
            maxStudent = a[i];
        }
    }

    std::cout << "\nThi sinh co diem cao nhat:\n";
    maxStudent.Xuat();

    delete[] a; 
    return 0;
}
