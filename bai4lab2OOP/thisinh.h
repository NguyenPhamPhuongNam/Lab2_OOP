#ifndef THISINH_H
#define THISINH_H

#include <bits/stc++.h>

class Thisinh {
private:
    std::string Ten;
    std::string MSSV;
    int iNgay, iThang, iNam;
    float fToan, fVan, fAnh;

public:
    void Nhap();
    void Xuat() const;
    float Tong() const;
};

#endif

