#include "tamgiac.h"
#include "bits/stdc++.h"
using namespace std;

int main() {
    TamGiac tg;

    cout << "Nhap tam giac: \n";
    tg.Nhap();


    cout << "\nTam giac ban dau: \n";
    tg.Xuat();


    tg.TinhTien(2.0, 3.0);
    cout << "\nTam giac sau khi tinh tien (2.0, 3.0): \n";
    tg.Xuat();


    tg.PhongTo(2.0);
    cout << "\nTam giac sau khi phong to (scale = 2.0): \n";
    tg.Xuat();

    tg.ThuNho(2.0);
    cout << "\nTam giac sau khi thu nho (scale = 2.0): \n";
    tg.Xuat();


    tg.Quay(3.14159 / 4);
    cout << "\nTam giac sau khi quay (goc 45 do): \n";
    tg.Xuat();

    return 0;
}
