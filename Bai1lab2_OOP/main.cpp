#include <bits/stdc++.h>
#include "diem.h"

using namespace std;

int main() {
    Diem d1(2, 3); 
    d1.Xuat();


    cout << "Hoanh do: " << d1.GetHoanhDo() << '\n';
    cout << "Tung do: " << d1.GetTungDo() << '\n';

    d1.SetHoanhDo(5);
    d1.SetTungDo(7);
    d1.Xuat();

    d1.TinhTien(2, -3);
    d1.Xuat();

    return 0;
}

