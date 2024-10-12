#include <bits/stdc++.h>
#include "point.h"
using namespace std;

int main() {
    Diem d;
    d.Nhap();

    int n;
    cout << "Nhap so luong chi thi: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int x;
        cout << "Nhap chi thi " << (i + 1) << ": ";
        cin >> x;

        switch (x) {
            case 1:
                d.NhanDoi();
                break;
            case 2:
                d.GanVeGoc();
                break;
            case 3: {
                int k;
                float h;
                cout << "Nhap k (0: tinh tien theo truc x, k khac 0: tinh tien theo truc y): ";
                cin >> k;
                cout << "Nhap do tinh tien h: ";
                cin >> h;
                d.TinhTien(k, h);
                break;
            }
            default:
                break;
        }
    }


    d.Xuat();

    return 0;
}
