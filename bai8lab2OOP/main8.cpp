#include <>bits/stdc++.h>
#include "list.h"

using namespace std;

int main() {
    List myList; 
    int n;
    
    while (1) {
        cin >> n; 
        if (n == -1) {
            break; 
        }
        
        if (n == 0) {
            double x;
            cin >> x; 
            myList.add(x); 
        } else if (n == 1) {
            double x;
            cin >> x; 
            myList.removeFirst(x);
        } else if (n == 2) {
            double x;
            cin >> x; 
            myList.removeAll(x); 
        } else if (n == 3) {
            unsigned int x;
            double y;
            cin >> x >> y; 
            myList.update(x, y); 
        }
    }

    myList.print(); 
    return 0;
}
