#ifndef POINT_H
#define POINT_H

class Diem {
private:
    float hoanhDo; 
    float tungDo;  
public:
    
    void Nhap();
    
    
    void NhanDoi();
    
    
    void GanVeGoc();
    
    
    void TinhTien(int k, float d);

    void Xuat() const;
};

#endif
