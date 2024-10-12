#include <bits/stdc++.h>
#include "triangle.h"
using namespace std;


void Triangle::TinhTien(float angle, float distance) {
   
    float radian = angle * (3.14 / 180.0);

  
    float dx = distance * cos(radian);
    float dy = distance * sin(radian);

   
    x1 += dx;
    y1 += dy;
    x2 += dx;
    y2 += dy;
    x3 += dx;
    y3 += dy;
}


void Triangle::Nhap() {
    cout << "Nhap toa do 3 diem (x1, y1, x2, y2, x3, y3): ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
}


void Triangle::Xuat() const {
    cout << "(" << x1 << "," << y1 << ")" << '\n';
    cout << "(" << x2 << "," << y2 << ")" << '\n';
    cout << "(" << x3 << "," << y3 << ")" << '\n';
}
