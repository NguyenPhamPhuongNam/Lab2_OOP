#ifndef DIEM_H
#define DIEM_H

class Diem {
private:
    int iHoanh;
    int iTung;

public:
    Diem();

    Diem(int Hoanh, int Tung);

    Diem(const Diem &x);

    void Xuat() const;

    int GetHoanhDo() const;
    int GetTungDo() const;
    void SetHoanhDo(int Hoanh);
    void SetTungDo(int Tung);

    void TinhTien(int dHoanh, int dTung);
};

#endif
