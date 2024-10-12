#ifndef TAMGIAC_H
#define TAMGIAC_H

class TamGiac {
private:
    float x1, y1, x2, y2, x3, y3; 
public:
    TamGiac(); 
    TamGiac(float x1, float y1, float x2, float y2, float x3, float y3); 

    void Nhap(); 
    void Xuat() const;
    void TinhTien(float dx, float dy); 
    void PhongTo(float scale); 
    void ThuNho(float scale); 
    void Quay(float angle);  
};

#endif