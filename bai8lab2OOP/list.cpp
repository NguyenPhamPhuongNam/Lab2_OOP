#include <bits/stdc++.h>
#include "list.h"

using namespace std;

List::List() {
    size = 0;
    data = nullptr; 
}

void List::add(double x) {
    double* newData = new double[size + 1]; 
    for (unsigned int i = 0; i < size; i++) {
        newData[i] = data[i]; 
    }
    newData[size] = x; 
    delete[] data; 
    data = newData; 
    size++; 
}

void List::removeFirst(double x) {
    for (unsigned int i = 0; i < size; i++) {
        if (data[i] == x) {
            double* newData = new double[size - 1]; 
            for (unsigned int j = 0; j < i; j++) {
                newData[j] = data[j]; 
            }
            for (unsigned int j = i; j < size - 1; j++) {
                newData[j] = data[j + 1]; 
            }
            delete[] data; 
            data = newData; 
            size--; 
            break;
        }
    }
}

void List::removeAll(double x) {
    for (unsigned int i = 0; i < size; i++) {
        if (data[i] == x) {
            removeFirst(x); 
            i--; 
        }
    }
}

void List::update(unsigned int index, double y) {
    if (index < size) {
        data[index] = y; 
    }
}

void List::print() {
    cout << "[";
    for (unsigned int i = 0; i < size; i++) {
        cout << data[i];
        if (i < size - 1) {
            cout << ",";
        }
    }
    cout << "]" << '\n'; 
}

List::~List() {
    delete[] data; 
}
