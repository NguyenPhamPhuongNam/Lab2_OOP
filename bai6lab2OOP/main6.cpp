#include <bits/stdc++.h>
#include "triangle.h"
using namespace std;

int main() {
    Triangle t;
    t.Nhap(); 

    float angle, distance;
    cout << "Nhap huong tinh tien (do) va do dai tinh tien: ";
    cin >> angle >> distance;

   
    t.TinhTien(angle, distance);

    
    t.Xuat();

    return 0;
}
