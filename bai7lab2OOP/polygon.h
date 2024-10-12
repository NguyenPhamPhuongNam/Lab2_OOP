#ifndef POLYGON_H
#define POLYGON_H

class Polygon {
private:
    int n; 
    float* points; 

public:
    Polygon(int numPoints);
    void inputPoints();
    float calculateArea();
    void outputArea();
};

#endif
