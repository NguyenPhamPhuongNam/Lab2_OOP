#include "tamgiac.h"
#include<bits/stdc++.h>
using namespace std;


TamGiac::TamGiac() : x1(0), y1(0), x2(0), y2(0), x3(0), y3(0) {}


TamGiac::TamGiac(float x1, float y1, float x2, float y2, float x3, float y3) 
    : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3) {}


void TamGiac::Nhap() {
    cout << "Nhap toa do dinh 1 (x1, y1): "; cin >> x1 >> y1;
    cout << "Nhap toa do dinh 2 (x2, y2): "; cin >> x2 >> y2;
    cout << "Nhap toa do dinh 3 (x3, y3): "; cin >> x3 >> y3;
}


void TamGiac::Xuat() const {
    cout << "Toa do dinh 1: (" << x1 << ", " << y1 << ")\n";
    cout << "Toa do dinh 2: (" << x2 << ", " << y2 << ")\n";
    cout << "Toa do dinh 3: (" << x3 << ", " << y3 << ")\n";
}


void TamGiac::TinhTien(float dx, float dy) {
    x1 += dx; y1 += dy;
    x2 += dx; y2 += dy;
    x3 += dx; y3 += dy;
}


void TamGiac::PhongTo(float scale) {
    x1 *= scale; y1 *= scale;
    x2 *= scale; y2 *= scale;
    x3 *= scale; y3 *= scale;
}


void TamGiac::ThuNho(float scale) {
    x1 /= scale; y1 /= scale;
    x2 /= scale; y2 /= scale;
    x3 /= scale; y3 /= scale;
}


void TamGiac::Quay(float angle) {
    float cosA = cos(angle);
    float sinA = sin(angle);


    float x1_new = x1 * cosA - y1 * sinA;
    float y1_new = x1 * sinA + y1 * cosA;
    x1 = x1_new;
    y1 = y1_new;


    float x2_new = x2 * cosA - y2 * sinA;
    float y2_new = x2 * sinA + y2 * cosA;
    x2 = x2_new;
    y2 = y2_new;


    float x3_new = x3 * cosA - y3 * sinA;
    float y3_new = x3 * sinA + y3 * cosA;
    x3 = x3_new;
    y3 = y3_new;
}