#include <bits/stdc++.h>
#include "diem.h"

using namespace std;

Diem::Diem() : iHoanh(0), iTung(0) {}

Diem::Diem(int Hoanh, int Tung) : iHoanh(Hoanh), iTung(Tung) {}

Diem::Diem(const Diem &x) : iHoanh(x.iHoanh), iTung(x.iTung) {}

void Diem::Xuat() const {
    cout << "(" << iHoanh << ", " << iTung << ")" << '\n';
}

int Diem::GetHoanhDo() const {
    return iHoanh;
}

int Diem::GetTungDo() const {
    return iTung;
}

void Diem::SetHoanhDo(int Hoanh) {
    iHoanh = Hoanh;
}

void Diem::SetTungDo(int Tung) {
    iTung = Tung;
}

void Diem::TinhTien(int dHoanh, int dTung) {
    iHoanh += dHoanh;
    iTung += dTung;
}

