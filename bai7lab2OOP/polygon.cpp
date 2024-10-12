#include <bits/stdc++.h>
#include "polygon.h"

using namespace std;

Polygon::Polygon(int numPoints) {
    n = numPoints;
    points = new float[n * 2]; 
}

void Polygon::inputPoints() {
    for (int i = 0; i < n; i++) {
        cin >> points[i * 2] >> points[i * 2 + 1]; 
    }
}

float Polygon::calculateArea() {
    float area = 0;
    for (int i = 0; i < n; i++) {
        int j = (i + 1) % n; 
        area += points[i * 2] * points[j * 2 + 1];
        area -= points[j * 2] * points[i * 2 + 1];
    }
    return abs(area) / 2.0;
}

void Polygon::outputArea() {
    cout << calculateArea() << '\n';
}
