#include <bits/stdc++.h>
#include "point.h"
using namespace std;

void Diem::Nhap() {
    cout << "Nhap hoanh do: ";
    cin >> hoanhDo;
    cout << "Nhap tung do: ";
    cin >> tungDo;
}


void Diem::NhanDoi() {
    hoanhDo *= 2;
    tungDo *= 2;
}


void Diem::GanVeGoc() {
    hoanhDo = 0;
    tungDo = 0;
}


void Diem::TinhTien(int k, float d) {
    if (k == 0) {
        hoanhDo += d; 
    } else {
        tungDo += d;  
    }
}


void Diem::Xuat() const {
    cout << "(" << hoanhDo << "," << tungDo << ")" << '\n';
}
