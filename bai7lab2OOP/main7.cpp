#include <bits/stdc++.h>
#include "polygon.h"

using namespace std;

int main() {
    int n;
    cin >> n; 
    if (n <= 2) {
        cout << "So diem phai lon hon 2." <<'\n';
        return 1;
    }

    Polygon polygon(n); 
    polygon.inputPoints(); 
    polygon.outputArea(); 

    return 0;
}
