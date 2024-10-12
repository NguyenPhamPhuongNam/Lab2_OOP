#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
private:
    float x1, y1; 
    float x2, y2; 
    float x3, y3;

public:
    
    void Nhap();

   
    void TinhTien(float angle, float distance);

    
    void Xuat() const;
};

#endif
