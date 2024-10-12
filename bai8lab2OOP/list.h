#ifndef LIST_H
#define LIST_H

class List {
private:
    double* data; 
    unsigned int size; 

public:
    List(); 
    void add(double x); 
    void removeFirst(double x); 
    void removeAll(double x); 
    void update(unsigned int index, double y); 
    void print(); 
     ~List();
};

#endif
